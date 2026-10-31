package com.samthegliderpilot.godroid;

import java.io.File;
import java.io.FileFilter;
import java.net.URL;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Set;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.view.View;
import android.view.WindowManager;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.widget.*;

//import androidx.activity.EdgeToEdge;
import androidx.activity.EdgeToEdge;
import androidx.activity.OnBackPressedCallback;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.WindowInsetsControllerCompat;
import androidx.lifecycle.ViewModelProvider;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.Point;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.text.Editable;
import android.text.TextUtils;
import android.util.Log;
import android.view.GestureDetector;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.view.Window;
import android.webkit.WebView;
import android.widget.ArrayAdapter;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;
import com.samthegliderpilot.util.AssetsManager;
import com.samthegliderpilot.util.Generics;

import static com.samthegliderpilot.util.Logging.buidLogTag;
import static com.samthegliderpilot.util.Logging.isEnabledFor;
import static com.samthegliderpilot.util.Logging.log;

public
class MainActivity
	extends AppCompatActivity
{
public static final
String
	_PACKAGE_NAME = MainActivity.class.getPackage ().getName (),
	_LOG_TAG = buidLogTag (_PACKAGE_NAME);

private static final
String
	_GNUGO_THREAD_NAME = "gnuGo";

static final
int
	_SHOW_MESSAGE = -2;

enum MainCommand
{
	SHOW_MOVE,
	SHOW_CAPTURES,
	ENABLE_PASS_MENU,
	SHOW_WAIT_PROGRESS,
	SHOW_SCORE,
	ENABLE_UNDO_MENU,
	SHOW_COLLECTION_LIST,
	SHARE_GAME;

	int _cmd;
}
private static final
Map <Integer, MainCommand> _cmdMessagesMap;
static
{
	final MainCommand[] values = MainCommand.values ();
	final Map <Integer, MainCommand> cmdMessagesMap =
		_cmdMessagesMap = Generics.newHashMap (values.length);
	int numMessage = 0;
	for (final MainCommand message : values)
	{
		cmdMessagesMap.put (message._cmd = numMessage++, message);
	}
}

static final
class AppInfo
{
	final String _appName, _appVersion;

	AppInfo (
		final Context pContext
		)
	{
		String appName, appVersion;
		try
		{
			final PackageManager packageManager = pContext.getPackageManager ();
			final PackageInfo packageInfo =
				packageManager.getPackageInfo (_PACKAGE_NAME, 0);
			appName = packageInfo.applicationInfo.loadLabel (packageManager).
				toString ();
			appVersion = packageInfo.versionName;
		}
		catch (final Exception e)
		{
			appName = "GoDroid";
			appVersion = "unknown";
		}
		_appName = appName;
		_appVersion = appVersion;
	}
}

AppInfo _appInfo;

private
SharedPreferences _sharedPreferences;

private
String
	_preferencesLastSaveLoadUriKey,
	_preferencesOldSavesMigrationDismissedKey;

private
Looper _gnuGoLooper;

private
Thread _gnuGoThread;

private
GameInfo _gameInfo;

private
BoardView _boardView;

private
Gtp _gtp;

private
AlertDialog  _progressDialog;

private
androidx.compose.runtime.MutableState <ScoreViewState> _scoreViewState;

private
GameClock _gameClock;

private
MenuItem
	_saveLoadMenuItem,
	_passMenuItem,
	_undoMenuItem, _redoMenuItem,
	_restartMenuItem;

private
boolean _undoEnabled = false, _redoEnabled = false;

private
int _blackCaptures = 0, _whiteCaptures = 0;

    private
Toast _undoRedoHint;

private
CharSequence
	_undoHintText, _redoHintText,
	_noUndoHintText, _noRedoHintText,
	_yourTurnText;

SaveLoadController _saveLoadController;

OldSavesMigrationController _oldSavesMigrationController;

private static
GoEngineViewModel _goEngineViewModel;

private
SettingsDataStore _settingsDataStore;

static
String playGTP (String pInput)
{
	return _goEngineViewModel.playGTP (pInput);
}

public
void onCreate ( // 0
	final Bundle pSavedInstanceState
	)
{
	super.onCreate (pSavedInstanceState);
	_goEngineViewModel = new ViewModelProvider (this).get (GoEngineViewModel.class);
	_settingsDataStore = new SettingsDataStore (this);
	_appInfo = new AppInfo (this);
	final Resources resources = getResources ();

	//_saveLoadGamesDirName = resources.getString (R.string.app_name);
	final String autoSaveGamePathFileName =
		getFileStreamPath (resources.getString (R.string.autoSaveFileName)).
			toString ();
	_sharedPreferences =  getSharedPreferences("app_prefs", Context.MODE_PRIVATE);
	_preferencesLastSaveLoadUriKey = resources.getString (
			R.string.preferencesLastSaveLoadUriKey);
	_preferencesOldSavesMigrationDismissedKey = resources.getString (
			R.string.preferencesOldSavesMigrationDismissedKey);

	_undoHintText = resources.getText (R.string.undoHintText);
	_redoHintText = resources.getText (R.string.redoHintText);
	_noUndoHintText = resources.getText (R.string.noUndoHintText);
	_noRedoHintText = resources.getText (R.string.noRedoHintText);
	_yourTurnText = resources.getText (R.string.yourTurnText);

	setContentView (R.layout.main);
	_boardView = findViewById (R.id.boardView);
	_boardView.setEdgeTapPaddingMode (_settingsDataStore.getEdgeTapPaddingModeBlocking ());
	_boardView.setShowCoordinates (_settingsDataStore.getShowCoordinatesBlocking ());
	//if (Build.VERSION.SDK_INT >= 34) {
	//	EdgeToEdge.enable(this);
	//}

	_scoreViewState = ScoreScreenKt.createScoreViewState ();
	_scoreViewState.setValue (ScoreScreenKt.withClockEnabled (
		_scoreViewState.getValue (), _settingsDataStore.getClockEnabledBlocking ()));
	_gameClock = new GameClock (new GameClockListener ()
	{
		public
		void onClockTick (
			final String pBlackTime,
			final String pWhiteTime
			)
		{
			_scoreViewState.setValue (ScoreScreenKt.withClockTimes (
				_scoreViewState.getValue (), pBlackTime, pWhiteTime));
		}
	});
	ScoreScreenKt.setUpScoreComposeView (
		(androidx.compose.ui.platform.ComposeView)findViewById (R.id.scoreComposeView),
		_scoreViewState);
 	_undoRedoHint = makeToast (this, "");

	View menuButton = findViewById(R.id.MenuButton);
	menuButton.setOnClickListener(new View.OnClickListener() {
		@Override
		public void onClick(View v) {
			PopupMenu popup = new PopupMenu(
				new android.view.ContextThemeWrapper(MainActivity.this, R.style.CompactPopupMenu), v);
			popup.getMenuInflater().inflate(R.menu.menu, popup.getMenu());
			popup.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() {
				@Override
				public boolean onMenuItemClick(MenuItem item) {
					return onOptionsItemSelected(item);  // Delegate to existing logic
				}
			});
			popup.show();
		}
	});
	//animatePulse(menuButton);
	menuButton.post(() -> animatePulse(menuButton));
	final View scoreView = findViewById (R.id.scoreView);
	((ScoreView)scoreView)._gestureDetector =
		new GestureDetector (this,
			new GestureDetector.SimpleOnGestureListener ()
	{
		public
		boolean onFling (
			final MotionEvent pMotionEvent,
			final MotionEvent pMotionEvent1,
			final float pVelo,
			final float pVelo1
			)
		{
			final CharSequence toastText;
			final boolean undo =
				pMotionEvent.getRawX () - pMotionEvent1.getRawX () > 0;
			if (undo)
			{
				if (_undoEnabled)
				{
					undo ();
					return true;
				}
				else
				{
					toastText = _noUndoHintText;
				}
			}
			else if (_redoEnabled)
			{
				redo ();
				return true;
			}
			else
			{
				toastText = _noRedoHintText;
			}
			showUndoRedoHint (toastText);
			return true;
		}
	});

	final Handler mainHandler = new Handler (getMainLooper())
	{
		public
		void handleMessage (
			final Message pMessage
			)
		{
			final MainCommand cmd =
				_cmdMessagesMap.get (pMessage.what);
			if (cmd == null)
			{
				return;
			}
			switch (cmd)
			{
			case SHOW_MOVE:
				showMove (pMessage.arg1 != 0, (String)pMessage.obj);
				break;
			case SHOW_CAPTURES:
				showCaptures (pMessage.arg1, pMessage.arg2);
				break;
			case ENABLE_PASS_MENU:
				enablePassMenu ((Boolean)pMessage.obj);
				break;
			case ENABLE_UNDO_MENU:
				final Object obj = pMessage.obj;
				enableUndoMenu (obj == null ? null : (GameInfo)obj);
				break;
			case SHOW_WAIT_PROGRESS:
				showWaitProgress ((String)pMessage.obj);
				break;
			case SHOW_SCORE:
				showScore (pMessage.arg1, pMessage.arg2, pMessage.obj);
				break;
			case SHOW_COLLECTION_LIST:
				showCollectionList ();
				break;
			case SHARE_GAME:
				shareGame ((Uri)pMessage.obj);
				break;
			}
		}};

	final HandlerThread gtpThread = new HandlerThread (_GNUGO_THREAD_NAME);
	_gnuGoThread = gtpThread;
	gtpThread.start ();
	final Looper gtpLooper = _gnuGoLooper = gtpThread.getLooper ();
	if (gtpLooper == null)
	{
		return;
	}
	_gtp = new Gtp (
		new Handler (gtpLooper)
		{
			public
			void handleMessage (
				final Message pMessage
				)
			{
				_gtp.handleMessage (pMessage);
			}
		},
		mainHandler, autoSaveGamePathFileName, this, _boardView);

	_saveLoadController = new SaveLoadController (
		this, _sharedPreferences, _preferencesLastSaveLoadUriKey, _gtp,
		() -> _gameInfo, this::showWait4Move2FinishMessage,
		() -> newGame (restoreGameInfo (new GameInfo ()), null),
		this::showCollectionList);

	_oldSavesMigrationController = new OldSavesMigrationController (
		this, _sharedPreferences, _preferencesOldSavesMigrationDismissedKey,
		_saveLoadController.getSgfFileExtension ());

	getOnBackPressedDispatcher().addCallback(this, new OnBackPressedCallback(true) {
		@Override
		public void handleOnBackPressed() {
			if (_undoEnabled) {
				undo();
			}
		}
	});


	Window window = getWindow();

	// Opt-in to edge-to-edge layout (required for Android 14+ best practices)
	WindowCompat.setDecorFitsSystemWindows(window, false);

	// Draw behind system bars, but we'll add padding ourselves
	window.addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);

	WindowInsetsControllerCompat insetsController =
			WindowCompat.getInsetsController(window, window.getDecorView());

	// Make status bar icons light (dark background)
	insetsController.setAppearanceLightStatusBars(false);

	// Manually pad your root layout to avoid overlap
	View rootView = findViewById(R.id.root_layout);
	ViewCompat.setOnApplyWindowInsetsListener(rootView, (v, insets) -> {
		Insets systemInsets = insets.getInsets(WindowInsetsCompat.Type.systemBars());

		v.setPadding(
				systemInsets.left,
				systemInsets.top,
				systemInsets.right,
				systemInsets.bottom
		);

		return insets;
	});
}

