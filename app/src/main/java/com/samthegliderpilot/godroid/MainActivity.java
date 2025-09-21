package com.samthegliderpilot.godroid;

import java.io.File;
import java.io.FileFilter;
import java.net.URL;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Date;
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

import androidx.activity.EdgeToEdge;
import androidx.activity.OnBackPressedCallback;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.WindowInsetsControllerCompat;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.Paint;
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
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.format.DateFormat;
import android.util.Log;
import android.util.TypedValue;
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
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ProgressBar;
import android.widget.Spinner;
import android.widget.TableRow;
import android.widget.TextView;
import android.widget.Toast;
import com.samthegliderpilot.util.AssetsManager;
import com.samthegliderpilot.util.Generics;

import static com.samthegliderpilot.godroid.Globals.*;
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
	_GNUGO_SO_LIBRARY_NAME = "gnuGo-3.8",
	_GNUGO_THREAD_NAME = "gnuGo";

private static final
int
	_GNUGO_MEMORY_SIZE = 8;

static final
int
	_SHOW_ESTIMATED_SCORE = -1,
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

private
SharedPreferences _sharedPreferences;

private
String
	_preferencesBoardSizeKey,
	_preferencesHandicapKey,
	_preferencesKomiKey,
	_preferencesChineseRulesKey,
	_preferencesLevelKey,
	_preferencesPlayerBlackHumanKey,
	_preferencesPlayerWhiteHumanKey,
	_preferencesAiDelayKey,
	_preferenceAllowResignationKey;

private
Looper _gnuGoLooper;

private
Thread _gnuGoThread;

private
GameInfo _gameInfo;

private
List <File> _goProblems;

private
AlertDialog  _progressDialog;

private
TextView
	_capturesRowTextView,
	_blackCapturesTextView, _whiteCapturesTextView,
	_blackMoveTextView, _whiteMoveTextView,
	_blackScoreTextView, _whiteScoreTextView,
	_moveRowTextView, _messageScoreTextView;

private
TableRow _scoreTableRow, _messageTableRow;

private
ProgressBar _blackMoveProgressBar, _whiteMoveProgressBar;

private
MenuItem
	_saveLoadMenuItem,
	_passMenuItem,
	_undoMenuItem, _redoMenuItem,
	_restartMenuItem;

private
boolean _undoEnabled = false, _redoEnabled = false;

    private
Toast _undoRedoHint;

private
CharSequence
	_undoHintText, _redoHintText,
	_noUndoHintText, _noRedoHintText,
	_yourTurnText;

private
Dialog _changeGameDialog;

private
View _changeGameApplyButton;

static
FileFilter _sgfFileFilter = null;

private native static
void initGTP (float pMemory);

native static
String playGTP (String pInput);

native static
void setRules (int chineseRules);

static
{
	System.loadLibrary (MainActivity._GNUGO_SO_LIBRARY_NAME);
	initGTP (_GNUGO_MEMORY_SIZE);
}

