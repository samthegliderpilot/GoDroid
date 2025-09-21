package com.samthegliderpilot.godroid;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.os.Handler;
import android.view.View;

final
class Globals
{
static final
class AppInfo
{
	String _appName, _appVersion;

	AppInfo ()
	{
		try
		{
			final PackageManager packageManager =
				_mainActivity.getPackageManager ();
			final PackageInfo packageInfo =
				packageManager.getPackageInfo (MainActivity._PACKAGE_NAME, 0);
			_appName = packageInfo.applicationInfo.loadLabel (packageManager).
				toString ();
			_appVersion = packageInfo.versionName;
		}
		catch (final Exception e)
		{
			_appName = "GoDroid";
			_appVersion = "unknown";
		}
	}
}

static
AppInfo _appInfo;

static
MainActivity _mainActivity;

static
Resources _resources;

static
Gtp _gtp;

static
BoardView _boardView;

static
String
	_autoSaveGamePathFileName,
	_externalInputPathFileName;

static
Handler _mainHandler;
}
