package com.amanoteam.kurt.fragments;

import android.content.Context;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.ViewGroup;
import android.view.inputmethod.InputMethodManager;
import android.view.LayoutInflater;
import android.view.View;
import android.os.Bundle;

import androidx.coordinatorlayout.widget.CoordinatorLayout.LayoutParams;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import androidx.lifecycle.ViewModelProvider;
import androidx.recyclerview.widget.DividerItemDecoration;
import androidx.recyclerview.widget.RecyclerView;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;
import androidx.appcompat.app.AlertDialog;

import com.google.android.material.appbar.AppBarLayout;
import com.google.android.material.behavior.HideViewOnScrollBehavior;
import com.google.android.material.bottomnavigation.BottomNavigationView;
import com.google.android.material.dialog.MaterialAlertDialogBuilder;
import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.google.android.material.snackbar.Snackbar;
import com.google.android.material.textfield.TextInputEditText;

import com.amanoteam.kurt.R;
import com.amanoteam.kurt.activities.MainActivity;
import com.amanoteam.kurt.adapters.WebsiteEntryAdapter;
import com.amanoteam.kurt.databinding.WebsiteEntriesFragmentBinding;
import com.amanoteam.kurt.libkurt.LibKurt;
import com.amanoteam.kurt.libkurt.WebsiteEntryPaging;
import com.amanoteam.kurt.models.KurtViewModel;

public class WebsiteEntriesFragment extends Fragment {
	
	private MainActivity activity = null;
	
	Snackbar snackbar = null;
	
	private KurtViewModel viewModel = null;
	private WebsiteEntriesFragmentBinding binding = null;
	
	private WebsiteEntryPaging paging = new WebsiteEntryPaging();
	
	@Override
	public View onCreateView(final LayoutInflater inflater, final ViewGroup container, final Bundle savedInstanceState) {
		final FragmentActivity activity = getActivity();
		
		viewModel = (
			new ViewModelProvider(activity)
				.get(KurtViewModel.class)
		);
		
		binding = viewModel.websiteEntriesFragment;
		
		if (binding == null) {
			binding = WebsiteEntriesFragmentBinding.inflate(inflater, container, false);
		}
		
		return binding.getRoot();
	}

	@Override
	public void onViewCreated(final View fragmentView, final Bundle savedInstanceState) {
		if (viewModel.websiteEntriesFragment != null) {
			return;
		}
		
		viewModel.websiteEntriesFragment = binding;
		viewModel.libkurt = new LibKurt();
		
		activity = (MainActivity) getActivity();
		
		final InputMethodManager inputMethodManager = (InputMethodManager) activity.getSystemService(Context.INPUT_METHOD_SERVICE);
		
		final SwipeRefreshLayout swipeRefresh = fragmentView.findViewById(R.id.swipe_to_refresh);
		
		final Context context = activity.getApplicationContext();
		
		final LayoutInflater layoutInflater = LayoutInflater.from(requireContext());
		
		final View websiteEntrySearchLayout = (View) layoutInflater.inflate(R.layout.website_entry_search_dialog, null);
		
		final TextInputEditText websiteEntrySearchInput = websiteEntrySearchLayout.findViewById(R.id.website_entry_search_input);
		
		final AlertDialog websiteEntrySearchDialog = new MaterialAlertDialogBuilder(activity)
			.setView(websiteEntrySearchLayout)
			.setNegativeButton(null, null)
			.setPositiveButton(null, null)
			.create();
		
		viewModel.websiteEntriesFragment = binding;
		viewModel.libkurt = new LibKurt();
		
		final WebsiteEntryAdapter websiteEntryAdapter = new WebsiteEntryAdapter();
		
		websiteEntryAdapter.setLibKurt(viewModel.libkurt);
		websiteEntryAdapter.setQuery(null);
		websiteEntryAdapter.setActivity(activity);
		websiteEntryAdapter.setSwipeRefresher(swipeRefresh);
		websiteEntryAdapter.performSearch();
		
		final RecyclerView recyclerView = fragmentView.findViewById(R.id.website_entries);
		
		recyclerView.addItemDecoration(new DividerItemDecoration(context, DividerItemDecoration.VERTICAL));
		recyclerView.addItemDecoration(new DividerItemDecoration(context, DividerItemDecoration.HORIZONTAL));
		recyclerView.setAdapter(websiteEntryAdapter);
		
		websiteEntrySearchInput.addTextChangedListener(new TextWatcher() {
			@Override
			public void onTextChanged(final CharSequence s, final int start, final int before, final int count) {
				final AppBarLayout appBar = activity.getAppBarLayout();
				
				final BottomNavigationView bottomNavigationView = activity.getBottomNavigation();
				final CoordinatorLayout.LayoutParams bottomNavigationLayout = (CoordinatorLayout.LayoutParams) bottomNavigationView.getLayoutParams();
				
				@SuppressWarnings("unchecked")
				final HideViewOnScrollBehavior<BottomNavigationView> hideOnScrollBehavior = (HideViewOnScrollBehavior<BottomNavigationView>) bottomNavigationLayout.getBehavior();
				
				swipeRefresh.setRefreshing(true);
				
				recyclerView.scrollToPosition(0);
				appBar.setExpanded(true, true);
				hideOnScrollBehavior.slideIn(bottomNavigationView, true);
				
				final String query = s.toString();
				websiteEntryAdapter.setQuery(query);
				
				websiteEntryAdapter.performSearch();
			}
			
			@Override
			public void beforeTextChanged(CharSequence s, int start, int count, int after) {}
			
			@Override
			public void afterTextChanged(Editable s) {}
		});
		
		fragmentView.post(() -> {
			final FloatingActionButton searchButton = activity.findViewById(R.id.floating_action_button);
			
			searchButton.setOnClickListener(button -> {
				websiteEntrySearchDialog.setTitle(R.string.search_entry);
				websiteEntrySearchDialog.show();
				
				websiteEntrySearchInput.postDelayed(new Runnable() {
					@Override
					public void run() {
						websiteEntrySearchInput.requestFocus();
						inputMethodManager.showSoftInput(websiteEntrySearchInput, InputMethodManager.SHOW_IMPLICIT);
					}
				}, 100);
			});
		});
		
		swipeRefresh.setOnRefreshListener(() -> {
			websiteEntrySearchInput.getText().clear();
			
			websiteEntryAdapter.setQuery(null);
			websiteEntryAdapter.performSearch();
			swipeRefresh.setRefreshing(false);
		});
		
	}
	
	
	
	
}