@Override
public
void onStart ()
{
	super.onStart ();
	if (_gameInfo == null)
	{
		onNewIntent (getIntent ());
	}
	getWindow ().getDecorView ().post (_oldSavesMigrationController::offerMigration);
}

@Override
protected void onResume() {
	super.onResume();

	Window window = getWindow();
	window.addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);

	WindowInsetsControllerCompat insetsController =
			WindowCompat.getInsetsController(window, window.getDecorView());

	// Because background is dark, force light icons
	insetsController.setAppearanceLightStatusBars(false);
}

@Override
public void onWindowFocusChanged(boolean hasFocus) {
	super.onWindowFocusChanged(hasFocus);
	// Fires false both when the app is truly backgrounded and whenever any of
	// this app's own dialogs (New/Edit Game, App Preferences, the overflow
	// PopupMenu - all separate windows) take focus, so this one hook covers
	// everything the game clock should pause for without special-casing each
	// dialog or adding onPause/onStop.
	if (_gameClock != null) {
		if (hasFocus) {
			_gameClock.resume();
		} else {
			_gameClock.pause();
		}
	}
}

@Override
public
void onNewIntent (
	final Intent pIntent
	)
{
	super.onNewIntent (pIntent);
	if (pIntent == null || !Intent.ACTION_VIEW.equals (pIntent.getAction ()))
	{
		return;
	}
	final Uri uri = pIntent.getData ();
	if (uri == null)
	{
		return;
	}
	try
	{
		if (isEnabledFor (_LOG_TAG, Log.INFO))
		{
			log (_LOG_TAG, Log.INFO, "got intent data uri: '" + uri + "'");
		}
		final String scheme = uri.getScheme ();
		final File inputFile = AssetsManager.copyFile (
			"content".equals (scheme) ?
				getContentResolver ().openInputStream (uri) :
				new URL (scheme, uri.getHost (), uri.getPort (),
					uri.getEncodedPath ()).
						openConnection ().getInputStream (),
			getFileStreamPath (uri.getLastPathSegment ()).toString ());
		if (inputFile != null)
		{
			inputFile.deleteOnExit ();
			_gtp.setExternalInputPath (inputFile.getAbsolutePath ());
			if (_gameInfo != null)
			{
				newGame ();
			}
		}
	}
	catch (final Exception e)
	{
		if (isEnabledFor (_LOG_TAG, Log.WARN))
		{
			log (_LOG_TAG, Log.WARN,
				"failed to copy intent data file : '" + e + "'");
		}
	}
}

