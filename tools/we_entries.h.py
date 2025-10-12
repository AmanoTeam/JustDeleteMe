import json
import os
import urllib.parse
import xml.sax.saxutils

from utils import create_search_query

entries = None

difficulties = {
	"easy": 0x400,
	"medium": 0x800,
	"hard": 0x1000,
	"impossible": 0x2000,
	"limited": 0x4000
}

format = '''\
	{
		.id = %s,
		.name = %s,
		.query = %s,
		.url = %s,
		.email = %s,
		.difficulty = %s
	}\
'''

format_class = """\
package com.amanoteam.kurt.libkurt;

import java.util.List;

import com.amanoteam.kurt.R;

public class WebsiteEntryNotes {
	
	public static final int NOTES[] = {
%s
	};
	
}
"""

items = """\
#if !defined(WEBSITE_ENTRIES_H)
#define WEBSITE_ENTRIES_H

#include "we.h"

static const we_t WEBSITE_ENTRIES[] = {
%s
};

#endif
"""

text = ""

knotes = {}

directory = (
	os.path.dirname(
		p = os.path.dirname(
			p = os.path.realpath(
				filename = __file__
			)
		)
	)
)

source = os.path.join(
	directory,
	"submodules/jdm/_data/sites.json"
)

destination = os.path.join(
	directory,
	"app/jni/src/we_entries.h"
)

def dump(data):
	return json.dumps(obj = data, ensure_ascii = False)

print("- Reading websites data from '%s'" % (source))

with open(file = source) as file:
	entries = json.load(fp = file)

for (index, entry) in enumerate(entries):
	(name, query, url, email, email_subject, email_body, difficulty, notes) = (
		entry["name"],
		create_search_query(s = entry["name"]),
		entry["url"],
		entry.get("email"),
		entry.get("email_subject"),
		entry.get("email_body"),
		entry["difficulty"],
		entry.get("notes")
	)
	
	if email is not None:
		params = {
			"subject": email_subject,
			"body": email_body
		}
		
		email = "mailto:%s" % (email)
		q = ""
		
		for (key, value) in params.items():
			if value is None:
				continue
			
			q += "&%s=%s" % (key, urllib.parse.quote(string = value))
		
		if q:
			q = q.strip("&")
			email += "?%s" % (q)
	
	if email is None:
		email = "NULL"
	
	assert name is not None
	assert url is not None
	assert difficulty is not None
	
	item = format % (
		hex(index),
		dump(name),
		dump(query),
		dump(url),
		dump(email) if email != "NULL" else email,
		hex(difficulties[difficulty])
	)
	
	text += (item + ",\n")
	
	pattern = "notes"
	
	for (key, value) in entry.items():
		if not key.startswith(pattern):
			continue
		
		language_code = "en-US" if key == pattern else key[len(pattern) + 1:]
		
		if knotes.get(language_code) is None:
			knotes.update({language_code: []})
		
		value = (
			value
				.replace("<br>", "\n")
				.replace("⮕", "->")
		)
		
		knotes[language_code].append(
			{
				"id": index,
				"text": value
			}
		)
	
	if notes is None:
		knotes["en-US"].append(
			{
				"id": index,
				"text": "Unspecified"
			}
		)

text = (items % text)

print("- Exporting data to '%s'" % (destination))

with open(file = destination, mode = "w") as file:
	file.write(text)

resource_directory = os.path.join(
	directory,
	"app/src/main/res"
)

for (key, value) in knotes.items():
	text = '<?xml version="1.0" encoding="utf-8"?>'
	text += "\n<resources>\n"
	
	for item in value:
		(index, string) = (
			item["id"],
			(
				item["text"]
					.replace("\n", "\\n")
					.replace("'", "\\'")
					.replace('"', '\\"')
					.replace('@', '\\@')
					.replace('?', '\\?')
			)
		)
		
		text += '    <string name="entry_notes_%s">%s</string>\n' % (
			hex(index),
			xml.sax.saxutils.escape(data = string)
		)
	
	text += "</resources>"
	
	code = (
		key
			.replace("-PT", "-rPT")
			.replace("-BR", "-rBR")
	)
	
	name = "values" if (code == "en-US") else ("values-%s" % (code))
	
	path = os.path.join(
		resource_directory,
		name
	)
	
	if not os.path.exists(path = path):
		os.makedirs(name = path, exist_ok = True)
	
	destination = os.path.join(path, "notes.xml")
	
	print("- Exporting data to '%s'" % (destination))
	
	with open(file = destination, mode = "w") as file:
		file.write(text)

destination = os.path.join(
	directory,
	"app/src/main/java/com/amanoteam/kurt/libkurt/WebsiteEntryNotes.java"
)

text = ""

for item in knotes["en-US"]:
	index = item["id"]
	text += "\t\tR.string.entry_notes_%s,\n" % (hex(index))

text = format_class % (text)

print("- Exporting data to '%s'" % (destination))

with open(file = destination, mode = "w") as file:
	file.write(text)
