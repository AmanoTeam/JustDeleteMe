package com.amanoteam.kurt.libkurt;

public class WebsiteEntryPaging {
	
	private int maximum = 25;
	private int position = -1;
	
	public WebsiteEntryPaging() {}
	
	public void setMaximum(final int value) {
		this.maximum = value;
	}
	
	public void setPosition(final int value) {
		this.position = value;
	}
	
	public void incrementPosition() {
		this.position += 1;
	}
	
	public void resetPosition() {
		this.position = -1;
	}
	
	public int getMaximum() {
		return this.maximum;
	}
	
	public int getPosition() {
		return this.position;
	}
	
}