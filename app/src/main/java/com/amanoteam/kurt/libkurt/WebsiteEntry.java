package com.amanoteam.kurt.libkurt;

import android.graphics.Color;

import com.amanoteam.kurt.libkurt.WebsiteEntryDifficulty;

public class WebsiteEntry {
	
	private String name = null;
	private int difficulty = 0;
	private String url = null;
	private String email = null;
	private String notes = null;
	
	public WebsiteEntry() {}
	
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
	
	public String getDifficultyString() {
		
		switch (this.difficulty) {
			case WebsiteEntryDifficulty.EASY:
				return "Easy";
			case WebsiteEntryDifficulty.MEDIUM:
				return "Medium";
			case WebsiteEntryDifficulty.HARD:
				return "Hard";
			case WebsiteEntryDifficulty.IMPOSSIBLE:
				return "Impossible";
			case WebsiteEntryDifficulty.LIMITED:
				return "Limited";
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
	
	public String getDifficultyDescription() {
		
		switch (this.difficulty) {
			case WebsiteEntryDifficulty.EASY:
				return "This represents the lowest level of difficulty. Services in this section require a relatively low — if not trivial — amount of effort to delete your account.";
			case WebsiteEntryDifficulty.MEDIUM:
				return "This represents the medium level of difficulty. Services in this section might require you to take extra steps before deleting your account.";
			case WebsiteEntryDifficulty.HARD:
				return "This represents a high level of difficulty. Services in this section might require you to contact consumer support or the legal department for your account to be deleted.";
			case WebsiteEntryDifficulty.IMPOSSIBLE:
				return "This represents the highest level of difficulty. Services in this section either provide no means for your account to be deleted or only allow a small fraction of data to be deleted.";
			case WebsiteEntryDifficulty.LIMITED:
				return "This represents a level of difficulty dependent on external factors. For example, services in this section might only allow account deletion if you live in a region covered by local privacy protection laws.";
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
	
	public void setNotes(final String notes) {
		this.notes = notes;
	}
	
	public String getNotes() {
		return this.notes;
	}
	
}