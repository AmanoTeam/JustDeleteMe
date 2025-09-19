package com.amanoteam.kurt.fragments;

import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.os.Bundle;

import androidx.fragment.app.FragmentActivity;
import androidx.lifecycle.ViewModelProvider;
import androidx.preference.PreferenceFragmentCompat;

import com.amanoteam.kurt.R;
import com.amanoteam.kurt.models.KurtViewModel;

public class SettingsFragment extends PreferenceFragmentCompat {
	
	private KurtViewModel viewModel = null;
	
	@Override
	public void onCreatePreferences(final Bundle savedInstanceState, final String rootKey) {
		setPreferencesFromResource(R.xml.preferences, rootKey);
	}
	/*
	@Override
	public View onCreateView(final LayoutInflater inflater, final ViewGroup container, final Bundle savedInstanceState) {
		final FragmentActivity activity = getActivity();
		
		viewModel = (
			new ViewModelProvider(activity)
				.get(KurtViewModel.class)
		);
		
		binding = (
			(viewModel.settingsFragment == null) ?
			SettingsFragmentBinding.inflate(inflater, container, false) :
			viewModel.settingsFragment
		);
		
		return binding.getRoot();
	}

	@Override
	public void onViewCreated(final View fragmentView, final Bundle savedInstanceState) {
		if (viewModel.settingsFragment != null) {
			return;
		}
		
		viewModel.settingsFragment = binding;
	}
	*/
}
