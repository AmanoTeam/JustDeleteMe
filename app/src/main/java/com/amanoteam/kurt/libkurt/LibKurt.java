package com.amanoteam.kurt.libkurt;

import com.amanoteam.kurt.libkurt.WebsiteEntryPaging;
import com.amanoteam.kurt.libkurt.WebsiteEntryResults;

public class LibKurt {
	
	static {
		System.loadLibrary("kurt");
	}
	
	public LibKurt() {}
	
	private native WebsiteEntryResults we_search(
		final String query,
		final WebsiteEntryPaging paging
	);
	
	public WebsiteEntryResults websiteEntrySearch(
		final String query,
		final WebsiteEntryPaging paging
	) {
		return this.we_search(query, paging);
	}
	
}