protected
void onDestroy ()
{
	_gnuGoLooper.quit ();
	final Thread thread = _gnuGoThread;
	while (true)
	{
		try
		{
			thread.join ();
			break;
		}
		catch (final InterruptedException e) {}
	}
	super.onDestroy ();
}

	private void animatePulse(View view) {
		ObjectAnimator scaleX = ObjectAnimator.ofFloat(view, "scaleX", 1f, 1.5f, 1f);
		ObjectAnimator scaleY = ObjectAnimator.ofFloat(view, "scaleY", 1f, 1.5f, 1f);

		// Set repeat count individually
		scaleX.setRepeatCount(10);  // Number of *extra* repetitions
		scaleY.setRepeatCount(10);
		scaleX.setRepeatMode(ValueAnimator.RESTART);
		scaleY.setRepeatMode(ValueAnimator.RESTART);

		AnimatorSet pulse = new AnimatorSet();
		pulse.playTogether(scaleX, scaleY);
		pulse.setDuration(2000);
		pulse.setInterpolator(new AccelerateDecelerateInterpolator());
		pulse.start();
	}


public
boolean onCreateOptionsMenu (
	final Menu pMenu
	)
{
	super.onCreateOptionsMenu (pMenu);
	getMenuInflater ().inflate (R.menu.menu, pMenu);
	_saveLoadMenuItem = pMenu.findItem (R.id.menuSaveLoad);
	_passMenuItem = pMenu.findItem (R.id.menuPass);
	final MenuItem
		undoMenuItem = _undoMenuItem = pMenu.findItem (R.id.menuUndo);
	_redoMenuItem = pMenu.findItem (R.id.menuRedo);
	_restartMenuItem = pMenu.findItem (R.id.menuToStart);
	final Drawable undoDrawable = undoMenuItem.getIcon ();
	final int width = undoDrawable.getIntrinsicWidth (),
		height = undoDrawable.getIntrinsicHeight ();
	final Bitmap redoBitmap = Bitmap.createBitmap (width, height,
		Bitmap.Config.ARGB_8888);
	final Canvas canvas = new Canvas (redoBitmap);
	undoDrawable.setBounds (0, 0, width, height);
	undoDrawable.draw (canvas);
	final Matrix matrix = new Matrix ();
	matrix.preScale (-1, 1);
	try
	{
		_redoMenuItem.setIcon (new BitmapDrawable (getResources (),
			Bitmap.createBitmap (redoBitmap, 0, 0,
				width, height, matrix, false)));
	}
	catch (final Exception e) {}
	final GameInfo gameInfo = _gameInfo;
	if (gameInfo != null)
	{
		enablePassMenu (!Gtp.playerIsMachine (gameInfo)
			&& !gameInfo.bothPlayersPassed ());
		enableUndoMenu (gameInfo);
	}
	return true;
}

