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
	UNDO ("gg-undo ");

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
	final String cmd = pCommand._gtpCommand,
		command = pArgument == null ? cmd : cmd + pArgument;

	final String reply = GtpProtocol.cleanReply (playGTP (command));

	if (isEnabledFor (_LOG_TAG, Log.DEBUG))
	{
		log (_LOG_TAG, Log.DEBUG, "command: '"
			+ command + "' reply: '" + reply + "'");
	}
	return reply;
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
				gtpCommand (GtpCommand.UNDO, "1");
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
				gtpCommand (GtpCommand.PLAY_MOVE,
					(playerBlackMoves ? _BLACK : _WHITE) + " "
						+ (undoPoint instanceof Passed ? _PASS
							: point2Vertex (undoPoint, gameInfo._boardSize)));
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

		// Generate move (synchronous)
		final String move = playMove(genMove, playerBlackMovesPlayMove, lastMove,
				gameInfo._boardSize);
		if (gameInfo._invalid)
		{
			return;
		}

		final boolean resigned = _RESIGN.equals(move),
				passed = _PASS.equals(move) || resigned;
		if (genMove)
		{
			if (resigned)
			{
				showMove(playerBlackMovesPlayMove, _mainActivity.getPassedText(true));
				showScore(0, 0, null);
				finishGame(gameInfo, playerIsMachine, nextPlayerIsMachine);
				return;
			}
			gameInfo.addMove(passed ? Passed._Passed :
					vertex2Point(move, gameInfo));
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
		final int pBoardSize
) {
	return gtpCommand(
			pGenMove ? GtpCommand.GEN_MOVE : GtpCommand.PLAY_MOVE,
			(pBlack ? _BLACK : _WHITE)
					+ (pGenMove ? "" :
					(" " + (pMove instanceof Passed ? _PASS : point2Vertex(pMove, pBoardSize))))
	);
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
	gtpCommand (GtpCommand.SET_LEVEL, String.valueOf (pGameInfo._level));
	gtpCommand (GtpCommand.SET_KOMI, pGameInfo._komi);
	gtpCommand (GtpCommand.SET_RESIGN, pGameInfo._allowResignation ? "1" : "0");

	gtpCommand (GtpCommand.SET_RULES, pGameInfo._chineseRules ? "1" : "0");
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