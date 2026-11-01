package com.samthegliderpilot.godroid;

import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import android.content.res.Resources;
import android.graphics.Point;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.net.Uri;
import static com.samthegliderpilot.godroid.GameInfo.LoadGameStatus.FAIL;
import static com.samthegliderpilot.godroid.GameInfo.Passed;
import static com.samthegliderpilot.godroid.MainActivity.MainCommand;
import static com.samthegliderpilot.godroid.MainActivity._LOG_TAG;
import static com.samthegliderpilot.godroid.MainActivity.playGTP;
import static com.samthegliderpilot.godroid.MainActivity.playPachiGTP;
import com.samthegliderpilot.util.Generics;
import static com.samthegliderpilot.util.Logging.isEnabledFor;
import static com.samthegliderpilot.util.Logging.log;

public
class Gtp
{
private static final
String
	_BLACK = "black",
	_WHITE = "white",
	_PASS = "PASS",
	_RESIGN = "resign",
	_BLACK_TERRITORY = "black_territory",
	_WHITE_TERRITORY = "white_territory",
	_DEAD = "dead";

// How many times playMove retries Pachi's genmove after a mirrored play
// GnuGo rejects (board desync) before giving up and passing the turn -
// see playMove's Pachi branch.
private static final int _PACHI_MOVE_ATTEMPTS = 3;

private
enum Command
{
	DRAW_BOARD,
	INIT_BOARD,
	PLAY_MOVE,
	NEW_GAME,
	CHANGE_GAME,
	HIDE_WAIT_PROGRESS,
	UNDO_MOVE,
	REDO_MOVE,
	SAVE_GAME,
	APPEND_GAME,
	LOAD_GAME,
	RESTART_GAME,
	SHOW_TERRITORY,
	SHARE_GAME,
	RESUME_SCORED_GAME;

	int _cmd;
}
private static final
Map <Integer, Command> _cmdMessagesMap;
static
{
	final Command[] values = Command.values ();
	final Map <Integer, Command> cmdMessagesMap =
		_cmdMessagesMap = Generics.newHashMap (values.length);
	int numMessage = 0;
	for (final Command message : values)
	{
		cmdMessagesMap.put (message._cmd = numMessage++, message);
	}
}

enum GtpCommand
{
	SET_BOARDSIZE ("boardsize "),
	SET_LEVEL ("level "),
	SET_KOMI ("komi "),
	SET_RESIGN("set_resign_option "),
	SET_RULES ("set_rules "),
	SHOWBOARD ("showboard"),
	PLAY_MOVE ("play "),
	GEN_MOVE ("genmove "),
	LIST_STONES ("list_stones "),
	GET_CAPTURES ("captures "),
	LIST_LEGAL ("all_legal "),
	LIST_FINAL_STATUS ("final_status_list "),
	SET_HANDICAP ("fixed_handicap "),
	UNDO ("gg-undo "),
	// Pachi-only - see reStartGame's dispatch. pachi-setoption is confirmed
	// (from Pachi's own uct.c/gtp.c) to change
	// engine options like resign_threshold at runtime, no process restart
	// needed. time_settings is standard GTP, which Pachi honors as long as it
	// wasn't launched with its own -t command-line override.
	PACHI_SET_OPTION ("pachi-setoption "),
	// Confirmed in Pachi's own board.c/gtp.c: kgs-rules sets board_t.rules
	// directly (board_set_rules), accepting "chinese"/"japanese" case-
	// insensitively - defaults to chinese if never sent. This mainly feeds
	// Pachi's own scoring/handicap-compensation math (board_score), which
	// its UCT search leans on when judging whether a move is still worth
	// anything - previously left unset (GnuGo alone was ever told the
	// game's actual ruleset), which plausibly explains Pachi filling in
	// clearly-already-settled points of its own territory: under its
	// defaulted ruleset that read as free/harmless, while the game's real
	// ruleset may have scored it as a wasted point.
	KGS_RULES ("kgs-rules "),
	TIME_SETTINGS ("time_settings "),
	// time_settings only establishes the byoyomi_stones=1 PROTOCOL once, at
	// game start - it does not by itself reset Pachi's own clock before each
	// move. Without an explicit time_left before every genmove, Pachi's one
	// continuous byoyomi period just keeps draining for the entire game
	// (never refreshing), which is exactly what its own stderr's "LOST ON
	// TIME internally!" (confirmed live, deficit escalating move after move)
	// was reporting - not real think time being spent, just this app never
	// telling Pachi "your clock is full again" between moves.
	TIME_LEFT ("time_left "),
	// Pachi has no gg-undo equivalent - plain standard GTP "undo" (no count
	// argument) already undoes exactly one move, which is all UNDO_MOVE ever
	// asks for (see its one call site).
	PACHI_UNDO ("undo");

	final
	String _gtpCommand;

