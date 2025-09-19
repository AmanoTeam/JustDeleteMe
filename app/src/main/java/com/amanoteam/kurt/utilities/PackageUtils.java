package com.amanoteam.kurt.utilities;

import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.view.Gravity;
import android.view.View;

import androidx.appcompat.app.AppCompatDelegate;
import androidx.coordinatorlayout.widget.CoordinatorLayout.LayoutParams;

import com.google.android.material.snackbar.Snackbar;

import com.amanoteam.kurt.R;

public class PackageUtils {
	
	public static void createChooser(final Context context, final String url) {
		
		final Uri uri = Uri.parse(url);
		
		final Intent intent = new Intent();
		intent.setAction(url.startsWith("mailto:") ? Intent.ACTION_SENDTO : Intent.ACTION_VIEW);
		intent.setData(uri);
		
		final Intent chooser = Intent.createChooser(intent, url);
		context.startActivity(chooser);
		
	}
	
	public static void setAppTheme(final String appTheme) {
		switch (appTheme) {
			case "follow_system":
				AppCompatDelegate.setDefaultNightMode(AppCompatDelegate.MODE_NIGHT_FOLLOW_SYSTEM);
				break;
			case "dark":
				AppCompatDelegate.setDefaultNightMode(AppCompatDelegate.MODE_NIGHT_YES);
				break;
			case "light":
			default:
				AppCompatDelegate.setDefaultNightMode(AppCompatDelegate.MODE_NIGHT_NO);
				break;
		}
	}

	public static Snackbar createSnackbar(final View view, final String text, final int duration) {
		final Snackbar snackbar = Snackbar.make(view, text, duration);
		final View snackbarView = snackbar.getView();

		final LayoutParams params = (LayoutParams) snackbarView.getLayoutParams();
		params.setAnchorId(R.id.bottom_navigation);
		params.gravity = Gravity.TOP;
		params.anchorGravity = Gravity.TOP;

		snackbarView.setLayoutParams(params);

		return snackbar;
	}

	public static void showSnackbar(final View view, final String text) {
		final Snackbar snackbar = createSnackbar(view, text, Snackbar.LENGTH_SHORT);
		snackbar.show();
	}
	
	public static void copyToClipboard(final Context context, final String text) {
		final ClipboardManager clipboard = (ClipboardManager) context.getSystemService(context.CLIPBOARD_SERVICE);
		clipboard.setPrimaryClip(ClipData.newPlainText(null, text));
	}
	
}