public
boolean onPrepareOptionsMenu (
	final Menu pMenu
	)
{
	super.onPrepareOptionsMenu (pMenu);
	enableMenuItem (_saveLoadMenuItem, true);
	return true;
}

static
void enableMenuItem (
	final MenuItem pMenuItem,
	final boolean pEnable
	)
{
	if (pMenuItem == null)
	{
		return;
	}
//	pMenuItem.setVisible (pEnable);
	pMenuItem.setEnabled (pEnable);
}

	public
	boolean onOptionsItemSelected (
			final MenuItem pItem
	)
	{
		int id = pItem.getItemId();

		if (id == R.id.menuNewGame) {
			showNewGame();
			return true;
		} else if (id == R.id.menuPass) {
			showMove(_gameInfo._playerBlackMoves, getPassedText(false));
			nextMove(GameInfo.Passed._Passed);
			return true;
		} else if (id == R.id.menuUndo) {
			showUndoRedoHint(_undoHintText);
			undo();
			return true;
		} else if (id == R.id.menuRedo) {
			showUndoRedoHint(_redoHintText);
			redo();
			return true;
		} else if (id == R.id.menuSave) {
			_saveLoadController.launchSaveGamePicker();
			return true;
		} else if (id == R.id.menuLoad) {
			_saveLoadController.launchLoadGamePicker();
			return true;
		} else if (id == R.id.menuInfo) {
			showInfo();
			return true;
		} else if (id == R.id.menuToStart) {
			restartGame();
			return true;
		} else if (id == R.id.menuShareGame) {
			gtpShareGame();
			return true;
		} else if (id == R.id.menuDisplaySettings) {
			showDisplaySettingsDialog();
			return true;
		} else if (id == R.id.menuExit) {
			//System.runFinalizersOnExit(true);
			System.exit(0);
			return true;
		}

		return false;
	}

private
void showNewGame ()
{
	final GameInfo currentGameInfo = _gameInfo;
	final NewGameSettings original = new NewGameSettings (
		currentGameInfo._boardSize, currentGameInfo._handicap,
		currentGameInfo._playerBlackHuman, currentGameInfo._playerWhiteHuman,
		currentGameInfo._level, currentGameInfo._komi,
		currentGameInfo._chineseRules, currentGameInfo._aiDelaySeconds,
		currentGameInfo._allowResignation);
	NewGameScreenKt.showNewGameDialog (this, original,
		(settings, startFresh) ->
		{
			final GameInfo gameInfo = new GameInfo ();
			gameInfo._boardSize = settings.getBoardSize ();
			gameInfo._handicap = settings.getHandicap ();
			gameInfo._playerBlackHuman = settings.getPlayerBlackHuman ();
			gameInfo._playerWhiteHuman = settings.getPlayerWhiteHuman ();
			gameInfo._level = settings.getLevel ();
			gameInfo._komi = settings.getKomi ();
			gameInfo._chineseRules = settings.getChineseRules ();
			gameInfo._aiDelaySeconds = settings.getAiDelaySeconds ();
			gameInfo._allowResignation = settings.getAllowResignation ();
			newGame (storeGameInfo (gameInfo), startFresh);
		});
}

private
void undo ()
{
	final GameInfo gameInfo = _gameInfo;
	if (!gameInfo._invalid)
	{
		_gtp.undoMove (gameInfo);
	}
}

private
void redo ()
{
	_gtp.redoMove (_gameInfo);
}

