package com.amanoteam.kurt.adapters;

import android.content.Context;
import android.graphics.Typeface;
import android.os.Handler;
import android.os.Looper;
import android.text.method.LinkMovementMethod;
import android.text.method.ScrollingMovementMethod;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import android.view.LayoutInflater;

import androidx.appcompat.widget.AppCompatButton;
import androidx.fragment.app.FragmentActivity;
import androidx.recyclerview.widget.RecyclerView.Adapter;
import androidx.recyclerview.widget.RecyclerView.ViewHolder;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;
import androidx.appcompat.app.AlertDialog;

import com.google.android.material.card.MaterialCardView;
import com.google.android.material.dialog.MaterialAlertDialogBuilder;
import com.google.android.material.textview.MaterialTextView;

import com.amanoteam.kurt.R;
import com.amanoteam.kurt.libkurt.LibKurt;
import com.amanoteam.kurt.libkurt.WebsiteEntry;
import com.amanoteam.kurt.libkurt.WebsiteEntryPaging;
import com.amanoteam.kurt.libkurt.WebsiteEntryResults;
import com.amanoteam.kurt.utilities.PackageUtils;

import io.noties.markwon.Markwon;

final class WebsiteEntryViewHolder extends ViewHolder {

	public final MaterialTextView name;
	public final MaterialTextView difficulty;
	public final MaterialCardView icon;
	
	public WebsiteEntryViewHolder(final View view) {
		super(view);
		
		name = view.findViewById(R.id.website_entry_name);
		difficulty = view.findViewById(R.id.website_entry_difficulty);
		icon = view.findViewById(R.id.website_entry_difficulty_icon);
		
		name.setOnLongClickListener((final View itemView) -> {
			PackageUtils.copyToClipboard(view.getContext(), name.getText().toString());
			PackageUtils.showSnackbar(view, "Copied to clipboard");
			
			return true;
		});
		
	}
}

public class WebsiteEntryAdapter extends Adapter<WebsiteEntryViewHolder> {
	
	private LibKurt libkurt = null;
	
	private String query = null;
	private WebsiteEntryResults entries = null;
	private WebsiteEntryPaging paging = null;
	
	private SwipeRefreshLayout swipeRefresh = null;
	private FragmentActivity activity = null;
	private final Looper looper = Looper.getMainLooper();
	
	private AlertDialog difficultyInfoDialog = null;
	private MaterialCardView difficultyInfoIcon = null;
	private MaterialTextView difficultyInfoText = null;
	
	public void setLibKurt(final LibKurt libkurt) {
		this.libkurt = libkurt;
	}
	
	public void setQuery(final String query) {
		this.query = query;
		
		if (paging != null) {
			paging.resetPosition();
		}
		
		if (entries != null) {
			entries.clear();
		}
		
		new Handler(looper).post(() -> { notifyDataSetChanged(); });
	}
	
	public void setActivity(final FragmentActivity activity) {
		this.activity = activity;
	}
	
	public void setSwipeRefresher(final SwipeRefreshLayout swipeRefresh) {
		this.swipeRefresh = swipeRefresh;
	}
	
	public WebsiteEntryAdapter() {}
	
	public void performSearch() {
		final Thread thread = new Thread(() -> {
			WebsiteEntryResults res = null;
			
			if (this.paging == null) {
				this.paging = new WebsiteEntryPaging();
			}
			
			if (this.entries == null) {
				this.entries = new WebsiteEntryResults();
			}
			
			this.paging.incrementPosition();
			
			res = this.libkurt.websiteEntrySearch(this.query, this.paging);
			
			if (res == null || res.getItems() == null) {
				if (this.paging.getPosition() != 0) {
					return;
				}
				
				this.paging.resetPosition();
				this.entries.clear();
				
				new Handler(looper).post(() -> {
					notifyDataSetChanged();
					swipeRefresh.setRefreshing(false);
				});
				
				return;
			}
			
			for (final WebsiteEntry entry : res.getItems()) {
				this.entries.append(entry);
			}
			
			new Handler(looper).post(() -> {
				notifyDataSetChanged();
				swipeRefresh.setRefreshing(false);
			});
		});
		thread.start();
	}
	
