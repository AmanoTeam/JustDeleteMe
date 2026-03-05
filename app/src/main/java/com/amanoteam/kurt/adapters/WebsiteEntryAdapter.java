package com.amanoteam.kurt.adapters;

import android.content.Context;
import android.graphics.Typeface;
import android.os.Build;
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
		
		final Context context = view.getContext();
		
		name.setOnLongClickListener((final View itemView) -> {
			PackageUtils.copyToClipboard(context, name.getText().toString());
			
			if (Build.VERSION.SDK_INT < Build.VERSION_CODES.S) {
				PackageUtils.showSnackbar(view, context.getString(R.string.copied_to_clipboard));
			}
			
			return true;
		});
		
	}
}

public class WebsiteEntryAdapter extends Adapter<WebsiteEntryViewHolder> {
	
	private LibKurt libkurt = null;
	
	private String query = null;
	
	private static final WebsiteEntryResults entries = new WebsiteEntryResults();
	private static final WebsiteEntryPaging paging = new WebsiteEntryPaging();
	
	private static final Looper looper = Looper.getMainLooper();
	private static final Handler handler = new Handler(looper);
	
	private SwipeRefreshLayout swipeRefresh = null;
	private FragmentActivity activity = null;
	
	private AlertDialog difficultyInfoDialog = null;
	private MaterialCardView difficultyInfoIcon = null;
	private MaterialTextView difficultyInfoText = null;
	
	private Markwon markwon = null;
	
	public void setLibKurt(final LibKurt libkurt) {
		this.libkurt = libkurt;
	}
	
	public void setQuery(final String query) {
		this.query = query;
		
		paging.resetPosition();
		entries.clear();
		
		handler.post(() -> {
			notifyDataSetChanged();
		});
	}
	
	public void setSwipeRefresher(final SwipeRefreshLayout swipeRefresh) {
		this.swipeRefresh = swipeRefresh;
	}
	
	public WebsiteEntryAdapter(final FragmentActivity activity) {
		
		final LayoutInflater inflater = LayoutInflater.from(activity);
		
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
		
		this.activity = activity;
		
		markwon = Markwon.create(activity);
		
	}
	
	public void performSearch() {
		final Thread thread = new Thread(() -> {
			paging.incrementPosition();
			
			final WebsiteEntryResults res = libkurt.websiteEntrySearch(query, paging);
			
			if (res == null || res.getItems() == null) {
				if (paging.getPosition() != 0) {
					return;
				}
				
				paging.resetPosition();
				entries.clear();
				
				handler.post(() -> {
					notifyDataSetChanged();
					swipeRefresh.setRefreshing(false);
				});
				
				return;
			}
			
			entries.addAll(res.getItems());
			
			handler.post(() -> {
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
		
		final ViewHolder holder = new WebsiteEntryViewHolder(view);
		
		return (WebsiteEntryViewHolder) holder;
		
	}

	@Override
	public void onBindViewHolder(final WebsiteEntryViewHolder viewHolder, final int position) {
		final WebsiteEntry item = entries.getAtPosition(position);
		
		final Context context = viewHolder.name.getContext();
		
		final String name = item.getName();
		final String difficulty = item.getDifficultyString(context);
		final int color = item.getDifficultyColor();
		final int strokeColor = item.getDifficultyColorStroke();
		final String url = item.getUrl();
		final String email = item.getEmail();
		final String notes = item.getNotes(context);
		
		if (position == (getItemCount() - 1)) {
			performSearch();
		}
		
		viewHolder.name.setText(name);
		viewHolder.difficulty.setText(difficulty);
		viewHolder.icon.setCardBackgroundColor(color);
		viewHolder.icon.setStrokeColor(strokeColor);
		
		viewHolder.name.setOnClickListener((final View view) -> {
			difficultyInfoIcon.setCardBackgroundColor(color);
			difficultyInfoIcon.setStrokeColor(strokeColor);
			
			difficultyInfoDialog.setTitle(R.string.notes);
			
			if (notes != null) {
				markwon.setMarkdown(difficultyInfoText, notes);
			}
			
			difficultyInfoText.setTypeface(null, Typeface.NORMAL);
			
			if (notes == null) {
				difficultyInfoText.setTypeface(null, Typeface.ITALIC);
				difficultyInfoText.setText(R.string.no_notes_available);
			}
			
			difficultyInfoText.scrollTo(0, 0);
			
			difficultyInfoDialog.show();
			
			final AppCompatButton positiveButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_POSITIVE);
			final AppCompatButton nagativeButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_NEGATIVE);
			
			positiveButton.setVisibility((url == null) ? View.GONE : View.VISIBLE);
			nagativeButton.setVisibility((email == null) ? View.GONE : View.VISIBLE);
			
			if (positiveButton.isShown()) {
				positiveButton.setText(R.string.open_website);
				positiveButton.setOnClickListener(button -> { PackageUtils.createChooser(activity, url); });
			}
			
			if (nagativeButton.isShown()) {
				nagativeButton.setText(R.string.send_email);
				nagativeButton.setOnClickListener(button -> { PackageUtils.createChooser(activity, email); });
			}
			
		});
		
		viewHolder.difficulty.setOnClickListener((final View view) -> {
			difficultyInfoIcon.setCardBackgroundColor(color);
			difficultyInfoIcon.setStrokeColor(strokeColor);
			
			difficultyInfoDialog.setTitle(R.string.level_of_difficulty);
			difficultyInfoText.setText(item.getDifficultyDescription(context));
			difficultyInfoDialog.show();
			
			final AppCompatButton positiveButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_POSITIVE);
			final AppCompatButton nagativeButton = (AppCompatButton) difficultyInfoDialog.getButton(AlertDialog.BUTTON_NEGATIVE);
			
			positiveButton.setVisibility(View.VISIBLE);
			nagativeButton.setVisibility(View.GONE);
			
			positiveButton.setText(R.string.got_it);
			positiveButton.setOnClickListener(button -> { difficultyInfoDialog.dismiss(); });
		});
	}

	@Override
	public int getItemCount() {
		return entries.getSize();
	}
	
}