// Package-private (not private): BoardView also calls this directly, to
// redraw territory after a real resize - see its surfaceChanged.
void showTerritory ()
{
	_gtp.showTerritory (_gameInfo);
}

// Package-private: lets BoardView.surfaceChanged decide whether a real
// resize needs to replay territory/dead-stone markers via showTerritory()
// above, without exposing _gameInfo itself.
boolean isGameScored ()
{
	return _gameInfo != null && _gameInfo.bothPlayersPassed ();
}


void shareGame (
	final Uri pUri
	)
{

	if (pUri == null)
	{
		return;
	}
	final Intent shareIntent = new Intent (Intent.ACTION_SEND);
	shareIntent.setType("application/x-go-sgf");
	shareIntent.putExtra(Intent.EXTRA_STREAM, pUri);
	shareIntent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
	shareIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_DOCUMENT);
//    shareIntent.putExtra (Intent.EXTRA_STREAM, pUri);
//	if (shareIntent.resolveActivity(getPackageManager()) != null) {
//		startActivity(Intent.createChooser(shareIntent, "Share game via"));
//	} else {
//		Toast.makeText(this, "No app found to share the game", Toast.LENGTH_SHORT).show();
	//}
	startActivity (shareIntent);
}

void gtpShareGame ()
{
	final GameInfo gameInfo = _gameInfo;
	showWait4Move2FinishMessage (gameInfo);
	_gtp.shareGame (gameInfo);
}

private
void restartGame ()
{
	_gtp.restartGame (_gameInfo);
}

void showCollectionList ()
{
	final Resources resources = getResources ();
	final GameInfo gameInfo = _gameInfo;
	final String[] names = gameInfo._collectionNames;
	if (names == null || names.length == 0)
	{
		showMessage (resources.getString (R.string.noFiles2load,
			gameInfo.getFileNameForMessages ()));
		return;
	}
	final List <String> namesList = Arrays.asList (names);
	final int selectedPos = gameInfo._collectionIdx;
	final String [] checkedIdx = new String [1];
	if (selectedPos >= 0 && selectedPos < names.length)
	{
		checkedIdx[0] = names[selectedPos];
	}

	final ViewStub viewStub = new ViewStub (this, R.layout.load_game);
	final Dialog dialog = new Dialog (this);
	dialog.getWindow ().requestFeature (Window.FEATURE_NO_TITLE);
	dialog.setContentView (viewStub);
	dialog.setOnCancelListener (new DialogInterface.OnCancelListener ()
	{
		public
		void onCancel (
			final DialogInterface pDialogInterface
			)
		{
			dialog.dismiss ();
			gameInfo._isCollection = false;
			_saveLoadController.launchLoadGamePicker ();
		}
	});
	final View view = viewStub.inflate ();

	final Map <View, String> gameNameViewNameMap = Generics.newHashMap ();
	final Set <View> gameNameViews = Generics.newHashSet ();
	final View loadButton = view.findViewById (R.id.loadGameDialogButton);
	loadButton.setOnClickListener (
		new View.OnClickListener ()
		{
			public
			void onClick (
				final View pView
				)
			{
				dialog.dismiss ();
				final GameInfo gameInfo = _gameInfo;
				newGame (restoreGameInfo (new GameInfo ()).
					copyCollection (gameInfo), null);
				_gtp.loadGame (
					_gameInfo, namesList.indexOf (checkedIdx [0]));
			}
		});

	final View.OnClickListener selectOnClickListener =
		new View.OnClickListener ()
		{
			public
			void onClick (
				final View pView
				)
			{
				loadButton.setEnabled (true);
				for (final View view : gameNameViews)
				{
					final boolean checked = view == pView;
					final CompoundButton gameNameView = view.
						findViewById (R.id.fileNameTextView);
					gameNameView.setChecked (checked);
					if (checked)
					{
						checkedIdx [0] = gameNameViewNameMap.get (gameNameView);
					}
				}
			}
		};

	final ListView gameNameView =
            view.findViewById (R.id.fileListView);
	final LayoutInflater layoutInflater = getLayoutInflater ();
	gameNameView.setAdapter (new ArrayAdapter <String> (this, 0, names)
	{
		public
		View getView (
			final int pPosition,
			View pCachedView,
			final ViewGroup pParent
			)
		{
			final CompoundButton gameNameView;
			if (pCachedView == null)
			{
				pCachedView = layoutInflater.
					inflate (R.layout.load_game_list_entry, pParent, false);
				gameNameViews.add (pCachedView);
				pCachedView.setOnClickListener (selectOnClickListener);
				gameNameView = pCachedView.
					findViewById (R.id.fileNameTextView);
				gameNameView.setClickable (false);
				final View deleteButtonView = pCachedView.
					findViewById (R.id.fileDeleteButton);
				deleteButtonView.setVisibility (View.GONE);
			}
			else
			{
				gameNameView = pCachedView.
					findViewById (R.id.fileNameTextView);
			}
			final String name = getItem (pPosition);
			gameNameView.setChecked (name.equals (checkedIdx [0]));
			gameNameViewNameMap.put (gameNameView, name);
			gameNameView.setText (name);
			return pCachedView;
		}
	});
	gameNameView.setSelection (selectedPos);
	loadButton.setEnabled (
		selectedPos != GameInfo._DEFAULT_GAME_COLLECTION_IDX);
	dialog.show ();
}

