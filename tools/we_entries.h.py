import json
import os
import urllib.parse

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
		.name = %s,
		.query = %s,
		.url = %s,
		.email = %s,
		.difficulty = %s,
		.notes = %s
	}\
'''

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

for entry in entries:
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
	
	if notes is None:
		notes = "NULL"
	
	if email is None:
		email = "NULL"
	
	assert name is not None
	assert url is not None
	assert difficulty is not None
	assert notes is not None
	
	notes = (
		notes
			.replace("<br>", "\n")
			.replace("⮕", "->")
	)
	
	item = format % (
		dump(name),
		dump(query),
		dump(url),
		dump(email) if email != "NULL" else email,
		hex(difficulties[difficulty]),
		dump(notes) if notes != "NULL" else notes
	)
	
	text += (item + ",\n")

text = (items % text)

print("- Exporting data to '%s'" % (destination))

with open(file = destination, mode = "w") as file:
	file.write(text)
