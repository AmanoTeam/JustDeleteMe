package com.amanoteam.kurt.activities;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.OnSharedPreferenceChangeListener;
import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.view.inputmethod.InputMethodManager;

import androidx.activity.OnBackPressedDispatcher;
import androidx.appcompat.app.AppCompatActivity;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.lifecycle.ViewModelProvider;
import androidx.navigation.NavController;
import androidx.navigation.NavDestination;
import androidx.navigation.Navigation;
import androidx.navigation.ui.AppBarConfiguration;
import androidx.navigation.ui.NavigationUI;
import androidx.preference.PreferenceManager;

import com.google.android.material.appbar.AppBarLayout;
import com.google.android.material.appbar.MaterialToolbar;
import com.google.android.material.behavior.HideViewOnScrollBehavior;
import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.google.android.material.bottomnavigation.BottomNavigationView;

import com.amanoteam.kurt.R;
import com.amanoteam.kurt.databinding.ActivityMainBinding;
import com.amanoteam.kurt.models.KurtViewModel;
import com.amanoteam.kurt.utilities.PackageUtils;

public class MainActivity extends AppCompatActivity {
	
	private NavController navController = null;
	private KurtViewModel viewModel = null;
	
	OnBackPressedDispatcher onBackPressedDispatcher = null;
	
	private AppBarLayout appBarLayout = null;
	private BottomNavigationView bottomNavigationView = null;
	
	private OnSharedPreferenceChangeListener onSharedPreferenceChangeListener = (final SharedPreferences settings, final String key) -> {
		if (key.equals("appTheme")) {
			final String appTheme = settings.getString("appTheme", "follow_system");
			PackageUtils.setAppTheme(appTheme);
		}
	};
	
	@Override
	protected void onCreate(final Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		
		final ActivityMainBinding binding = ActivityMainBinding.inflate(getLayoutInflater());
		setContentView(binding.getRoot());
		
		final View fragmentContainer = findViewById(R.id.fragment_container_view);
		
		bottomNavigationView = binding.bottomNavigation;
		
		final FloatingActionButton button = findViewById(R.id.floating_action_button);
		
		final CoordinatorLayout.LayoutParams bottomNavigationLayout = (CoordinatorLayout.LayoutParams) bottomNavigationView.getLayoutParams();
		final CoordinatorLayout.LayoutParams floatingActionButtonLayout = (CoordinatorLayout.LayoutParams) button.getLayoutParams();
		
		@SuppressWarnings("unchecked")
		final HideViewOnScrollBehavior<BottomNavigationView> bottomNavigationBehavior = (HideViewOnScrollBehavior<BottomNavigationView>) bottomNavigationLayout.getBehavior();
		
		@SuppressWarnings("unchecked")
		final HideViewOnScrollBehavior<FloatingActionButton> floatingActionButtonBehavior = (HideViewOnScrollBehavior<FloatingActionButton>) floatingActionButtonLayout.getBehavior();
		
		bottomNavigationView.addOnLayoutChangeListener((final View view, final int left, final int top, final int right, final int bottom, final int oldLeft, final int oldTop, final int oldRight, final int oldBottom) -> {
			final int currentHeight = view.getHeight();
			final int previousHeight = oldBottom - oldTop;
			
			if (currentHeight == previousHeight) {
				return;
			}
			
			floatingActionButtonLayout.bottomMargin += currentHeight - previousHeight;
			
			button.setLayoutParams(floatingActionButtonLayout);
		});
		
		appBarLayout = findViewById(R.id.main_appbar);
		
		final MaterialToolbar toolbar = findViewById(R.id.main_toolbar);
		setSupportActionBar(toolbar);
		
		final SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(this);
		preferences.registerOnSharedPreferenceChangeListener(onSharedPreferenceChangeListener);
		
		viewModel = (
			new ViewModelProvider(this)
				.get(KurtViewModel.class)
		);
		
		viewModel.websiteEntriesFragment = null;
		
		final InputMethodManager inputMethodManager = (InputMethodManager) getSystemService(Context.INPUT_METHOD_SERVICE);
		
		final AppBarConfiguration appBarConfiguration = new AppBarConfiguration.Builder(
			R.id.navigation_website_entries, R.id.navigation_settings)
			.build();
		navController = Navigation.findNavController(this, R.id.fragment_container_view);
		NavigationUI.setupActionBarWithNavController(this, navController, appBarConfiguration);
		NavigationUI.setupWithNavController(binding.bottomNavigation, navController);
		
		navController.addOnDestinationChangedListener((final NavController controller, final NavDestination destination, final Bundle arguments) -> {
			appBarLayout.setExpanded(true, true);
			bottomNavigationBehavior.slideIn(bottomNavigationView, true);
			
			final int destinationId = destination.getId();
			appBarLayout.setLiftOnScrollTargetViewId(View.NO_ID);
			
			if (destinationId == R.id.navigation_website_entries) {
				button.setVisibility(View.VISIBLE);
				floatingActionButtonBehavior.slideIn(button, true);
				appBarLayout.setLiftOnScrollTargetViewId(R.id.website_entries);
			} else {
				button.setVisibility(View.GONE);
			}
			
			final View view = getCurrentFocus();
			
			if (view == null) {
				return;
			}
			
			final IBinder windowToken = view.getWindowToken();
			inputMethodManager.hideSoftInputFromWindow(windowToken, 0);
		});
		
		final Window window = getWindow();
		window.setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_HIDDEN);
		
		if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
			final WindowManager.LayoutParams params = window.getAttributes();
			params.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS;
			window.setAttributes(params);
		}
		
		WindowCompat.setDecorFitsSystemWindows(window, false);
		
		ViewCompat.setOnApplyWindowInsetsListener(toolbar, (final View view, final WindowInsetsCompat insets) -> {
			final Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
			final boolean imeVisible = insets.isVisible(WindowInsetsCompat.Type.ime());
			
			bottomNavigationView.setVisibility((imeVisible) ? View.GONE : View.VISIBLE);
			
			if (toolbar.getPaddingTop() == systemBars.top) {
				return insets;
			}
			
			toolbar.setPaddingRelative(
				systemBars.left,
				systemBars.top,
				systemBars.right,
				toolbar.getPaddingBottom()
			);
			
			return insets;
		});
		
		ViewCompat.setOnApplyWindowInsetsListener(fragmentContainer, (final View view, final WindowInsetsCompat insets) -> {
			final Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
			
			view.setPadding(
				view.getPaddingLeft(),
				view.getPaddingTop(),
				view.getPaddingRight(),
				systemBars.bottom
			);
			
			return insets;
			
		});
	}
	
	@Override
	public void onDestroy() {
		final SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(this);
		preferences.unregisterOnSharedPreferenceChangeListener(onSharedPreferenceChangeListener);
		
		super.onDestroy();
	}
	
	@Override
	public boolean onSupportNavigateUp() {
		return navController.navigateUp();
	}
	
	public AppBarLayout getAppBarLayout() {
		return appBarLayout;
	}
	
	public BottomNavigationView getBottomNavigation() {
		return bottomNavigationView;
	}
	
}