static
File getExternalStorageDirectory (
//	final int pBuildVersion
	)
{
	return
		Environment.getExternalStorageDirectory  ();
}

public
boolean onKeyDown (
	final int pKeyCode,
	final KeyEvent pKeyEvent
	)
{
	int diffX = 0, diffY = 0;
	switch (pKeyCode)
	{
	case KeyEvent.KEYCODE_DPAD_CENTER:
	case KeyEvent.KEYCODE_SPACE:
		break;
	case KeyEvent.KEYCODE_DPAD_UP:
	case KeyEvent.KEYCODE_U:
		diffY = -1;
		break;
	case KeyEvent.KEYCODE_DPAD_DOWN:
	case KeyEvent.KEYCODE_N:
		diffY = 1;
		break;
	case KeyEvent.KEYCODE_DPAD_LEFT:
	case KeyEvent.KEYCODE_G:
		diffX = -1;
		break;
	case KeyEvent.KEYCODE_DPAD_RIGHT:
	case KeyEvent.KEYCODE_J:
		diffX = 1;
		break;
	default:
		return super.onKeyDown (pKeyCode, pKeyEvent);
	}
	_boardView.moveStone (diffX, diffY);
	return true;
}

public
boolean onKeyUp (
	final int pKeyCode,
	final KeyEvent pKeyEvent
	)
{
	switch (pKeyCode)
	{
	case KeyEvent.KEYCODE_DPAD_UP:
	case KeyEvent.KEYCODE_U:
	case KeyEvent.KEYCODE_DPAD_DOWN:
	case KeyEvent.KEYCODE_N:
	case KeyEvent.KEYCODE_DPAD_LEFT:
	case KeyEvent.KEYCODE_G:
	case KeyEvent.KEYCODE_DPAD_RIGHT:
	case KeyEvent.KEYCODE_J:
		_boardView.showKeyUpHint ();
		break;
	default:
		return super.onKeyUp (pKeyCode, pKeyEvent);
	}
	return true;
}

void showUndoRedoHint (
	final CharSequence pText
	)
{
	final Toast undoRedoHint = _undoRedoHint;
	undoRedoHint.setText (pText);
	undoRedoHint.show ();
}

void
showWaitProgress (
	final String pMessage
	)
{
	if (_progressDialog == null)
	{
		LinearLayout layout = new LinearLayout(this);
		layout.setOrientation(LinearLayout.HORIZONTAL);
		layout.setPadding(50, 50, 50, 50);
		layout.setGravity(Gravity.CENTER_VERTICAL);

		ProgressBar progressBar = new ProgressBar(this);
		progressBar.setIndeterminate(true);
		layout.addView(progressBar);

		TextView message = new TextView(this);
		message.setText(pMessage);
		message.setPadding(50, 0, 0, 0);
		message.setLayoutParams(new ViewGroup.LayoutParams(
				ViewGroup.LayoutParams.WRAP_CONTENT,
				ViewGroup.LayoutParams.WRAP_CONTENT));
		layout.addView(message);

		AlertDialog.Builder builder = new AlertDialog.Builder(this);
		builder.setCancelable(false);  // Blocks user interaction
		builder.setView(layout);

		_progressDialog = builder.create();
		_progressDialog.show();
		// Queue dismissal on the GTP thread so it fires after the pending work completes,
		// not immediately. The GTP thread processes messages in order, so HIDE_WAIT_PROGRESS
		// will run after whatever command triggered this dialog.
		_gtp.hideWaitProgress ();
	}
}

void hideWaitProgress ()
{
	final AlertDialog progressDialog = _progressDialog;
	if (progressDialog != null)
	{
		progressDialog.dismiss ();
		_progressDialog = null;
	}
}

GameInfo storeGameInfo (
	final GameInfo pGameInfo
	)
{
	_settingsDataStore.saveNewGameSettingsBlocking (new NewGameSettings (
		pGameInfo._boardSize, pGameInfo._handicap,
		pGameInfo._playerBlackHuman, pGameInfo._playerWhiteHuman,
		pGameInfo._level, pGameInfo._komi,
		pGameInfo._chineseRules, pGameInfo._aiDelaySeconds,
		pGameInfo._allowResignation));
	return pGameInfo;
}

private
GameInfo restoreGameInfo (
	final GameInfo pGameInfo
	)
{
	final NewGameSettings settings =
		_settingsDataStore.loadNewGameSettingsBlocking ();
	pGameInfo._boardSize = settings.getBoardSize ();
	pGameInfo._handicap = settings.getHandicap ();
	pGameInfo._komi = settings.getKomi ();
	pGameInfo._chineseRules = settings.getChineseRules ();
	pGameInfo._level = settings.getLevel ();
	pGameInfo._playerBlackHuman = settings.getPlayerBlackHuman ();
	pGameInfo._playerWhiteHuman = settings.getPlayerWhiteHuman ();
	pGameInfo._aiDelaySeconds = settings.getAiDelaySeconds ();
	pGameInfo._allowResignation = settings.getAllowResignation ();
	return pGameInfo;
}

