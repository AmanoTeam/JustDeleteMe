package com.amanoteam.kurt.libkurt;

import java.util.ArrayList;
import java.util.List;

import com.amanoteam.kurt.libkurt.WebsiteEntry;

public class WebsiteEntryResults {
	
	private final ArrayList<WebsiteEntry> items = new ArrayList<WebsiteEntry>();
	
	public WebsiteEntryResults() {}
	
	public void append(final WebsiteEntry entry) {
		items.add(entry);
	}
	
	public void addAll(final List<WebsiteEntry> subitems) {
		items.addAll(subitems);
	}
	
	public WebsiteEntry getAtPosition(final int position) {
		return items.get(position);
	}
	
	public int getSize() {
		return items.size();
	}
	
	public void clear() {
		items.clear();
	}
	
	public List<WebsiteEntry> getItems() {
		return items;
	}
	
}