public
void onCreate ( // 0
	final Bundle pSavedInstanceState
	)
{
	super.onCreate (pSavedInstanceState);
	_mainActivity = this;
	_appInfo = new AppInfo ();
	final Resources resources = _resources = getResources ();

	//_saveLoadGamesDirName = resources.getString (R.string.app_name);
	_autoSaveGamePathFileName =
		getFileStreamPath (resources.getString (R.string.autoSaveFileName)).
			toString ();
	_sharedPreferences =  getSharedPreferences("app_prefs", Context.MODE_PRIVATE);
	_preferencesBoardSizeKey = resources.getString (
		R.string.preferencesBoardSizeKey);
	_preferencesHandicapKey = resources.getString (
		R.string.preferencesHandicapKey);
	_preferencesKomiKey = resources.getString (R.string.preferencesKomiKey);
	_preferencesChineseRulesKey =
		resources.getString (R.string.preferencesChineseRulesKey);
	_preferencesLevelKey = resources.getString (R.string.preferencesLevelKey);
	_preferencesPlayerBlackHumanKey = resources.getString (
		R.string.preferencesPlayerBlackHunanKey);
	_preferencesPlayerWhiteHumanKey = resources.getString (
		R.string.preferencesPlayerWhiteHunanKey);
	_preferencesAiDelayKey = resources.getString(
			R.string.preferencesAiDelayKey
	);
	_preferenceAllowResignationKey = resources.getString (
			R.string.preferenceAllowResignationKey);

	_undoHintText = resources.getText (R.string.undoHintText);
	_redoHintText = resources.getText (R.string.redoHintText);
	_noUndoHintText = resources.getText (R.string.noUndoHintText);
	_noRedoHintText = resources.getText (R.string.noRedoHintText);
	_yourTurnText = resources.getText (R.string.yourTurnText);

	setContentView (R.layout.main);
	EdgeToEdge.enable(this);


	// 2

	final String textViewTag = resources.getString (R.string.moveTextViewTag),
		progressBarViewTag = resources.getString (R.string.moveProgressBarTag);
	View moveView = findViewById (R.id.blackMoveCell);
	_blackMoveTextView = moveView.findViewWithTag (textViewTag);
	_blackMoveProgressBar = moveView.
		findViewWithTag (progressBarViewTag);
	moveView = findViewById (R.id.whiteMoveCell);
	_whiteMoveTextView = moveView.findViewWithTag (textViewTag);
	_whiteMoveProgressBar = moveView.
		findViewWithTag (progressBarViewTag);
	_capturesRowTextView = findViewById (R.id.capturesRowTextView);
	_blackCapturesTextView =
            findViewById (R.id.blackCapturesTextView);
	_whiteCapturesTextView =
            findViewById (R.id.whiteCapturesTextView);
	_scoreTableRow = findViewById (R.id.scoreTableRow);
	_messageTableRow = findViewById (R.id.messageTableRow);
	_blackScoreTextView = findViewById (R.id.blackScoreTextView);
	_whiteScoreTextView = findViewById (R.id.whiteScoreTextView);
	_moveRowTextView = findViewById (R.id.moveRowTextView);
	_messageScoreTextView = findViewById (R.id.messageScoreTextView);
 	_undoRedoHint = makeToast (this, "");

	View menuButton = findViewById(R.id.MenuButton);
	menuButton.setOnClickListener(new View.OnClickListener() {
		@Override
		public void onClick(View v) {
			PopupMenu popup = new PopupMenu(MainActivity.this, v);
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

	_mainHandler = new Handler (getMainLooper())
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
		});

	getOnBackPressedDispatcher().addCallback(this, new OnBackPressedCallback(true) {
		@Override
		public void handleOnBackPressed() {
			if (_undoEnabled) {
				undo();
			}
		}
	});


	View rootView = findViewById(R.id.root_layout); // Set an ID to your root layout

	ViewCompat.setOnApplyWindowInsetsListener(rootView, (v, insets) -> {
		// Get the insets for system bars (status bar + nav bar)
		Insets systemInsets = insets.getInsets(WindowInsetsCompat.Type.systemBars());

		// Apply top padding equal to status bar height (like fitsSystemWindows used to)
		v.setPadding(
				v.getPaddingLeft(),
				systemInsets.top,
				v.getPaddingRight(),
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
}
	@Override
	protected void onResume() {
		super.onResume();

		Window window = getWindow();
		window.addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
		window.setStatusBarColor(Color.BLACK); // or a dark color from your resources

		WindowInsetsControllerCompat insetsController =
				WindowCompat.getInsetsController(window, window.getDecorView());

		// Because background is dark, force light icons
		insetsController.setAppearanceLightStatusBars(false);
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
			_externalInputPathFileName = inputFile.getAbsolutePath ();
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
		_redoMenuItem.setIcon (new BitmapDrawable (_resources,
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
	enableMenuItem (_saveLoadMenuItem, storageCardMounted ());
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
			if (_changeGameDialog == null) {
				initChangeGameDialog();
			}
			showChangedGameDialog();
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
			saveGame(null);
			return true;
		} else if (id == R.id.menuLoad) {
			loadGame();
			return true;
		} else if (id == R.id.menuInfo) {
			showInfo();
			return true;
		} else if (id == R.id.menuToStart) {
			restartGame();
			return true;
/* too slow (takes minutes) in most situations
} else if (id == R.id.menuShowTerritory) {
    showTerritory();
    return true;
*/
		} else if (id == R.id.menuShareGame) {
			gtpShareGame();
			return true;
		} else if (id == R.id.menuExit) {
			//System.runFinalizersOnExit(true);
			System.exit(0);
			return true;
		}

		return false;
	}

	private
	enum SpinnerEnum
	{
		BoardSize (R.id.newGameDialogBoardSizeSpinner, R.array.boardSizes),
		Handicap (R.id.newGameDialogHandicapSpinner, R.array.handicaps),
		PlayerBlackWhite (R.id.newGameDialogHumanPlaysSpinner,
				R.array.playerBlackWhiteValues, true),
		Strength (R.id.newGameDialogStrengthSpinner, R.array.strengths, true),
		Komi (R.id.newGameDialogKomiSpinner, R.array.komis, true),
		Scoring (R.id.newGameDialogScoringSpinner, R.array.scorings),
		AIDelay (R.id.newGameDialogAIDelaySpinner, R.array.newGameDialogAIDelayItems, true),
		AllowResignation(R.id.newGameDialogAllowResignSpinner, R.array.allowResignation, true);

		final
		int _spinnerResId;

		private final
		int _valuesResId;

		final
		boolean _mustChange;

		// Removed this field to fix memory leak
		// private Spinner _spinner;

		private
		TypedArray
				_values,
				_playerBlackHumanValues,
				_playerWhiteHumanValues;
		private
		String[]
				_stringValuesForAiDelay,
				_stringValuesForAllowResignation;

		private
		Map <Object, Integer> _spinnerEntriesMap;

		boolean _changed;

		SpinnerEnum (
				final int pSpinnerResId,
				final int pResId
		)
		{
			this (pSpinnerResId, pResId, false);
		}

		SpinnerEnum (
				final int pSpinnerResId,
				final int pResId,
				final boolean pMustChange
		)
		{
			_spinnerResId = pSpinnerResId;
			_valuesResId = pResId;
			_mustChange = pMustChange;
		}

		void init (
				final Resources pResources,
				final Spinner pSpinner
		)
		{
			// replaced usage of _spinner field by passed-in pSpinner where needed
			final TypedArray values = _values =
					pResources.obtainTypedArray (_valuesResId);
			int numEntries = values.length ();
			if (_spinnerEntriesMap == null)
			{
				_spinnerEntriesMap = Generics.newHashMap (numEntries);
			}
			if (this == AIDelay) {
				_stringValuesForAiDelay = pResources.getStringArray(_valuesResId);
				int numEntries2 = _stringValuesForAiDelay.length;
				_spinnerEntriesMap = Generics.newHashMap(numEntries);
				for (int idx = 0; idx < numEntries2; idx++) {
					Integer value2 = Integer.valueOf(_stringValuesForAiDelay[idx]);
					_spinnerEntriesMap.put(value2, idx);
				}
				return;
			}
			if (this == AllowResignation) {
				_stringValuesForAllowResignation = pResources.getStringArray(_valuesResId);
				int numEntries2 = _stringValuesForAllowResignation.length;
				_spinnerEntriesMap = Generics.newHashMap(numEntries2);
				for (int idx = 0; idx < numEntries2; idx++) {
					String value = _stringValuesForAllowResignation[idx];
					_spinnerEntriesMap.put(value, idx);
				}
				return;
			}
			_spinnerEntriesMap = Generics.newHashMap(numEntries);
			for (int idx = 0; idx < numEntries; idx++) {
				Object value = "";
				switch (values.peekValue(idx).type) {
					case TypedValue.TYPE_STRING:
						value = values.getString(idx);
						break;
					case TypedValue.TYPE_FLOAT:
						value = values.getFloat(idx, 0);
						break;
					case TypedValue.TYPE_INT_DEC:
					case TypedValue.TYPE_INT_HEX:
						value = values.getInt(idx, 0);
						break;
					case TypedValue.TYPE_INT_BOOLEAN:
						value = values.getBoolean(idx, false);
						break;
				}
				_spinnerEntriesMap.put(value, idx);
			}

			if (this == PlayerBlackWhite) {
				_playerBlackHumanValues = pResources.obtainTypedArray(
						R.array.playerBlackHumanValues);
				_playerWhiteHumanValues = pResources.obtainTypedArray(
						R.array.playerWhiteHumanValues);
			}
		}

		void setSpinnerSelection (
				final GameInfo pGameInfo,
				final Spinner pSpinner,
				final Resources resources
		)
		{
			Object val = 0;
			switch (this)
			{
				case BoardSize:
					val = pGameInfo._boardSize;
					break;
				case Handicap:
					val = pGameInfo._handicap;
					break;
				case PlayerBlackWhite:
					pSpinner.setSelection (_values.getInteger (
							(pGameInfo._playerBlackHuman ? 2 : 0)
									+ (pGameInfo._playerWhiteHuman ? 1 : 0), 0));
					return;
				case Strength:
					val = pGameInfo._level;
					break;
				case Komi:
					val = pGameInfo._komi;
					break;
				case Scoring:
					val = pGameInfo._chineseRules;
					break;
				case AIDelay:
					val = pGameInfo._aiDelaySeconds;
					break;
				case AllowResignation:
					String yesString = resources.getString (R.string.yes);
					String noString = resources.getString (R.string.no);
					val = pGameInfo._allowResignation ? yesString : noString;
					break;
			}
			pSpinner.setSelection (_spinnerEntriesMap.get (val));
		}

		void setHideStatus (
				final GameInfo pGameInfo,
				int pRow,
				final Resources resources
		)
		{
			Object value = 0;
			switch (this)
			{
				case BoardSize:
					value = pGameInfo._boardSize;
					break;
				case Handicap:
					value = pGameInfo._handicap;
					break;
				case PlayerBlackWhite:
					value = pRow;
					pRow = (pGameInfo._playerBlackHuman ? 2 : 0)
							+ (pGameInfo._playerWhiteHuman ? 1 : 0);
					break;
				case Strength:
					value = pGameInfo._level;
					break;
				case Komi:
					value = pGameInfo._komi;
					break;
				case Scoring:
					value = pGameInfo._chineseRules;
					break;
				case AIDelay:
					value = pGameInfo._aiDelaySeconds;
					break;
				case AllowResignation:
					String yesString = resources.getString (R.string.yes);
					String noString = resources.getString (R.string.no);
					value = pGameInfo._allowResignation ? yesString : noString;
					break;
			}
			_changed = pRow != _spinnerEntriesMap.get (value);
		}

		void setGameInfoValue (
				final GameInfo pGameInfo,
				final Spinner pSpinner,
				final Resources resources
		)
		{
			final int pos = pSpinner.getSelectedItemPosition ();
			switch (this)
			{
				case BoardSize:
					pGameInfo._boardSize = _values.getInteger (pos, 0);
					break;
				case Handicap:
					pGameInfo._handicap = _values.getInteger (pos, 0);
					break;
				case PlayerBlackWhite:
					pGameInfo._playerBlackHuman =
							_playerBlackHumanValues.getBoolean (pos, true);
					pGameInfo._playerWhiteHuman =
							_playerWhiteHumanValues.getBoolean (pos, true);
					break;
				case Strength:
					pGameInfo._level = _values.getInteger (pos, 0);
					break;
				case Komi:
					pGameInfo._komi = _values.getString (pos);
					break;
				case Scoring:
					pGameInfo._chineseRules = _values.getBoolean (pos, false);
					break;
				case AIDelay:
					if (_stringValuesForAiDelay != null) {
						String selectedValue = _stringValuesForAiDelay[pos];
						pGameInfo._aiDelaySeconds = Integer.parseInt(selectedValue);
					}
					break;
				case AllowResignation:
					if(_stringValuesForAllowResignation !=null) {
						String selectedValue = _stringValuesForAllowResignation[pos];
						pGameInfo._allowResignation = selectedValue.equals(
								resources.getString (R.string.yes)
						);
					}
					break;
			}
		}
	}


private
void initChangeGameDialog ()
{
	final ViewStub viewStub = new ViewStub (this, R.layout.new_game);
	final Dialog dialog = _changeGameDialog = new Dialog (this);
	dialog.getWindow ().requestFeature (Window.FEATURE_NO_TITLE);
	dialog.setContentView (viewStub);
	final View view = viewStub.inflate ();

	final Resources resources = _resources;
	final SpinnerEnum [] spinnerEnums = SpinnerEnum.values ();
	final Map <Spinner, SpinnerEnum> spinnerSpinnerEnumMap =
		Generics.newHashMap (spinnerEnums.length);
	for (final SpinnerEnum spinnerEnum : spinnerEnums)
	{
		final Spinner spinner = view.findViewById (
			spinnerEnum._spinnerResId);
		spinnerEnum.init (resources, spinner);
		spinnerSpinnerEnumMap.put (spinner, spinnerEnum);
	}
	final View applyButton = _changeGameApplyButton =
		view.findViewById (R.id.newGameDialogApplyButton);

	final AdapterView.OnItemSelectedListener hideChangeSettingsListener =
		new AdapterView.OnItemSelectedListener ()
		{
			public
			void onItemSelected (
				final AdapterView <?> pAdapterView,
				final View pView,
				final int pPosition,
				long pRow
				)
			{
				final GameInfo gameInfo = _gameInfo;
				if (gameInfo._invalid)
				{
					return;
				}
				//noinspection SuspiciousMethodCalls
				spinnerSpinnerEnumMap.get (pAdapterView).setHideStatus (
					gameInfo, (int)pRow, _resources);
				boolean showApplyButton = false;
				for (final SpinnerEnum item : spinnerEnums)
				{
					final boolean changed = item._changed;
					if (item._mustChange)
					{
						if (changed)
						{
							showApplyButton = true;
						}
					}
					else if (changed)
					{
						showApplyButton = false;
						break;
					}
				}
				applyButton.setEnabled (showApplyButton);
			}

			public
			void onNothingSelected (
				final AdapterView <?> pAdapterView
				)
			{
			}
		};
	for (final Spinner spinner : spinnerSpinnerEnumMap.keySet ())
	{
		spinner.setOnItemSelectedListener (hideChangeSettingsListener);
	}

	final View.OnClickListener onClickListener =
		new View.OnClickListener ()
		{
			public
			void onClick (
				final View pView
				)
			{
				final GameInfo gameInfo = new GameInfo ();
				for (final SpinnerEnum spinnerEnum : spinnerEnums)
				{
					final Spinner spinner = _changeGameDialog.findViewById(spinnerEnum._spinnerResId);
					spinnerEnum.setGameInfoValue (gameInfo, spinner, _resources);
				}
				newGame (storeGameInfo (gameInfo), pView != applyButton);
				dialog.dismiss ();
			}
		};
	applyButton.setOnClickListener (onClickListener);
	view.findViewById (R.id.newGameDialogStartButton).
		setOnClickListener (onClickListener);
}

static private
void clearChangedGameDialogSpinnerChangedStatus ()
{
	for (final SpinnerEnum item : SpinnerEnum.values ())
	{
		item._changed = false;
	}
}

private
void showChangedGameDialog ()
{
	_changeGameApplyButton.setEnabled (false);
	clearChangedGameDialogSpinnerChangedStatus ();
	final GameInfo gameInfo = _gameInfo;
	for (final SpinnerEnum item : SpinnerEnum.values ())
	{
		final Spinner spinner = _changeGameDialog.findViewById(item._spinnerResId);
		item.setSpinnerSelection (gameInfo, spinner, _resources);
	}
	_changeGameDialog.show ();
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

private
void showTerritory ()
{
	_gtp.showTerritory (_gameInfo);
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

String getDateFileName ()
{
	final Date now = new Date ();
	return formatFileName (DateFormat.getDateFormat (this).format (now)
		+ " " + DateFormat.getTimeFormat (this).format (now));
}

private
void saveGame (
	final String pFilename
	)
{
	final Resources resources = _resources;
	final EditText input = new EditText (this);
	input.setLayoutParams (new ViewGroup.LayoutParams (
		ViewGroup.LayoutParams.MATCH_PARENT,
		ViewGroup.LayoutParams.MATCH_PARENT));
	input.setSelectAllOnFocus (true);
	final View focusView = input.focusSearch (View.FOCUS_LEFT);
	if (focusView != null)
	{
		focusView.requestFocus ();
	}
	final String sgfExtension = getSgfFileExtension ();
	final GameInfo gameInfo = _gameInfo;
	String fileName = pFilename;
	if (fileName == null && !gameInfo._isCollection)
	{
		final String sgfFileName = gameInfo._sgfFileName;
		if (sgfFileName != null)
		{
			fileName = sgfFileName.substring (
				sgfFileName.lastIndexOf (File.separator) +1);
			fileName = fileName.substring (0, fileName.indexOf (sgfExtension));
		}
	}
	if (fileName == null)
	{
		fileName = getDateFileName ();
	}
	input.setText (fileName);
	new AlertDialog.Builder (this).
		setTitle (R.string.menuSaveLabel).
		setIcon (R.drawable.saveLoadMenuIcon).
		setView (input).
		setPositiveButton (R.string.menuSaveLabel,
			new DialogInterface.OnClickListener ()
			{
				public
				void onClick (
					final DialogInterface pDialogInterface,
					final int pWhichButton
					)
				{
					final File saveLoadGamesDir = getSaveLoadGamesDir ();
					final Editable inputText = input.getText ();
					String sgfFileName = null;
					if (saveLoadGamesDir == null
						|| inputText == null
						|| ((sgfFileName = inputText.toString ()) == null)
						|| ((sgfFileName = formatFileName(sgfFileName.trim())).isEmpty()))
					{
						final String fileName = sgfFileName;
						showMessage (resources.getString (
							R.string.invalidFileNameAlertMessage,
							(saveLoadGamesDir == null ?
								"" : saveLoadGamesDir + "/")
							+ (sgfFileName == null ? "" : sgfFileName))).
								setOnDismissListener (
									new DialogInterface.OnDismissListener ()
									{
										public
										void onDismiss (
											final DialogInterface
												pDialogInterface)
										{
											saveGame (fileName);
										}
									}
								);
						return;
					}
					final File sgfFile = new File (saveLoadGamesDir,
						sgfFileName + sgfExtension);
					final String path = sgfFile.getAbsolutePath ();
					if (sgfFile.exists ())
					{
						final String fileName = sgfFileName;
						final DialogInterface.OnClickListener clickListener =
							new DialogInterface.OnClickListener ()
							{
								public
								void onClick (
									final DialogInterface pDialogInterface,
									final int pWhichButton
									)
								{
									if (pWhichButton ==
										DialogInterface.BUTTON_POSITIVE)
									{
										gtpSaveGame (path);
									}
									else
									{
										saveGame (fileName);
									}
								}
							};
						new AlertDialog.Builder (MainActivity.this).
							setTitle (R.string.menuSaveLabel).
							setIcon (R.drawable.saveLoadMenuIcon).
							setMessage (resources.getString (
								R.string.fileAlreadyExistsMessage, path,
								resources.getString (
									R.string.overwriteButtonLabel))).
							setNegativeButton (android.R.string.cancel,
								clickListener).
							setPositiveButton (R.string.overwriteButtonLabel,
								clickListener).
							show ();
						return;
					}
					gtpSaveGame (path);
				}}).
		show ();
}

private
void gtpSaveGame (
	final String pSgfFilePath
	)
{
	final GameInfo gameInfo = _gameInfo;
	showWait4Move2FinishMessage (gameInfo);
	gameInfo._sgfFileName = pSgfFilePath;
	_gtp.saveGame (gameInfo);
}

private static
String formatFileName (
	final String pFileName
	)
{
	return pFileName.replaceAll ("[ /:*?\"<>|\\\\]", "_");
}

String getSgfFileExtension ()
{
	return _resources.getString (R.string.sgfFileExtension);
}

private
void loadGame ()
{
	final GameInfo gameInfo = _gameInfo;
	if (gameInfo._isCollection)
	{
		showCollectionList ();
		return;
	}
	final File saveLoadGamesDir = getSaveLoadGamesDir ();
	if (saveLoadGamesDir == null)
	{
		return;
	}
	final Resources resources = _resources;
	if (_goProblems == null)
	{
		_goProblems = AssetsManager.extractAssetFiles (
			getAssets (), null, saveLoadGamesDir,
			resources.getString (R.string.goProblemsAssetFolderName));
	}
	final List <File> goProblems = _goProblems;

	final FileFilter sgfFileFilter = _sgfFileFilter;
	final String sgfSuffix = getSgfFileExtension ();
	final File [] files =
		saveLoadGamesDir.listFiles (sgfFileFilter != null ? sgfFileFilter
		: (_sgfFileFilter = new FileFilter ()
			{
				public
				boolean accept (
					final File pFile
					)
				{
					return !pFile.isDirectory ()
						&& pFile.getName ().endsWith (sgfSuffix);
				}
			}));
	if (files.length == 0)
	{
		showMessage (resources.getString (R.string.noFiles2load,
			saveLoadGamesDir.getAbsolutePath ()));
		return;
	}
	Arrays.sort (files,
		new Comparator <File> ()
		{
			public
			int compare (
				final File pFile1,
				final File pFile2
				)
			{
				return pFile1.lastModified () < pFile2.lastModified () ? 1 : -1;
			}
		});

	final String filePath = gameInfo._sgfFileName;
	final File [] checkedFile = new File [1];
	int selectedPos = -1, fileIdx = 0;
	for (final File file : files)
	{
		if (file.getAbsolutePath ().equals (filePath))
		{
			selectedPos = fileIdx;
			checkedFile [0] = file;
			break;
		}
		fileIdx++;
	}

	final ViewStub viewStub = new ViewStub (this, R.layout.load_game);
	final Dialog dialog = new Dialog (this);
	dialog.getWindow ().requestFeature (Window.FEATURE_NO_TITLE);
	dialog.setContentView (viewStub);
	final View view = viewStub.inflate ();

	final Map <View, File> fileNameViewFileMap =
			Generics.newHashMap (),
		deleteButtonViewFileMap = Generics.newHashMap ();
	final Set <View> fileNameViews = Generics.newHashSet ();
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
				newGame (restoreGameInfo (new GameInfo ()), null);
				final GameInfo gameInfo = _gameInfo;
				gameInfo._sgfFileName = checkedFile [0].getAbsolutePath ();
				_gtp.loadGame (
					gameInfo, GameInfo._DEFAULT_GAME_COLLECTION_IDX);
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
				for (final View view : fileNameViews)
				{
					final boolean checked = view == pView;
					final CompoundButton fileNameView = view.
						findViewById (R.id.fileNameTextView);
					fileNameView.setChecked (checked);
					if (checked)
					{
						checkedFile [0] =
							fileNameViewFileMap.get (fileNameView);
					}
				}
			}
		};
	@SuppressWarnings ("unchecked")
	final ArrayAdapter <File> [] arrayAdapter = new ArrayAdapter [1];
	final View.OnClickListener deleteOnClickListener =
		new View.OnClickListener ()
		{
			public
			void onClick (
				final View pView
				)
			{
				final File deleteFile = deleteButtonViewFileMap.get (pView);
				final DialogInterface.OnClickListener clickListener =
					new DialogInterface.OnClickListener ()
					{
						public
						void onClick (
							final DialogInterface pDialogInterface,
							final int pWhichButton
							)
						{
							if (!deleteFile.delete ())
							{
								return;
							}
							if (saveLoadGamesDir.listFiles (_sgfFileFilter).
								length == 0)
							{
								dialog.dismiss ();
							}
							arrayAdapter [0].remove (deleteFile);
							final View parentView = (View)pView.getParent ();
							loadButton.setEnabled (loadButton.isEnabled ()
								&& !((CompoundButton)parentView.
									findViewById (R.id.fileNameTextView)).
										isChecked ());
						}
					};
				new AlertDialog.Builder (MainActivity.this).
					setTitle (R.string.deleteButtonLabel).
					setIcon (android.R.drawable.ic_dialog_alert).
					setMessage (resources.getString (
						R.string.deleteFileMessage,
						deleteFile.getAbsolutePath ())).
					setNegativeButton (android.R.string.cancel, null).
					setPositiveButton (R.string.deleteButtonLabel,
						clickListener).
					show ();
			}
		};
	final ListView filesView =
            view.findViewById (R.id.fileListView);
	final LayoutInflater layoutInflater = getLayoutInflater ();
	final CharSequence fileNameInfoTemplate =
		resources.getText (R.string.fileNameFileInfoTemplate);
	final String [] fileNameInfoSources = new String []
		{
			resources.getString (R.string.fileNameTemplate),
			resources.getString (R.string.fileInfoTemplate),
		};
	final CharSequence [] fileNameInfoDestinations = new CharSequence [2];
	filesView.setAdapter (
		arrayAdapter [0] = new ArrayAdapter <File> (this, 0,
			Generics.newArrayList (Arrays.asList (files)))
	{
		public
		View getView (
			final int pPosition,
			View pCachedView,
			final ViewGroup pParent
			)
		{
			final CompoundButton fileNameView;
			final View deleteButtonView;
			if (pCachedView == null)
			{
				pCachedView = layoutInflater.
					inflate (R.layout.load_game_list_entry, null);
				fileNameViews.add (pCachedView);
				pCachedView.setOnClickListener (selectOnClickListener);
				fileNameView = pCachedView.
					findViewById (R.id.fileNameTextView);
				fileNameView.setClickable (false);
				deleteButtonView = pCachedView.
					findViewById (R.id.fileDeleteButton);
				deleteButtonView.setOnClickListener (deleteOnClickListener);
			}
			else
			{
				fileNameView = pCachedView.
					findViewById (R.id.fileNameTextView);
				deleteButtonView = pCachedView.
					findViewById (R.id.fileDeleteButton);
			}
			final File file = getItem (pPosition);
			fileNameView.setChecked (checkedFile [0] == file);
			fileNameViewFileMap.put (fileNameView, file);
			final boolean isGoProblem = goProblems.contains (file);
			deleteButtonView.setVisibility (
				isGoProblem ? View.GONE : View.VISIBLE);
			if (isGoProblem)
			{
				fileNameInfoDestinations[1] =
					resources.getString (R.string.goProblemFileInfo);
			}
			else
			{
				deleteButtonViewFileMap.put (deleteButtonView, file);
				final Date date = new Date (file.lastModified ());
				fileNameInfoDestinations[1] =
					DateFormat.getDateFormat (
						MainActivity.this).format (date) + " "
					+ DateFormat.getTimeFormat (
						MainActivity.this).format (date);
			}
			final String name = file.getName ();
			fileNameInfoDestinations[0] =
				name.substring (0, name.lastIndexOf (sgfSuffix));
			fileNameView.setText (TextUtils.replace (fileNameInfoTemplate,
				fileNameInfoSources, fileNameInfoDestinations));
			return pCachedView;
		}
	});
	filesView.setSelection (selectedPos);
	loadButton.setEnabled (selectedPos != -1);
	dialog.show ();
}

void showCollectionList ()
{
	final Resources resources = _resources;
	final GameInfo gameInfo = _gameInfo;
	final String[] names = gameInfo._collectionNames;
	if (names == null || names.length == 0)
	{
		showMessage (resources.getString (R.string.noFiles2load,
			gameInfo._sgfFileName));
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
			loadGame ();
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

static private
boolean storageCardMounted ()
{
	return Environment.MEDIA_MOUNTED.equals (
		Environment.getExternalStorageState ());
}

private
File getSaveLoadGamesDir ()
{
	File saveLoadGamesDir = null;
	try
	{
		saveLoadGamesDir = new File(getExternalFilesDir(null), "GoDroid");
		if (!saveLoadGamesDir.exists()) {
			saveLoadGamesDir.mkdirs();
		}
	}
	catch (final Exception e)
	{
		if (isEnabledFor (_LOG_TAG, Log.INFO))
		{
			log (_LOG_TAG, Log.INFO, "failed accessing SD card: '" + e);
		}
		final Resources resources = _resources;
		new AlertDialog.Builder (this).
			setTitle (R.string.menuSaveLoadLabel).
			setIcon (android.R.drawable.ic_dialog_alert).
			setNeutralButton (android.R.string.ok, null).
			setMessage (resources.getString (R.string.accessFailedAlertMessage,
				saveLoadGamesDir != null ? saveLoadGamesDir.getAbsolutePath () :
					resources.getString (R.string.sdCardName))).show ();
		return null;
	}
	return saveLoadGamesDir;
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
	/*
	case KeyEvent.KEYCODE_BACK:
		if (_undoEnabled)
		{
			undo ();
		}
		else
		{
			showUndoRedoHint (_noUndoHintText);
		}
		break;
	*/
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
	final SharedPreferences.Editor editor = _sharedPreferences.edit ();
	editor.putInt (_preferencesBoardSizeKey, pGameInfo._boardSize);
	editor.putInt (_preferencesHandicapKey, pGameInfo._handicap);
	editor.putString (_preferencesKomiKey, pGameInfo._komi);
	editor.putBoolean (_preferencesChineseRulesKey, pGameInfo._chineseRules);
	editor.putInt (_preferencesLevelKey, pGameInfo._level);
	editor.putBoolean (
		_preferencesPlayerBlackHumanKey, pGameInfo._playerBlackHuman);
	editor.putBoolean (
		_preferencesPlayerWhiteHumanKey, pGameInfo._playerWhiteHuman);
	editor.putInt(
			_preferencesAiDelayKey, pGameInfo._aiDelaySeconds
	);
	editor.putBoolean(
			_preferenceAllowResignationKey, pGameInfo._allowResignation);
	editor.commit ();
	return pGameInfo;
}

private
GameInfo restoreGameInfo (
	final GameInfo pGameInfo
	)
{
	final SharedPreferences preferences = _sharedPreferences;
	pGameInfo._boardSize = preferences.getInt (_preferencesBoardSizeKey,
		pGameInfo._boardSize);
	pGameInfo._handicap = preferences.getInt (_preferencesHandicapKey,
		pGameInfo._handicap);
	try
	{
		pGameInfo._komi = preferences.getString (_preferencesKomiKey,
			pGameInfo._komi);
		pGameInfo._chineseRules = preferences.getBoolean (
			_preferencesChineseRulesKey, pGameInfo._chineseRules);
	}
	catch (final Exception e) {}
	pGameInfo._level = preferences.getInt (_preferencesLevelKey,
		pGameInfo._level);
	pGameInfo._playerBlackHuman = preferences.getBoolean (
		_preferencesPlayerBlackHumanKey, pGameInfo._playerBlackHuman);
	pGameInfo._playerWhiteHuman = preferences.getBoolean (
		_preferencesPlayerWhiteHumanKey, pGameInfo._playerWhiteHuman);
	pGameInfo._aiDelaySeconds = preferences.getInt(_preferencesAiDelayKey, pGameInfo._aiDelaySeconds);
	pGameInfo._allowResignation = preferences.getBoolean (
			_preferenceAllowResignationKey, pGameInfo._allowResignation);
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
		showWaitProgress (_resources.getString (
			R.string.waitProgressLastMoveMessage));
	}
}

	void nextMove(final Point pPoint)
	{
		final GameInfo gameInfo = _gameInfo;
		gameInfo.addMove (pPoint);
		_gtp.nextMove (_gameInfo);
	}

	void continueAfterMove()
	{
		// Continue game logic that follows the AI move here
		// For example, update UI, allow user input, etc.
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

AlertDialog showMessage (
	final String pMessage
	)
{
	return new AlertDialog.Builder (this).
		setMessage (pMessage).
		setNeutralButton (android.R.string.ok, null).
		show ();
}

void showPassMessage (
	final boolean pColorBlack,
	final boolean pResigned
	)
{
	final Resources resources = _resources;
	showMessage (
		resources.getString (R.string.passedDialogMessageText,
			resources.getString (pColorBlack ?
				R.string.blackColorText : R.string.whiteColorText),
			getPassedText (pResigned)));
}

String getPassedText (
	final boolean pResigned
	)
{
	return _resources.getString (pResigned ? R.string.resignedText
		: R.string.passedText);
}

void showMove (
	final boolean pBlack,
	final String pMoveText
	)
{
	final boolean showProgressBar = pMoveText == null;
	(pBlack ? _blackMoveProgressBar : _whiteMoveProgressBar).
		setVisibility (showProgressBar ? View.VISIBLE : View.GONE);
	final TextView textView = pBlack ? _blackMoveTextView : _whiteMoveTextView;
	textView.setVisibility (showProgressBar ? View.INVISIBLE : View.VISIBLE);
	final GameInfo gameInfo = _gameInfo;
	_boardView.showScoreBackground (!showProgressBar
		&& !(Gtp.otherPlayerIsMachine (gameInfo)
			&& Gtp.playerIsMachine (gameInfo)));
	if (!showProgressBar)
	{
		textView.setText (pMoveText.length () == 0
			&& ((pBlack && gameInfo._playerBlackHuman
					&& gameInfo._playerBlackMoves)
				|| (!pBlack && gameInfo._playerWhiteHuman
					&& !gameInfo._playerBlackMoves)) ?
						_yourTurnText : pMoveText);
	}
}

private
void showCaptures (
	final int pBlack,
	final int pWhite
	)
{
	_blackCapturesTextView.setText (String.valueOf (pBlack));
	_whiteCapturesTextView.setText (String.valueOf (pWhite));
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
	_boardView.showScoreBackground (true);
	if (pStatus == null)
	{
		_capturesRowTextView.setText (R.string.capturesLabelText);
		_moveRowTextView.setText (R.string.moveLabelText);
		_scoreTableRow.setVisibility (View.INVISIBLE);
		_messageTableRow.setVisibility (View.GONE);
		_blackScoreTextView.setText (null);
		_whiteScoreTextView.setText (null);
		return;
	}
	if (pBlackTerritory == _SHOW_MESSAGE)
	{
		_scoreTableRow.setVisibility (View.INVISIBLE);
		_messageTableRow.setVisibility (View.GONE);
		_messageScoreTextView.setText ((String)pStatus);
		return;
	}
	_scoreTableRow.setVisibility (View.VISIBLE);
	_messageTableRow.setVisibility (View.GONE);
	if (pBlackTerritory == _SHOW_ESTIMATED_SCORE
		|| pWhiteTerritory == _SHOW_ESTIMATED_SCORE)
	{
		if (pBlackTerritory == _SHOW_ESTIMATED_SCORE)
		{
			_blackScoreTextView.setText ((String)pStatus);
		}
		else
		{
			_whiteScoreTextView.setText ((String)pStatus);
		}
		return;
	}
	final GameInfo gameInfo = (GameInfo)pStatus;
	if (gameInfo._chineseRules)
	{
		_capturesRowTextView.setText (R.string.stonesLabelText);
	}
	_moveRowTextView.setText (R.string.territoryLabelText);
	_blackMoveTextView.setText (String.valueOf (pBlackTerritory));
	_whiteMoveTextView.setText (String.valueOf (pWhiteTerritory));
	_blackScoreTextView.setText (String.valueOf (
		Integer.parseInt (_blackCapturesTextView.getText ().toString ()) +
		pBlackTerritory + 0f));
	_whiteScoreTextView.setText (String.valueOf (
		Integer.parseInt (_whiteCapturesTextView.getText ().toString ()) +
		pWhiteTerritory + Float.parseFloat (gameInfo._komi)));
}

private
void showInfo ()
{
	try
	{
		final AppInfo appInfo = _appInfo;
		final Resources resources = _resources;
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
			resources.getString(R.string.gnuGoHomepageText) // %s 16
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
String getLongestString (
	final int pColumn0StringsId,
	final int pColumnsRefsId,
	final Resources pResources,
	final Paint pPaint
	)
{
	final String COLUMN_SEPARATOR = "  ";
	String longestString = "";
	float maxWidth = 0;
	final String[] column0Strings =
		pResources.getStringArray (pColumn0StringsId);
	final TypedArray columnsRefs = pResources.obtainTypedArray (pColumnsRefsId);
	final int numCols0 = columnsRefs.length ();
	for (int col0Idx = 0; col0Idx < numCols0; col0Idx++)
	{
		final String column0String = column0Strings[col0Idx];
		final String[] columns =
			pResources.getStringArray (columnsRefs.getResourceId (col0Idx, 0));
		final int numCols = columns.length;
		for (int colIdx = 0; colIdx < numCols; colIdx += 2)
		{
			final String column1 = columns[colIdx];
			final boolean emptyCol = column1.isEmpty();
			final String measureString =
				column0String + (emptyCol ? ""
					: (COLUMN_SEPARATOR + column1 + COLUMN_SEPARATOR))
					+ columns[colIdx+1];
			final float width = pPaint.measureText (measureString);
			if (isEnabledFor (_LOG_TAG, Log.DEBUG))
			{
				log (_LOG_TAG, Log.DEBUG, "measure string: "
					+ width + " '" + measureString + "'");
			}
			if (width > maxWidth)
			{
				maxWidth = width;
				longestString = measureString;
			}
		}
	}
	columnsRefs.recycle ();
	if (isEnabledFor (_LOG_TAG, Log.DEBUG))
	{
		log (_LOG_TAG, Log.DEBUG, "longest string: " + maxWidth
			+ " '" + longestString + "'");
	}
	return longestString;
}

static
float calcTextSize (
	final TextView pMeasureView,
	float pTextSize,
	final String pMeasureString,
	final float pNumLines,
	final float pPadding,
	final float pMaxWidth,
	final float pMaxHeight
	)
{
	final float originalTextSize = pMeasureView.getTextSize();
	final float numLinesMinus1 = pNumLines -1f;
	while (true)
	{
		pMeasureView.setTextSize (TypedValue.COMPLEX_UNIT_PX, pTextSize);
		final TextPaint paint = pMeasureView.getPaint ();
		final Paint.FontMetrics metrics = paint.getFontMetrics ();
		final float width = paint.measureText (pMeasureString) + pPadding,
			height = (float)(new StaticLayout (pMeasureString, paint,
				(int)width, Layout.Alignment.ALIGN_NORMAL, 1.0f, 0.0f, true).
					getHeight ()) * pNumLines
				+ metrics.leading * numLinesMinus1 + pPadding;
		if (isEnabledFor (_LOG_TAG, Log.DEBUG))
		{
			log (_LOG_TAG, Log.DEBUG, "scale down: w " + width
				+ " max w " + pMaxWidth
				+ " | h " + height + " max h " + pMaxHeight
				+ "\ns " + pTextSize);
		}
		if (width < pMaxWidth && height < pMaxHeight)
		{
			break;
		}
		pTextSize -= width - pMaxWidth > 100 || height - pMaxHeight > 100 ?
			4f : 2f;
	}
	pMeasureView.setTextSize(TypedValue.COMPLEX_UNIT_PX, originalTextSize);
	return pTextSize;
}

static
Toast makeToast (
	final Context pContext,
	final String pText
	)
{
	final Toast toast = Toast.makeText (pContext, pText, Toast.LENGTH_SHORT);
	toast.setGravity (Gravity.TOP, 0, 0);
	final View hintView = toast.getView ();
	if (hintView instanceof LinearLayout)
	{
		final View textView = ((LinearLayout)hintView).getChildAt (0);
		if (textView != null && textView instanceof TextView)
		{
			((TextView)textView).setGravity (Gravity.CENTER_HORIZONTAL);
		}
	}
	return toast;
}
}
