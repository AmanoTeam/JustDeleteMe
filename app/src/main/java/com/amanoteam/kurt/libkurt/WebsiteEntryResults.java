package com.amanoteam.kurt.libkurt;

import java.util.ArrayList;
import java.util.List;

import com.amanoteam.kurt.libkurt.WebsiteEntry;

public class WebsiteEntryResults {
	
	private ArrayList<WebsiteEntry> items = null;
	
	public WebsiteEntryResults() {}
	
	public void append(final WebsiteEntry entry) {
		if (this.items == null) {
			this.items = new ArrayList<WebsiteEntry>();
		}
		
		this.items.add(entry);
	}
	
	public WebsiteEntry getAtPosition(final int position) {
		return this.items.get(position);
	}
	
	public int getSize() {
		return this.items.size();
	}
	
	public void clear() {
		this.items.clear();
	}
	
	public List<WebsiteEntry> getItems() {
		return this.items;
	}
	
}