void newGame ()
{
	newGame (restoreGameInfo (new GameInfo ()), true);
}

private
void newGame (
	final GameInfo pGameInfo,
	final Boolean pNewGame
	)
{
	GameInfo gameInfo = _gameInfo;
	final Gtp gtp = _gtp;
	if (gameInfo != null && (pNewGame == null || pNewGame))
	{
		gameInfo._invalid = true;
		gtp.deleteAutoSaveFile ();
	}
	showWait4Move2FinishMessage (gameInfo);
	_gameInfo = pGameInfo;
	if (pNewGame == null)
	{
		return;
	}
	if (pNewGame)
	{
		gtp.newGame (pGameInfo);
	}
	else
	{
		gtp.changeGame (gameInfo, pGameInfo);
	}
}

private
void showWait4Move2FinishMessage (
	final GameInfo pGameInfo
	)
{
	if (Gtp.playerIsMachine (pGameInfo))
	{
		showWaitProgress (getResources ().getString (
			R.string.waitProgressLastMoveMessage));
	}
}

	void nextMove(final Point pPoint)
	{
		final GameInfo gameInfo = _gameInfo;
		gameInfo.addMove (pPoint);
		_gtp.nextMove (_gameInfo);
	}

void drawBoard (
	final boolean pInit
	)
{
	_gtp.drawBoard (_gameInfo, pInit);
}

GameInfo getGameInfo ()
{
	return _gameInfo;
}

// Package-private: called from Gtp.reStartGame() once a (re)loaded game's move
// tree is actually populated - see the comment there for why that's the right
// moment, not MainActivity.newGame()'s earlier _gameInfo assignment.
void attachGameClock ()
{
	final GameInfo gameInfo = _gameInfo;
	if (gameInfo != null)
	{
		_gameClock.attachToGame (gameInfo);
	}
}

AlertDialog showMessage (
	final String pMessage
	)
{
	return new AlertDialog.Builder (this).
		setMessage (pMessage).
		setNeutralButton (android.R.string.ok, null).
		show ();
}

	void showPassMessage(
			final boolean pColorBlack,
			final boolean pResigned
	) {
		final Resources resources = getResources ();

		String message = resources.getString(
				R.string.passedDialogMessageText,
				resources.getString(pColorBlack ? R.string.blackColorText : R.string.whiteColorText),
				getPassedText(pResigned)
		);

		AlertDialog.Builder builder = new AlertDialog.Builder(this);
		builder.setMessage(message);
		builder.setCancelable(false);

		// Play a Stone button (just dismiss)
		builder.setPositiveButton("Play a stone", new DialogInterface.OnClickListener() {
			public void onClick(DialogInterface dialog, int id) {
				dialog.dismiss();
				// Player will now place a move
			}
		});

		// Pass button (triggers the same logic used for human passing)
		builder.setNegativeButton(resources.getString(R.string.menuPassLabel), (dialog, id) -> {
			dialog.dismiss();
			runOnUiThread(() -> {
				showMove(_gameInfo._playerBlackMoves, getPassedText(false));
				nextMove(GameInfo.Passed._Passed);
			});
		});

		AlertDialog alert = builder.create();
		alert.show();
	}

String getPassedText (
	final boolean pResigned
	)
{
	return getResources ().getString (pResigned ? R.string.resignedText
		: R.string.passedText);
}

void showMove (
	final boolean pBlack,
	final String pMoveText
	)
{
	final boolean showProgressBar = pMoveText == null;
	final GameInfo gameInfo = _gameInfo;
	final String text = showProgressBar ? "" : (pMoveText.length () == 0
		&& ((pBlack && gameInfo._playerBlackHuman
				&& gameInfo._playerBlackMoves)
			|| (!pBlack && gameInfo._playerWhiteHuman
				&& !gameInfo._playerBlackMoves)) ?
					_yourTurnText.toString () : pMoveText);
	_scoreViewState.setValue (ScoreScreenKt.withMove (
		_scoreViewState.getValue (), pBlack, showProgressBar, text,
		gameInfo._playerBlackMoves));
	// Same UI-reveal-accurate signal as the withMove() call just above, not a raw
	// GameInfo._playerBlackMoves poll on a timer - that flips the instant GnuGo
	// *computes* its move, well before the Slow AI Moves delay actually reveals it,
	// which used to charge the AI's thinking time to whoever moves next instead.
	_gameClock.setActiveMover (gameInfo._playerBlackMoves);
}

private
void showCaptures (
	final int pBlack,
	final int pWhite
	)
{
	_blackCaptures = pBlack;
	_whiteCaptures = pWhite;
	_scoreViewState.setValue (ScoreScreenKt.withCaptures (
		_scoreViewState.getValue (), pBlack, pWhite));
}

private
void enablePassMenu (
	final boolean pEnable
	)
{
	enableMenuItem (_passMenuItem, pEnable);
}

