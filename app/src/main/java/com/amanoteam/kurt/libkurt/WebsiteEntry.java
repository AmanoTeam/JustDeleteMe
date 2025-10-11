package com.amanoteam.kurt.libkurt;

import android.content.Context;
import android.graphics.Color;

import com.amanoteam.kurt.R;
import com.amanoteam.kurt.libkurt.WebsiteEntryDifficulty;
import com.amanoteam.kurt.libkurt.WebsiteEntryNotes;

public class WebsiteEntry {
	
	private int id = 0;
	private String name = null;
	private int difficulty = 0;
	private String url = null;
	private String email = null;
	
	public WebsiteEntry() {}
	
	public void setId(final int id) {
		this.id = id;
	}
	
	public int getId() {
		return this.id;
	}
	
	public void setName(final String name) {
		this.name = name;
	}
	
	public String getName() {
		return this.name;
	}
	
	public void setDifficulty(final int difficulty) {
		this.difficulty = difficulty;
	}
	
	public int getDifficulty() {
		return this.difficulty;
	}
	
	public String getDifficultyString(final Context context) {
		
		switch (this.difficulty) {
			case WebsiteEntryDifficulty.EASY:
				return context.getString(R.string.difficulty_easy);
			case WebsiteEntryDifficulty.MEDIUM:
				return context.getString(R.string.difficulty_medium);
			case WebsiteEntryDifficulty.HARD:
				return context.getString(R.string.difficulty_hard);
			case WebsiteEntryDifficulty.IMPOSSIBLE:
				return context.getString(R.string.difficulty_impossible);
			case WebsiteEntryDifficulty.LIMITED:
				return context.getString(R.string.difficulty_limited);
			default:
				return null;
		}
		
	}
	
	public int getDifficultyColor() {
		
		switch (this.difficulty) {
			case WebsiteEntryDifficulty.EASY:
				return Color.parseColor("#7BAC7B");
			case WebsiteEntryDifficulty.MEDIUM:
				return Color.parseColor("#E8C674");
			case WebsiteEntryDifficulty.HARD:
				return Color.parseColor("#D04343");
			case WebsiteEntryDifficulty.IMPOSSIBLE:
				return Color.parseColor("#2B2B2B");
			case WebsiteEntryDifficulty.LIMITED:
				return Color.parseColor("#B521CC");
			default:
				return 0;
		}
		
	}
	
	public int getDifficultyColorStroke() {
		
		switch (this.difficulty) {
			case WebsiteEntryDifficulty.EASY:
				return Color.parseColor("#5D895D");
			case WebsiteEntryDifficulty.MEDIUM:
				return Color.parseColor("#C5A65C");
			case WebsiteEntryDifficulty.HARD:
				return Color.parseColor("#AC4949");
			case WebsiteEntryDifficulty.IMPOSSIBLE:
				return Color.parseColor("#000000");
			case WebsiteEntryDifficulty.LIMITED:
				return Color.parseColor("#9923AC");
			default:
				return 0;
		}
		
	}
	
	public String getDifficultyDescription(final Context context) {
		
		switch (this.difficulty) {
			case WebsiteEntryDifficulty.EASY:
				return context.getString(R.string.difficulty_easy_summary);
			case WebsiteEntryDifficulty.MEDIUM:
				return context.getString(R.string.difficulty_medium_summary);
			case WebsiteEntryDifficulty.HARD:
				return context.getString(R.string.difficulty_hard_summary);
			case WebsiteEntryDifficulty.IMPOSSIBLE:
				return context.getString(R.string.difficulty_impossible_summary);
			case WebsiteEntryDifficulty.LIMITED:
				return context.getString(R.string.difficulty_limited_summary);
			default:
				return null;
		}
		
	}
	
	public void setUrl(final String url) {
		this.url = url;
	}
	
	public String getUrl() {
		return this.url;
	}
	
	public void setEmail(final String email) {
		this.email = email;
	}
	
	public String getEmail() {
		return this.email;
	}
	
	public String getNotes(final Context context) {
		final int res = WebsiteEntryNotes.NOTES[this.id];
		final String text = context.getString(res);
		
		if (text.equals("Unspecified")) {
			return null;
		}
		
		return text;
	}
	
}