	GtpCommand (
		final String pCommand
		)
	{
		_gtpCommand = pCommand;
	}
}

static final
String
	_POSITION_LETTERS_STR = "ABCDEFGHJKLMNOPQRST",
	_SGF_VALUE_PATTERN_STRING = "\\[([^]]+)\\]",
	_SGF_COLOR_2_PLAY_PATTERN_STRING = "PL",
	_SGF_COLOR_2_PLAY_WHITE = "W",
	_SGF_COLOR_2_PLAY_BLACK = "B",
	_SGF_TMP_FILE_SUFFIX = "_tmp";

static final
char[] _POSITION_LETTERS_CHARS = _POSITION_LETTERS_STR.toCharArray ();

private static final
List <Point> _markers = Generics.newArrayList ();

private final
Handler _myHandler, _mainHandler;

private final
String _autoSaveGamePathFileName;

private final
Object _autoSaveLock = new Object ();

private
String _externalInputPathFileName;

private final
MainActivity _mainActivity;

private final
BoardView _boardView;

private final
GameSharer _gameSharer;

Gtp (
	final Handler pHandler,
	final Handler pMainHandler,
	final String pAutoSaveGamePathFileName,
	final MainActivity pMainActivity,
	final BoardView pBoardView
	)
{
	_myHandler = pHandler;
	_mainHandler = pMainHandler;
	_autoSaveGamePathFileName = pAutoSaveGamePathFileName;
	_mainActivity = pMainActivity;
	_gameSharer = new GameSharer (pMainActivity);
	_boardView = pBoardView;
}

void setExternalInputPath (
	final String pPath
	)
{
	_externalInputPathFileName = pPath;
}

private
void executeCommand (
	final Command pCommand,
	final GameInfo pArgument
	)
{
	final Handler handler = _myHandler;
	handler.sendMessage (handler.obtainMessage (pCommand._cmd, pArgument));
}

private
void executeMainCommand (
	final MainCommand pCommand,
	final int pArg1,
	final int pArg2,
	final Object pObject
	)
{
	final Handler mainHandler = _mainHandler;
	mainHandler.sendMessage (
		mainHandler.obtainMessage (pCommand._cmd, pArg1, pArg2, pObject));
}

void drawBoard (
	final GameInfo pGameInfo,
	final boolean pInit
	)
{
	if (pInit)
	{
		executeCommand (Command.INIT_BOARD, pGameInfo);
	}
	executeCommand (Command.DRAW_BOARD, pGameInfo);
}

void drawBoard (
	final GameInfo pGameInfo
	)
{
	drawBoard (pGameInfo, false);
}

void newGame (
	final GameInfo pGameInfo
	)
{
	_boardView.setZoom (false);
	executeCommand (Command.NEW_GAME, pGameInfo);
}

private static
final GameInfo [] _changeGameInfos = new GameInfo [2];

void changeGame (
	final GameInfo pOldGame,
	final GameInfo pNewGame
	)
{
	final Handler handler = _myHandler;
	final GameInfo [] changeGameInfos = _changeGameInfos;
	changeGameInfos [0] = pOldGame;
	changeGameInfos [1] = pNewGame;
	handler.sendMessage (handler.obtainMessage (
		Command.CHANGE_GAME._cmd, changeGameInfos));
}

void nextMove (
	final GameInfo pGameInfo
	)
{
	_boardView.setZoom (false);
	_boardView.lockScreen (true);
	executeCommand (Command.PLAY_MOVE, pGameInfo);
}

void hideWaitProgress ()
{
	executeCommand (Command.HIDE_WAIT_PROGRESS, null);
}

void undoMove (
	final GameInfo pGameInfo
	)
{
	_boardView.setZoom (false);
	executeCommand (Command.UNDO_MOVE, pGameInfo);
}

void redoMove (
	final GameInfo pGameInfo
	)
{
	_boardView.setZoom (false);
	executeCommand (Command.REDO_MOVE, pGameInfo);
}

void saveGame (
	final GameInfo pGameInfo
	)
{
	executeCommand (Command.SAVE_GAME, pGameInfo);
}

void appendGame (
	final GameInfo pGameInfo
	)
{
	executeCommand (Command.APPEND_GAME, pGameInfo);
}

void loadGame (
	final GameInfo pGameInfo,
	final int pCollectionIdx
	)
{
	final Handler handler = _myHandler;
	handler.sendMessage (handler.obtainMessage (
		Command.LOAD_GAME._cmd, pCollectionIdx, 0, pGameInfo));
}

void restartGame (
	final GameInfo pGameInfo
	)
{
	executeCommand (Command.RESTART_GAME, pGameInfo);
}

void showTerritory (
	final GameInfo pGameInfo
	)
{
	executeCommand (Command.SHOW_TERRITORY, pGameInfo);
}

void shareGame (
	final GameInfo pGameInfo
	)
{
	executeCommand (Command.SHARE_GAME, pGameInfo);
}

private
void showMove (
	final boolean pBlack,
	final String pMove
	)
{
	executeMainCommand (MainCommand.SHOW_MOVE, pBlack ? 1 : 0, 0, pMove);
}

private
void showCaptures (
	final int pBlack,
	final int pWhite
	)
{
	executeMainCommand (MainCommand.SHOW_CAPTURES, pBlack, pWhite, null);
}

private
void showScore (
	final int pBlackTerritory,
	final int pWhiteTerritory,
	final Object pStatus
	)
{
	executeMainCommand (MainCommand.SHOW_SCORE,
		pBlackTerritory, pWhiteTerritory, pStatus);
}

private
void showWaitProgress (
	final String pMessage
	)
{
	executeMainCommand (MainCommand.SHOW_WAIT_PROGRESS, 0, 0, pMessage);
}

private
void showCollectionList ()
{
	executeMainCommand (MainCommand.SHOW_COLLECTION_LIST, 0, 0, null);
}

private
void enablePassMenu (
	final boolean pEnable
	)
{
	executeMainCommand (MainCommand.ENABLE_PASS_MENU, 0, 0, pEnable);
}

private
void enableUndoMenu (
	final GameInfo pGameInfo
	)
{
	executeMainCommand (MainCommand.ENABLE_UNDO_MENU, 0, 0, pGameInfo);
}

private
void shareGameMain (
	final Uri pUri
	)
{
	executeMainCommand (MainCommand.SHARE_GAME, 0, 0, pUri);
}

static List<Point> getMarkers() {
	List<Point> copy = new ArrayList<>();
	for (Point p : _markers) {
		copy.add(new Point(p)); // Deep copy
	}
	return copy;
}

static
void storeMarkers ()
{
	final List <Point> markers = _markers;
	markers.clear ();
	final String board = gtpCommand (GtpCommand.SHOWBOARD, null);
	if (board == null)
	{
		return;
	}
	final int boardLength = board.length ();
	int x = 0, y = -2;
	for (int idx=0; idx < boardLength; idx++)
	{
		switch (board.charAt (idx))
		{
		case '+':
			markers.add (new Point (x, y));
			// fall through — '+' is also an intersection, so x increments
		case '.':
			x += 1;
			break;
		case '\n':
			x = 0; y += 1;
			break;
		}
	}
}

static
String gtpCommand (
	final GtpCommand pCommand,
	final String pArgument
	)
{
	return gtpCommand (pCommand, pArgument, EngineType.GnuGo);
}

// GnuGo is always running - either as the primary engine, or (Pachi games)
// as the referee for board state/captures/legal moves/scoring, since
// Pachi's own GTP server has no equivalent commands - see the roadmap. So
// EngineType.GnuGo is the right default for every existing call site above,
// unchanged; only the handful of calls that actually need Pachi itself
// (genmove, its own setoption/time_settings, undo) pass EngineType.Pachi.
static
String gtpCommand (
	final GtpCommand pCommand,
	final String pArgument,
	final EngineType pEngine
	)
{
	final String cmd = pCommand._gtpCommand,
		command = pArgument == null ? cmd : cmd + pArgument;

	final String reply = GtpProtocol.cleanReply (
		pEngine == EngineType.Pachi ? playPachiGTP (command) : playGTP (command));

	if (isEnabledFor (_LOG_TAG, Log.DEBUG))
	{
		log (_LOG_TAG, Log.DEBUG, "command: '"
			+ command + "' reply: '" + reply + "'");
	}
	return reply;
}

// Sends a command and reports whether it actually succeeded - gtpCommand's
// own cleanReply can't answer that (see GtpProtocol.isError's comment: a
// real error and an ordinary no-data success reply, which is all a
// successful `play` ever returns, both clean down to ""), so this checks
// the raw reply directly instead. Shares gtpCommand's own command-building
// and debug-log shape rather than duplicating it, so the two can't drift
// apart. Used both directions a move gets mirrored between engines (Pachi's
// own generated move into GnuGo, and a live human/redo move into Pachi) -
// every other call site already knows its move is legal (a human tap,
// already checked against all_legal; a redo; GnuGo's own genmove) and
// doesn't need this.
private static
boolean gtpCommandSucceeded (
	final GtpCommand pCommand,
	final String pArgument,
	final EngineType pEngine
	)
{
	final String cmd = pCommand._gtpCommand,
		command = pArgument == null ? cmd : cmd + pArgument;
	final String rawReply =
		pEngine == EngineType.Pachi ? playPachiGTP (command) : playGTP (command);
	if (isEnabledFor (_LOG_TAG, Log.DEBUG))
	{
		log (_LOG_TAG, Log.DEBUG, "command: '"
			+ command + "' reply: '" + rawReply + "'");
	}
	return !GtpProtocol.isError (rawReply);
}

// Undoes one move on GnuGo (the referee, always) and, if Pachi is the
// active engine, on Pachi too - the one place "undo a move" needs to know
// about both engines, instead of every call site carrying its own copy of
// this "if Pachi, mirror it too" check (see commitLiveMove below for the
// same shape on the play side).
private static
void commitUndo (
	final GameInfo pGameInfo
	)
{
	gtpCommand (GtpCommand.UNDO, "1");
	if (pGameInfo._engineType == EngineType.Pachi)
	{
		gtpCommand (GtpCommand.PACHI_UNDO, null, EngineType.Pachi);
	}
}

// Commits one move "live" (a human's tap, or a chosen redo) to GnuGo (the
// referee, always) and, if Pachi is the active engine, to Pachi too -
// checked against the raw reply (gtpCommandSucceeded), not fire-and-forget:
// Pachi's own genmove-then-mirror-into-GnuGo path already guards against a
// rejected mirror (retry, then roll back and pass); this is the same risk
// in the other direction, previously unchecked entirely - a human move
// Pachi happened to reject (ko/suicide handling can differ between engines)
// used to leave Pachi's board silently diverged for the rest of the game.
// Not retried/rolled back here, unlike that path: this move already
// committed fine on GnuGo, there's nothing of Pachi's own to roll back, and
// Pachi's own next genmove attempt will hit (and recover from) the
// resulting desync via its own retry-then-pass fallback - logged here so
// it's diagnosable if it ever actually happens.
private static
void commitLiveMove (
	final GameInfo pGameInfo,
	final boolean pBlack,
	final Point pMove
	)
{
	playMove (false, pBlack, pMove, pGameInfo);
	if (pGameInfo._engineType != EngineType.Pachi)
	{
		return;
	}
	final String colorArg = pBlack ? _BLACK : _WHITE,
		vertex = pMove instanceof Passed ? _PASS : point2Vertex (pMove, pGameInfo._boardSize);
	if (!gtpCommandSucceeded (GtpCommand.PLAY_MOVE, colorArg + " " + vertex, EngineType.Pachi)
		&& isEnabledFor (_LOG_TAG, Log.WARN))
	{
		log (_LOG_TAG, Log.WARN, "Pachi rejected a live move GnuGo just accepted: '"
			+ vertex + "' - its board is now diverged; its own next genmove will "
			+ "detect and recover from this via its own retry/pass fallback");
	}
}

final
void handleMessage (
	final Message pMessage
	)
{
	final Command cmd = _cmdMessagesMap.get (pMessage.what);
	if (cmd == null)
	{
		return;
	}
	if (cmd == Command.HIDE_WAIT_PROGRESS)
	{
		_mainActivity.hideWaitProgress ();
		return;
	}
	final GameInfo gameInfo =
		cmd == Command.CHANGE_GAME ? ((GameInfo [])pMessage.obj) [0]
			: (GameInfo)pMessage.obj;
	if (gameInfo._invalid
		&& cmd != Command.SAVE_GAME
		&& cmd != Command.LOAD_GAME)
	{
		return;
	}
	final BoardView boardView = _boardView;
	boolean playerBlackMoves = gameInfo._playerBlackMoves;
	switch (cmd)
	{
	case INIT_BOARD:
		boardView.initBoard (gameInfo._boardSize);
		return;
	case UNDO_MOVE:
	case REDO_MOVE:
		final boolean isUndo = cmd == Command.UNDO_MOVE;
		if (isUndo && gameInfo._redoPoints != null)
		{
			gameInfo._redoPoints = null;
			showScore (0, 0, null);
			drawBoard (gameInfo);
			enableUndoMenu (gameInfo);
			return;
		}

		Point undoPoint = null;
		for (int numUndos = otherPlayerIsMachine (gameInfo) ? 2 : 1;
			numUndos > 0; numUndos--)
		{
			List <Point> undoPoints;
			if (isUndo)
			{
				undoPoints = gameInfo.undo ();
				if (undoPoints == null)
				{
					return;
				}
				undoPoint = undoPoints.isEmpty () ? null : undoPoints.get (0);
				commitUndo (gameInfo);
				enablePassMenu (true);
			}
			else
			{
				undoPoints = gameInfo.redo ();
				final int undoSize;
				if (undoPoints == null || (undoSize = undoPoints.size ()) == 0)
				{
					return;
				}
				if (undoSize > 1)
				{
					gameInfo._redoPoints = undoPoints;
					undoPoints =
						gameInfo.getPreviousMoves (!playerBlackMoves, 1);
					undoPoint =
						!undoPoints.isEmpty () ? undoPoints.get (0) : null;
					break;
				}
				undoPoint = undoPoints.get (0);
				commitLiveMove (gameInfo, playerBlackMoves, undoPoint);
				playerBlackMoves = !playerBlackMoves;
			}
		}
		saveGame (gameInfo, true);
		playerBlackMoves = gameInfo._playerBlackMoves;
		showMove (!playerBlackMoves, undoPoint, gameInfo);
		enableUndoMenu (gameInfo);
		if (gameInfo.bothPlayersPassed ())
		{
			score (gameInfo, true);
		}
		else
		{
			if (gameInfo._redoPoints == null)
			{
				showScore (0, 0, null);
			}
			else
			{
				showScore (MainActivity._SHOW_MESSAGE, 0,
					_mainActivity.getResources ().getString (R.string.chooseVariationText));
			}
			showMove (playerBlackMoves, "");
			drawBoard (gameInfo);
			boardView.lockScreen (false);
		}
		return;
	case NEW_GAME:
		switch (loadSavedGame (gameInfo, true,
			GameInfo._DEFAULT_GAME_COLLECTION_IDX))
		{
		case FAIL:
			gtpCommand (GtpCommand.SET_BOARDSIZE,
				String.valueOf (gameInfo._boardSize));
			storeMarkers ();
			if (gameInfo._handicap > 0)
			{
				gtpCommand (GtpCommand.SET_HANDICAP,
					String.valueOf (gameInfo._handicap));
				gameInfo._playerBlackMoves = false;
			}
			gameInfo.initSGF (
				_mainActivity._appInfo._appName, _mainActivity._appInfo._appVersion);
			break;
		case SHOW_COLLECTION_LIST:
			showCollectionList ();
			return;
		}
		showCaptures (0, 0);
		showScore (0, 0, null);
		reStartGame (gameInfo, true);
		return;
	case CHANGE_GAME:
		gameInfo._invalid = true;
		reStartGame (((GameInfo [])pMessage.obj)[1].copy (gameInfo), false);
		return;
	case DRAW_BOARD:
		final List <Point> blackMoves = getStones (true, gameInfo),
			whiteMoves = getStones (false, gameInfo),
			redoPoints = gameInfo.getRedoPoints ();
		if (redoPoints != null)
		{
			if (playerBlackMoves)
			{
				blackMoves.addAll (redoPoints);
			}
			else
			{
				whiteMoves.addAll (redoPoints);
			}
		}
		boardView.drawBoard (
			blackMoves, whiteMoves,
			gameInfo.getPreviousMoves (
				!playerBlackMoves, GameInfo._MAX_HISTORY_STONES +1),
			redoPoints, gameInfo._moveNumber -1, !playerBlackMoves);
		showCaptures (getCaptures (true), getCaptures (false));
		if (!playerIsMachine (gameInfo))
		{
			setLegalMoves (gameInfo, playerBlackMoves);
		}
		return;
	case RESUME_SCORED_GAME:
		// Queued (not called directly) from reStartGame() so it runs after
		// the INIT_BOARD/DRAW_BOARD commands drawBoard() posted ahead of
		// it - see the comment there.
		score (gameInfo, true);
		finishGame (gameInfo, playerIsMachine (gameInfo),
			otherPlayerIsMachine (gameInfo));
		return;
	case PLAY_MOVE:
		showScore (0, 0, null);
		final boolean playerBlackMovesPlayMove = gameInfo._playerBlackMoves;
		final boolean playerIsMachine = playerIsMachine (gameInfo),
			nextPlayerIsMachine = otherPlayerIsMachine (gameInfo),
			genMove = playerIsMachine && gameInfo._redoPoints == null;
		Point lastMove = null;
		if (genMove)
		{
			enablePassMenu (false);
			enableUndoMenu (null);
			showMove (playerBlackMovesPlayMove, null);
		}
		else
		{
			final List <Point> lastMoves =
				gameInfo.getPreviousMoves (playerBlackMovesPlayMove, 1);
			if (lastMoves == null || lastMoves.size () != 1)
			{
				return;
			}
			lastMove = lastMoves.get (0);
		}
		// START TIMING
		long startTime = System.currentTimeMillis();

		// Generate move (synchronous). genMove's own branch handles both
		// engines itself (Pachi's genmove, then its mirror into GnuGo); the
		// human-move/already-decided-redo branch goes through commitLiveMove
		// instead of playMove directly, so it also reaches Pachi when it's
		// the active engine - without that, Pachi's own board would silently
		// stop matching reality the moment a human plays their first move,
		// still analyzing (and re-proposing) the stale position from before
		// it, which is exactly what made it play so badly, repeat the same
		// move, and generate "illegal"-looking moves GnuGo then rejected.
		final String move;
		if (genMove)
		{
			move = playMove (true, playerBlackMovesPlayMove, lastMove, gameInfo);
		}
		else
		{
			commitLiveMove (gameInfo, playerBlackMovesPlayMove, lastMove);
			move = "";
		}
		if (gameInfo._invalid)
		{
			return;
		}

		// Case-insensitive: GnuGo replies "PASS" (uppercase) to genmove, but
		// Pachi replies "pass" (lowercase) - matching _PASS's own casing
		// exactly here let a Pachi pass fall through to vertex2Point as if
		// it were a real board coordinate, crashing trying to parse "ass"
		// (the substring after its first letter) as a number.
		final boolean resigned = _RESIGN.equalsIgnoreCase(move),
				passed = _PASS.equalsIgnoreCase(move) || resigned;
		if (genMove)
		{
			if (resigned)
			{
				showMove(playerBlackMovesPlayMove, _mainActivity.getPassedText(true));
				// A resignation otherwise ends the game with far less visual
				// confirmation than a normal (double-pass) finish - that one
				// goes through score(), which draws the whole territory/dead-
				// stone breakdown; this skips straight to finishGame(), so
				// without an explicit message here, the only sign anything
				// happened is the small "resigns" text showMove just set next
				// to the turn indicator. Reuses the same _SHOW_MESSAGE
				// mechanism "Choose variation" already uses for a clear,
				// prominent status line instead of a numeric score.
				final Resources resources = _mainActivity.getResources ();
				showScore (MainActivity._SHOW_MESSAGE, 0, resources.getString (
					R.string.resignationMessageText,
					resources.getString (playerBlackMovesPlayMove
						? R.string.blackColorText : R.string.whiteColorText),
					resources.getString (playerBlackMovesPlayMove
						? R.string.whiteColorText : R.string.blackColorText)));
				finishGame(gameInfo, playerIsMachine, nextPlayerIsMachine);
				return;
			}
			// vertex2Point itself can no longer crash on an unparsable reply
			// (see its own comment) - still handled here, not silently
			// passed through, since addMove's Point parameter isn't
			// nullable: no exact spelling of "pass"/"resign" can be enforced
			// across different GTP engines, so this is the backstop for
			// whatever a future engine's genmove reply actually looks like.
			final Point parsedMove = passed ? Passed._Passed : vertex2Point(move, gameInfo);
			if (parsedMove == null)
			{
				if (isEnabledFor (_LOG_TAG, Log.WARN))
				{
					log (_LOG_TAG, Log.WARN,
						"Unparsable genmove reply treated as a pass: '" + move + "'");
				}
				gameInfo.addMove (Passed._Passed);
			}
			else
			{
				gameInfo.addMove (parsedMove);
			}
		}
		gameInfo._playerBlackMoves = !playerBlackMovesPlayMove;
		saveGame(gameInfo, true);
		if (gameInfo.bothPlayersPassed())
		{
			score(gameInfo, true);
			finishGame(gameInfo, playerIsMachine, nextPlayerIsMachine);
			return;
		}// END TIMING
		long elapsed = System.currentTimeMillis() - startTime;
		int desiredDelay = gameInfo._aiDelaySeconds * 1000;
		long remainingDelay = desiredDelay - elapsed;
		if (passed && playerIsMachine && !nextPlayerIsMachine)
		{
			_mainActivity.showPassMessage(playerBlackMovesPlayMove, resigned);
			remainingDelay = 0;
		}

		if (!genMove)
		{
			remainingDelay = 0;
		}
		Runnable continueRunnable = () -> {
			if (genMove)
			{
				// Reveal the AI's actual move at the same time the board
				// redraws, not as soon as it was computed - otherwise the
				// "thinking" spinner clears the instant genmove returns,
				// well before the (possibly much longer) Slow AI Moves
				// pacing delay this runnable is already waiting out below.
				showMove(playerBlackMovesPlayMove,
					passed ? _mainActivity.getPassedText(false) : move);
			}
			drawBoard(gameInfo);
			if (nextPlayerIsMachine)
			{
				if (gameInfo._redoPoints == null)
				{
					nextMove(gameInfo);
				}
				else
				{
					redoMove(gameInfo);
				}
			}
			else
			{
				showMove(!playerBlackMovesPlayMove, "");
				enablePassMenu(true);
				enableUndoMenu(gameInfo);
				boardView.lockScreen(false);
			}
			gameInfo._redoPoints = null;
		};

		// Delay if needed
		if (remainingDelay > 0)
		{
			new Handler(Looper.getMainLooper()).postDelayed(continueRunnable, remainingDelay);
		}
		else
		{
			continueRunnable.run();
		}
		return;
	case SAVE_GAME:
		MainActivity mainActivity = _mainActivity;
		mainActivity.showMessage (mainActivity.getResources ().getString (
			(saveGame (gameInfo, false) ? R.string.gameSavedInFileMessage
				: R.string.saveGameFailedAlertMessage),
			gameInfo.getFileNameForMessages ()));
		return;
	case APPEND_GAME:
		mainActivity = _mainActivity;
		final boolean appendSuccess = doAppendGame (gameInfo);
		if (appendSuccess)
		{
			// The file now definitely holds more than one game -- treat it
			// as a collection so a later plain "Overwrite" isn't offered.
			gameInfo._isCollection = true;
		}
		mainActivity.showMessage (mainActivity.getResources ().getString (
			(appendSuccess ? R.string.gameSavedInFileMessage
				: R.string.saveGameFailedAlertMessage),
			gameInfo.getFileNameForMessages ()));
		return;
	case LOAD_GAME:
		switch (loadSavedGame (gameInfo, false, pMessage.arg1))
		{
		case FAIL:
			mainActivity = _mainActivity;
			mainActivity.showMessage (mainActivity.getResources ().getString (
				R.string.loadGameFailedAlertMessage,
					gameInfo.getFileNameForMessages ()));
			return;
		case SHOW_COLLECTION_LIST:
			showCollectionList ();
			return;
		}
		saveGame (gameInfo, true);
		showScore (0, 0, null);
		showCaptures (0, 0);
		reStartGame (gameInfo, true);
		return;
	case RESTART_GAME:
		gameInfo.restartGame ();
		setLegalMoves (gameInfo, gameInfo._playerBlackMoves);
		showInitialMove (gameInfo);
		enableUndoMenu (gameInfo);
		enablePassMenu (false);
		_boardView.lockScreen (false);
		drawBoard (gameInfo);
		if (gameInfo.canRedo (playerIsMachine (gameInfo) ? 2 : 1))
		{
			redoMove (gameInfo);
		}
		return;
	case SHARE_GAME:
		saveGame (gameInfo , true);
		try
		{
			shareGameMain (_gameSharer.prepareShareUri (
				gameInfo, _autoSaveGamePathFileName));
		}
		catch (final Exception ignored) {}
		hideWaitProgress ();
		return;
	case SHOW_TERRITORY:
		score (gameInfo, false);
		hideWaitProgress ();
	}
}

private
void setLegalMoves (
	final GameInfo pGameInfo,
	final boolean pBlackMoves
	)
{
	_boardView.setLegalMoves (verteces2Points (
		gtpCommand (GtpCommand.LIST_LEGAL,
			pBlackMoves ? _BLACK : _WHITE), pGameInfo));
}

static String playMove(
		final boolean pGenMove,
		final boolean pBlack,
		final Point pMove,
		final GameInfo pGameInfo
) {
	return playMove (pGenMove, pBlack, pMove, pGameInfo, EngineType.GnuGo);
}

// pTargetEngine only matters for the non-genmove branch below - it exists
// for GameInfo.syncPachiHistory's catch-up replay (see reStartGame) and
// commitLiveMove's live-mirror-into-Pachi call, both of which need to send
// a play to Pachi specifically instead of GnuGo. Every other call site uses
// the 4-arg overload above, unchanged (always GnuGo, same as every other
// board-state command - see gtpCommand's comment).
static String playMove(
		final boolean pGenMove,
		final boolean pBlack,
		final Point pMove,
		final GameInfo pGameInfo,
		final EngineType pTargetEngine
) {
	final String colorArg = pBlack ? _BLACK : _WHITE;
	if (!pGenMove)
	{
		return gtpCommand (GtpCommand.PLAY_MOVE,
			colorArg + " " + (pMove instanceof Passed ? _PASS
				: point2Vertex (pMove, pGameInfo._boardSize)), pTargetEngine);
	}
	final boolean usePachi = pGameInfo._engineType == EngineType.Pachi;
	if (!usePachi)
	{
		return gtpCommand (GtpCommand.GEN_MOVE, colorArg, EngineType.GnuGo);
	}
	// A desynced mirror should be rare (both boards are kept in lockstep
	// everywhere else), so a couple of retries - Pachi's UCT search isn't
	// deterministic, so a retry isn't just asking the same rejected move
	// again - costs little and avoids surprising a human with a mystery
	// pass when a legal move was very likely still available.
	for (int attempt = 0; attempt < _PACHI_MOVE_ATTEMPTS; attempt++)
	{
		// Refill Pachi's clock immediately before every attempt - see
		// TIME_LEFT's own comment for why this can't just be set once.
		gtpCommand (GtpCommand.TIME_LEFT,
			colorArg + " " + pGameInfo._pachiThinkSeconds + " 1", EngineType.Pachi);
		final String move = gtpCommand (GtpCommand.GEN_MOVE, colorArg, EngineType.Pachi);
		if (_RESIGN.equalsIgnoreCase (move))
		{
			return move;
		}
		// genmove only commits on the engine that generated it - mirror
		// Pachi's move into GnuGo (the referee) so its board state doesn't
		// drift out of sync with Pachi's.
		//
		// Checked, not fire-and-forget: if GnuGo rejects it, the two boards
		// have actually diverged, and silently treating the move as having
		// happened anyway - as this used to - left a stray "last move" ring
		// marker on an empty point (gameInfo.addMove, back in the caller,
		// still recorded the move regardless, but GnuGo's own list_stones -
		// what's actually drawn as stones - never had one there).
		if (gtpCommandSucceeded (GtpCommand.PLAY_MOVE, colorArg + " " + move, EngineType.GnuGo))
		{
			return move;
		}
		if (isEnabledFor (_LOG_TAG, Log.WARN))
		{
			log (_LOG_TAG, Log.WARN, "Pachi generated a move GnuGo rejected: '"
				+ move + "' (attempt " + (attempt +1) + "/" + _PACHI_MOVE_ATTEMPTS + ")");
		}
		// Pachi's own genmove already committed this move on ITS board even
		// though GnuGo just refused it - undo that commit too, so both
		// engines agree again instead of staying diverged for the rest of
		// the game (and so Pachi's next genmove attempt starts from the
		// same position GnuGo is actually at, not from the rejected move).
		gtpCommand (GtpCommand.PACHI_UNDO, null, EngineType.Pachi);
	}
	if (isEnabledFor (_LOG_TAG, Log.WARN))
	{
		log (_LOG_TAG, Log.WARN, "Pachi and GnuGo stayed desynced after "
			+ _PACHI_MOVE_ATTEMPTS + " attempts - passing this turn");
	}
	return _PASS;
}


private
void reStartGame (
	final GameInfo pGameInfo,
	final boolean pInit
	)
{
	// By this point (after NEW_GAME's loadSavedGame switch, or directly for
	// CHANGE_GAME) pGameInfo's move tree is fully populated if there was
	// anything to resume - the natural point to re-seed the game clock's
	// elapsed-time display from whatever's recorded on it (GameInfo.
	// lastRecordedElapsedTime), rather than MainActivity.newGame()'s earlier
	// _gameInfo assignment, which runs before that tree is loaded.
	_mainActivity.attachGameClock ();
	// Starts/stops Pachi to match this game's choice - a no-op for the common
	// case (another game, same engine). GnuGo itself is never touched here;
	// it's always running (primary engine or referee - see gtpCommand's
	// comment), so its own setup below is sent unconditionally too. Has to
	// happen before any setup commands below so Pachi is actually there to
	// receive its own.
	_mainActivity.ensureEngine (pGameInfo._engineType);
	gtpCommand (GtpCommand.SET_LEVEL, String.valueOf (pGameInfo._level));
	gtpCommand (GtpCommand.SET_KOMI, pGameInfo._komi);
	gtpCommand (GtpCommand.SET_RESIGN, pGameInfo._allowResignation ? "1" : "0");
	gtpCommand (GtpCommand.SET_RULES, pGameInfo._chineseRules ? "1" : "0");
	if (pGameInfo._engineType == EngineType.Pachi)
	{
		// Pachi defaults to 19x19 internally if never told otherwise - it was
		// never sent its own boardsize, so a non-19x19 game had it generating
		// moves valid on its own (wrong) idea of the board, silently rejected
		// when mirrored into GnuGo (which did have the right size), leaving
		// GnuGo's referee board never reflecting any of Pachi's moves.
		gtpCommand (GtpCommand.SET_BOARDSIZE,
			String.valueOf (pGameInfo._boardSize), EngineType.Pachi);
		// Komi (above) was only ever sent to GnuGo - Pachi scores/resigns off
		// its own idea of komi, which defaulted to 7.5 regardless of what the
		// game was actually set to.
		gtpCommand (GtpCommand.SET_KOMI, pGameInfo._komi, EngineType.Pachi);
		// Confirmed Pachi does expose this (kgs-rules - see its own comment);
		// GnuGo (above) is still the one actually refereeing final
		// scoring, but Pachi's own search uses its idea of the ruleset too
		// (board_score's handicap compensation and area/territory
		// conversion), which affects which moves it thinks are still worth
		// playing - a likely cause of it filling in its own, already-settled
		// territory.
		gtpCommand (GtpCommand.KGS_RULES,
			pGameInfo._chineseRules ? "chinese" : "japanese", EngineType.Pachi);
		gtpCommand (GtpCommand.PACHI_SET_OPTION,
			"resign_threshold=" + pGameInfo._pachiResignThreshold, EngineType.Pachi);
		// GTP time_settings is <main_time> <byoyomi_time> <byoyomi_stones> -
		// "<thinkSeconds> 0 0" (tried first) gives thinkSeconds of MAIN time
		// for the WHOLE GAME, not per move, so Pachi burned through it almost
		// immediately and then had ~0 time for every move after - looking
		// like it ignored the setting entirely and explaining the weak play.
		// 0 main time + byoyomi_stones=1 is the standard "N seconds, every
		// move, forever" idiom: main time starts already exhausted, so every
		// move is its own one-move byoyomi period of the full think time.
		gtpCommand (GtpCommand.TIME_SETTINGS,
			"0 " + pGameInfo._pachiThinkSeconds + " 1", EngineType.Pachi);
		// Pachi only ever sees GTP commands sent to it directly - a freshly
		// (re)started process otherwise starts from an empty board no matter
		// how far the real game has progressed (fresh handicap stones, or an
		// entire resumed/reloaded game's move history). See
		// GameInfo.syncPachiHistory's own comment for why it's a full replay
		// rather than a GnuGo list_stones snapshot.
		//
		// Skipped (via pachiNeedsSync) when it would just be redoing work a
		// still-live Pachi process already has: this app has no
		// configChanges, so a pure rotation reaches here just as often as a
		// genuine resume, but every move's already been mirrored to Pachi
		// live as it was played (see commitLiveMove/playMove's Pachi
		// branch) - a rotation alone leaves nothing for a full replay to
		// fix. See GoEngineViewModel.pachiNeedsSync's own comment for
		// exactly what this does and doesn't guarantee.
		if (_mainActivity.pachiNeedsSync (pGameInfo._moveNumber))
		{
			pGameInfo.syncPachiHistory ();
			_mainActivity.markPachiSynced (pGameInfo._moveNumber);
		}
	}
	drawBoard (pGameInfo, pInit);
	_boardView.lockScreen (false);
	// A resumed game (app (re)launch, or Activity recreation - e.g. a
	// rotation, since this app has no configChanges and gets fully
	// recreated) can already be in its finished, both-passed state. Without
	// this check, resuming one used to always fall into the "still in
	// progress" branch below - silently resetting the UI to the normal
	// captures/move display and re-enabling Pass as if nothing had been
	// decided, even though the move list itself still correctly ended on
	// two passes. Scoring it immediately instead mirrors exactly what
	// happens when both-passed is reached live, during PLAY_MOVE/UNDO_MOVE.
	//
	// This has to be queued (RESUME_SCORED_GAME), not called directly here:
	// drawBoard(pGameInfo, pInit) above only POSTS its INIT_BOARD/DRAW_BOARD
	// commands to this same handler, it doesn't run them synchronously - a
	// direct score() call here used to run before INIT_BOARD, crashing with
	// a NullPointerException on board geometry (_gridShape etc.) that
	// initBoard() hadn't set up yet. Queuing keeps the ordering correct.
	if (pGameInfo.bothPlayersPassed ())
	{
		executeCommand (Command.RESUME_SCORED_GAME, pGameInfo);
		return;
	}
	if (playerIsMachine (pGameInfo))
	{
		nextMove (pGameInfo);
	}
	else
	{
		showInitialMove (pGameInfo);
		enablePassMenu (true);
		enableUndoMenu (pGameInfo);
	}
}

private
void finishGame (
	final GameInfo pGameInfo,
	final boolean pPlayerIsMachine,
	final boolean pNextPlayerIsMachine
	)
{
	if (pPlayerIsMachine && pNextPlayerIsMachine)
	{
		pGameInfo._playerBlackHuman = true;
		pGameInfo._playerWhiteHuman = true;
		_mainActivity.storeGameInfo (pGameInfo);
	}
	pGameInfo._redoPoints = null;
	enableUndoMenu (pGameInfo);
	enablePassMenu (false);
	_boardView.lockScreen (true);
}

private
void score (
	final GameInfo pGameInfo,
	final boolean pFinalScore
	)
{
	if (pFinalScore)
	{
		enablePassMenu (false);
		_boardView.lockScreen (true);
	}
	final Resources resources = _mainActivity.getResources ();
	showWaitProgress (resources.
		getString (R.string.waitProgressFinalScoreMessage));
	final BoardView boardView = _boardView;
	final List <Point> blackStones = getStones (true, pGameInfo),
		whiteStones = getStones (false, pGameInfo),
		deadStones = verteces2Points (
			gtpCommand (GtpCommand.LIST_FINAL_STATUS, _DEAD), pGameInfo),
		blackDeadStones = Generics.newArrayList (),
		whiteDeadStones = Generics.newArrayList ();
	for (final Point dead : deadStones)
	{
		(blackStones.contains (dead) ? blackDeadStones : whiteDeadStones).
			add (dead);
	}
	removeDeadStones (blackDeadStones, blackStones);
	removeDeadStones (whiteDeadStones, whiteStones);
	boardView.drawBoard (blackStones, whiteStones, null, 0, false);
	boardView.drawDeadStones (blackDeadStones, whiteDeadStones);
	final List <Point>
		blackTerritory = verteces2Points (
			gtpCommand (GtpCommand.LIST_FINAL_STATUS, _BLACK_TERRITORY),
			pGameInfo),
		whiteTerritory = verteces2Points (
			gtpCommand (GtpCommand.LIST_FINAL_STATUS, _WHITE_TERRITORY),
			pGameInfo);
	boardView.drawTerritory (blackTerritory, whiteTerritory, false);
	boardView.drawTerritory (whiteDeadStones, blackDeadStones, true);
	boardView.drawBoard2Surface ();
	final int numBlackDeadStones = blackDeadStones.size (),
		numWhiteDeadStones = whiteDeadStones.size ();
	final boolean chineseRules = pGameInfo._chineseRules;
	showCaptures (
		(chineseRules ? blackStones.size () : getCaptures (true))
			+ numWhiteDeadStones,
		(chineseRules ? whiteStones.size () : getCaptures (false))
			+ numBlackDeadStones);
	showScore (blackTerritory.size () + numWhiteDeadStones,
		whiteTerritory.size () + numBlackDeadStones, pGameInfo);
}

private static
void removeDeadStones (
	final List <Point> pDeadStones,
	final List <Point> pAliveStones
	)
{
	for (final Point dead : pDeadStones)
	{
		pAliveStones.remove (dead);
	}
}

void deleteAutoSaveFile ()
{
	final File autoSaveFile = new File (_autoSaveGamePathFileName);
	if (autoSaveFile.exists ())
	{
		synchronized (_autoSaveLock)
		{
			autoSaveFile.delete ();
		}
	}
}

private
GameInfo.LoadGameStatus loadSavedGame (
	final GameInfo pGameInfo,
	final boolean pAutoSave,
	final int pCollectionIdx
	)
{
	try
	{
		final String externalInputPathFileName = _externalInputPathFileName;
		_externalInputPathFileName = null;
		final boolean loadFromExternalInput = externalInputPathFileName != null;
		final Uri uri;
		if (pAutoSave)
		{
			final File file = new File (loadFromExternalInput ?
				externalInputPathFileName : _autoSaveGamePathFileName);
			if (!file.isFile ())
			{
				return FAIL;
			}
			uri = Uri.fromFile (file);
		}
		else
		{
			uri = Uri.parse (pGameInfo._sgfFileName);
		}
		GameInfo.LoadGameStatus success =
			pGameInfo.loadGame (uri, pCollectionIdx, _mainActivity.getContentResolver ());
		switch (success)
		{
		case SHOW_COLLECTION_LIST:
			if (loadFromExternalInput)
			{
				pGameInfo._sgfFileName = uri.toString ();
				pGameInfo._sgfDisplayName =
					new File (externalInputPathFileName).getName ();
			}
			break;
		case SUCCESS:
			if (loadFromExternalInput)
			{
				saveGame (pGameInfo, true);
			}
			showInitialMove (pGameInfo);
			break;
		}
		return success;
	}
	catch (final Exception e)
	{
		return FAIL;
	}
}

private
void showInitialMove (
	final GameInfo pGameInfo
	)
{
	final boolean blackMoves = pGameInfo._playerBlackMoves;
	showMove (blackMoves, "");
	final Point move = pGameInfo.getRecentMoveValue ();
	if (move != null)
	{
		showMove (!blackMoves, move, pGameInfo);
	}
	else
	{
		showMove (!blackMoves, "");
	}
}

void showMove (
	final boolean pMoveColor,
	final Point pMove,
	final GameInfo pGameInfo
	)
{
	showMove (pMoveColor,
		pMove == null ? "" :
			(pMove instanceof Passed ?
				_mainActivity.getPassedText (false)
				: point2Vertex (pMove, pGameInfo._boardSize)));
}

private
boolean saveGame (
	final GameInfo pGameInfo,
	final boolean pAutoSave
	)
{
	try
	{
		if (pAutoSave)
		{
			final File file = new File (_autoSaveGamePathFileName);
			if (file.isFile ())
			{
				file.delete ();
			}
			final boolean success;
			synchronized (pGameInfo)
			{
				success = pGameInfo.saveGame (
					Uri.fromFile (file), file.getName (), _mainActivity.getContentResolver ());
			}
			return success;
		}
		final Uri uri = Uri.parse (pGameInfo._sgfFileName);
		final boolean success;
		synchronized (pGameInfo)
		{
			success = pGameInfo.saveGame (
				uri, pGameInfo._sgfDisplayName, _mainActivity.getContentResolver ());
		}
		return success;
	}
	catch (final Exception e)
	{
		return false;
	}
}

private
boolean doAppendGame (
	final GameInfo pGameInfo
	)
{
	try
	{
		final Uri uri = Uri.parse (pGameInfo._sgfFileName);
		synchronized (pGameInfo)
		{
			return pGameInfo.appendGame (
				uri, pGameInfo._sgfDisplayName, _mainActivity.getContentResolver ());
		}
	}
	catch (final Exception e)
	{
		return false;
	}
}

static
List <Point> getStones (
	final boolean pBlack,
	final GameInfo pGameInfo
	)
{
	return verteces2Points (
		gtpCommand (
			GtpCommand.LIST_STONES, pBlack ? _BLACK : _WHITE), pGameInfo);
}

private
int getCaptures (
	final boolean pBlack
	)
{
	try
	{
		return Integer.parseInt (
			gtpCommand (GtpCommand.GET_CAPTURES, pBlack ? _BLACK : _WHITE));
	}
	catch (final NumberFormatException e)
	{
		return 0;
	}
}

private static
Point vertex2Point (
	final String pVertex,
	final GameInfo pGameInfo
	)
{
	return GtpProtocol.vertex2Point (pVertex, pGameInfo._boardSize);
}

private static
List <Point> verteces2Points (
	final String pVerteces,
	final GameInfo pGameInfo
	)
{
	return GtpProtocol.verteces2Points (pVerteces, pGameInfo._boardSize);
}

static
String point2Vertex (
	final Point pPoint,
	final int pBoardSize
	)
{
	return GtpProtocol.point2Vertex (pPoint, pBoardSize);
}

static
boolean playerIsMachine (
	final GameInfo pGameInfo
	)
{
	if (pGameInfo == null)
	{
		return false;
	}
	final boolean playerBlackMoves = pGameInfo._playerBlackMoves;
	return (playerBlackMoves && !pGameInfo._playerBlackHuman)
		|| (!playerBlackMoves && !pGameInfo._playerWhiteHuman);
}

static
boolean otherPlayerIsMachine (
	final GameInfo pGameInfo
	)
{
	if (pGameInfo == null)
	{
		return false;
	}
	final boolean playerBlackMoves = pGameInfo._playerBlackMoves;
	return (playerBlackMoves && !pGameInfo._playerWhiteHuman)
		|| (!playerBlackMoves && !pGameInfo._playerBlackHuman);
}
}