private
void enableUndoMenu (
	final GameInfo pGameInfo
	)
{
	boolean undoEnabled = false, redoEnabled = false;
	if (pGameInfo != null)
	{
		boolean playerIsMachine = Gtp.playerIsMachine (pGameInfo),
			otherPlayerIsMachine = Gtp.otherPlayerIsMachine (pGameInfo);
		final int moveNumber = pGameInfo._moveNumber;
		_undoEnabled = undoEnabled =
			!(playerIsMachine && otherPlayerIsMachine)
			//&& (!playerIsMachine || pGameInfo.bothPlayersPassed ()) // let us undo even with this
			&& !(otherPlayerIsMachine && moveNumber == 1)
			&& moveNumber > 0;
		_redoEnabled = redoEnabled = !playerIsMachine
			&& pGameInfo._redoPoints == null
			&& pGameInfo.canRedo (otherPlayerIsMachine ? 2 : 1);
	}
	enableMenuItem (_undoMenuItem, undoEnabled);
	enableMenuItem (_restartMenuItem, undoEnabled);
	enableMenuItem (_redoMenuItem, redoEnabled);
}

private
void showScore (
	final int pBlackTerritory,
	final int pWhiteTerritory,
	final Object pStatus
	)
{
	if (pStatus == null)
	{
		_scoreViewState.setValue (ScoreScreenKt.withNormalScore (_scoreViewState.getValue ()));
		return;
	}
	if (pBlackTerritory == _SHOW_MESSAGE)
	{
		_scoreViewState.setValue (ScoreScreenKt.withMessageScore (
			_scoreViewState.getValue (), (String)pStatus));
		return;
	}
	final GameInfo gameInfo = (GameInfo)pStatus;
	final String blackScore = String.valueOf (_blackCaptures + pBlackTerritory),
		whiteScore = String.valueOf (
			_whiteCaptures + pWhiteTerritory + Float.parseFloat (gameInfo._komi));
	_scoreViewState.setValue (ScoreScreenKt.withFinalScore (
		_scoreViewState.getValue (), gameInfo._chineseRules,
		pBlackTerritory, pWhiteTerritory, blackScore, whiteScore));
}

private
void showDisplaySettingsDialog ()
{
	AppPreferencesScreenKt.showAppPreferencesDialog (this, _settingsDataStore,
		new EdgeTapPaddingModeListener ()
		{
			public
			void onEdgeTapPaddingModeChanged (
				final EdgeTapPaddingMode pMode
				)
			{
				_boardView.setEdgeTapPaddingMode (pMode);
				if (_gameInfo != null)
				{
					_gtp.drawBoard (_gameInfo, true);
				}
			}
		},
		new ShowCoordinatesListener ()
		{
			public
			void onShowCoordinatesChanged (
				final boolean pShow
				)
			{
				_boardView.setShowCoordinates (pShow);
				if (_gameInfo != null)
				{
					_gtp.drawBoard (_gameInfo, true);
				}
			}
		},
		new ClockEnabledListener ()
		{
			public
			void onClockEnabledChanged (
				final boolean pEnabled
				)
			{
				_scoreViewState.setValue (ScoreScreenKt.withClockEnabled (
					_scoreViewState.getValue (), pEnabled));
			}
		});
}

private
void showInfo ()
{
	try
	{
		final AppInfo appInfo = _appInfo;
		final Resources resources = getResources ();
		final WebView webView = new WebView (this);
		webView.loadDataWithBaseURL (null,
			resources.getString (R.string.infoDialogText,
			appInfo._appName,                            // %s 1
			appInfo._appVersion,                         // %s 2
			resources.getString(R.string.BYauthorText),  // %s 3
			resources.getString(R.string.authorMailUrl), // %s 4
			resources.getString(R.string.authorName),    // %s 5
			resources.getString(R.string.RefreshedByAuthorText), // %s 6
			resources.getString(R.string.refresherUrl),  // %s 7
			resources.getString(R.string.refresherName), //8
			resources.getString(R.string.currentGodroidProjectUrl), //9
			resources.getString(R.string.currentProjectHomepageText), //10
			resources.getString(R.string.goRulesUrl),    // %s 11
			resources.getString(R.string.goRulesText),   // %s 12
			resources.getString(R.string.godroidProjectUrl), // %s 13
			resources.getString(R.string.oldProjectHomepageText), // %s 14
			resources.getString(R.string.gnugoProjectUrl), // %s 15
			resources.getString(R.string.gnuGoHomepageText), // %s 16
			resources.getString(R.string.translateProjectUrl), // %s 17
			resources.getString(R.string.translateHomepageText) // %s 18
			),
				"text/html", "utf-8", null);

		webView.setNetworkAvailable (false);
		webView.setBackgroundColor (Color.TRANSPARENT);
		new AlertDialog.Builder (this).
			setIcon (R.drawable.infoMenuIcon).
			setTitle (R.string.menuInfoLabel).
			setView (webView).
			show ();
	}
	catch (final Exception e) {}
}

static
Toast makeToast (
	final Context pContext,
	final String pText
	)
{
	final Toast toast = Toast.makeText (pContext, pText, Toast.LENGTH_SHORT);
	toast.setGravity (Gravity.TOP, 0, 0);
	return toast;
}
}