	@Override
	public WebsiteEntryViewHolder onCreateViewHolder(final ViewGroup parent, final int viewType) {
		
		final Context context = parent.getContext();
		final LayoutInflater inflater = LayoutInflater.from(context);
		final View view = inflater.inflate(R.layout.website_entry, parent, false);
		
		final RelativeLayout difficultyInfoLayout = (RelativeLayout) inflater.inflate(R.layout.difficulty_info_dialog, null);
		
		difficultyInfoDialog = new MaterialAlertDialogBuilder(activity)
			.setView(difficultyInfoLayout)
			.setNegativeButton("Positive", null)
			.setPositiveButton("Negative", null)
			.create();
		
		difficultyInfoIcon = difficultyInfoLayout.findViewById(R.id.difficulty_info_icon);
		difficultyInfoText = difficultyInfoLayout.findViewById(R.id.difficulty_info_text);
		difficultyInfoText.setMovementMethod(new ScrollingMovementMethod());
		difficultyInfoText.setMovementMethod(new LinkMovementMethod());
		
		final ViewHolder holder = new WebsiteEntryViewHolder(view);
		
		return (WebsiteEntryViewHolder) holder;
		
	}

	@Override
	public void onBindViewHolder(final WebsiteEntryViewHolder viewHolder, final int position) {
		final WebsiteEntry item = this.entries.getAtPosition(position);
		
		final String name = item.getName();
		final String difficulty = item.getDifficultyString();
		final int color = item.getDifficultyColor();
		final int strokeColor = item.getDifficultyColorStroke();
		final String url = item.getUrl();
		final String email = item.getEmail();
		final String notes = item.getNotes();
		
		if (position == (this.getItemCount() - 1)) {
			performSearch();
		}
		
		viewHolder.name.setText(name);
		viewHolder.difficulty.setText(difficulty);
		viewHolder.icon.setCardBackgroundColor(color);
		viewHolder.icon.setStrokeColor(strokeColor);
		
		viewHolder.name.setOnClickListener((final View view) -> {
			difficultyInfoIcon.setCardBackgroundColor(color);
			difficultyInfoIcon.setStrokeColor(strokeColor);
			
			difficultyInfoDialog.setTitle("Notes");
			
			final Markwon markwon = Markwon.create(view.getContext());
			
			if (notes != null) {
				markwon.setMarkdown(difficultyInfoText, notes);
			}
			
			difficultyInfoText.setTypeface(null, Typeface.NORMAL);
			
			if (notes == null) {
				difficultyInfoText.setTypeface(null, Typeface.ITALIC);
				difficultyInfoText.setText("There are no notes available for this entry.");
			}
			
			difficultyInfoDialog.show();
			
			final AppCompatButton positiveButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_POSITIVE);
			final AppCompatButton nagativeButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_NEGATIVE);
			
			positiveButton.setVisibility((url == null) ? View.GONE : View.VISIBLE);
			nagativeButton.setVisibility((email == null) ? View.GONE : View.VISIBLE);
			
			if (positiveButton.isShown()) {
				positiveButton.setText("Open website");
				positiveButton.setOnClickListener(button -> { PackageUtils.createChooser(activity, url); });
			}
			
			if (nagativeButton.isShown()) {
				nagativeButton.setText("Send email");
				nagativeButton.setOnClickListener(button -> { PackageUtils.createChooser(activity, email); });
			}
			
		});
		
		viewHolder.difficulty.setOnClickListener((final View view) -> {
			difficultyInfoIcon.setCardBackgroundColor(color);
			difficultyInfoIcon.setStrokeColor(strokeColor);
			
			difficultyInfoDialog.setTitle("Level of difficulty");
			difficultyInfoText.setText(item.getDifficultyDescription());
			difficultyInfoDialog.show();
			
			final AppCompatButton positiveButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_POSITIVE);
			final AppCompatButton nagativeButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_NEGATIVE);
			
			positiveButton.setVisibility(View.VISIBLE);
			nagativeButton.setVisibility(View.GONE);
			
			positiveButton.setText("Got it");
			positiveButton.setOnClickListener(button -> { difficultyInfoDialog.dismiss(); });
		});
	}

	@Override
	public int getItemCount() {
		
		if (entries == null) {
			return 0;
		}
		
		return entries.getSize();
		
	}
	
}
