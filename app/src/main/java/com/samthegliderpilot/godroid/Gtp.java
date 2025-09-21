package com.samthegliderpilot.godroid;

import java.io.File;
import java.io.FileInputStream;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import android.content.res.Resources;
import android.content.Context;
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
import static com.samthegliderpilot.godroid.Globals.*;
import com.samthegliderpilot.util.Generics;
import com.samthegliderpilot.util.AssetsManager;
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

private static
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
	LOAD_GAME,
	RESTART_GAME,
	SHOW_TERRITORY,
	SHARE_GAME;

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

static
enum GtpCommand
{
	SET_BOARDSIZE ("boardsize "),
	SET_LEVEL ("level "),
	SET_KOMI ("komi "),
	SET_RESIGN("set_resign_option "),
	SHOWBOARD ("showboard"),
	PLAY_MOVE ("play "),
	GEN_MOVE ("genmove "),
	LIST_STONES ("list_stones "),
	GET_CAPTURES ("captures "),
	LIST_LEGAL ("all_legal "),
	LIST_FINAL_STATUS ("final_status_list "),
	ESTIMATE_SCORE ("estimate_score"),
//	SAVE_SGF ("printsgf "),
//	LOAD_SGF ("loadsgf "),
	GET_BOARDSIZE ("query_boardsize"),
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
	_ESTIMIATED_SCORE_PATTERN = "^(B|W)(.[0-9]+\\.[0-9]+)",
	_SGF_VALUE_PATTERN_STRING = "\\[([^]]+)\\]",
	_SGF_COLOR_2_PLAY_PATTERN_STRING = "PL",
	_SGF_COLOR_2_PLAY_WHITE = "W",
	_SGF_COLOR_2_PLAY_BLACK = "B",
	_SGF_TMP_FILE_SUFFIX = "_tmp",
	_ESTIMATED_SCORE_BLACK_WINS_LETTER = "B";

static final
char[] _POSITION_LETTERS_CHARS = _POSITION_LETTERS_STR.toCharArray ();

private static final
List <Point> _markers = Generics.newArrayList ();

private final
Handler _myHandler;

Gtp (
	final Handler pHandler
	)
{
	_myHandler = pHandler;
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

static
List <Point> getMarkers ()
{
	return _markers;
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

	String reply = playGTP (command);

	if (reply != null)
	{
		reply = reply.replaceFirst ("= ", "").replace ("\n\n", "");
	}
	if (isEnabledFor (_LOG_TAG, Log.DEBUG))
	{
		log (_LOG_TAG, Log.DEBUG, "command: '"
			+ command + "' reply: '" + reply + "'");
	}
	if (reply == null || reply.length () == 0 || reply.charAt (0) == '?')
	{
		return "";
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
		boolean playerBlackMoves = gameInfo._playerBlackMoves;
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
					_resources.getString (R.string.chooseVariationText));
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
			gameInfo.initSGF ();
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
		playerBlackMoves = gameInfo._playerBlackMoves;
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

		// END TIMING
		long elapsed = System.currentTimeMillis() - startTime;
		int desiredDelay = gameInfo._aiDelaySeconds * 1000;
		long remainingDelay = desiredDelay - elapsed;
		if (!genMove)
		{
			remainingDelay = 0;
		}
		Runnable continueRunnable = () -> {
			if (gameInfo._invalid)
			{
				return;
			}
			final boolean resigned = _RESIGN.equals(move),
					passed = _PASS.equals(move) || resigned;
			if (genMove)
			{
				showMove(playerBlackMovesPlayMove,
						passed ? _mainActivity.getPassedText(resigned) : move);
				if (resigned)
				{
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
			}
			if (passed && playerIsMachine && !nextPlayerIsMachine)
			{
				_mainActivity.showPassMessage(playerBlackMovesPlayMove, resigned);
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
		mainActivity.showMessage (_resources.getString (
			(saveGame (gameInfo, false) ? R.string.gameSavedInFileMessage
				: R.string.saveGameFailedAlertMessage),
			gameInfo._sgfFileName));
		return;
	case LOAD_GAME:
		switch (loadSavedGame (gameInfo, false, pMessage.arg1))
		{
		case FAIL:
			mainActivity = _mainActivity;
			mainActivity.showMessage (_resources.getString (
				R.string.loadGameFailedAlertMessage, gameInfo._sgfFileName));
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
			mainActivity = _mainActivity;
			String fileName = gameInfo._sgfFileName;
			fileName = fileName == null ?
				mainActivity.getDateFileName ()
					+ mainActivity.getSgfFileExtension () :
				new File (fileName).getName ();
			AssetsManager.copyFile (
				new FileInputStream (_autoSaveGamePathFileName),
				mainActivity.openFileOutput (
					fileName, Context.MODE_WORLD_READABLE));
			final File copiedFile = mainActivity.getFileStreamPath (fileName);
			if (copiedFile != null)
			{
				copiedFile.deleteOnExit ();
			}
			shareGameMain (
				Uri.fromFile (mainActivity.getFileStreamPath (fileName)));
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
	gtpCommand (GtpCommand.SET_LEVEL, String.valueOf (pGameInfo._level));
	gtpCommand (GtpCommand.SET_KOMI, pGameInfo._komi);
	gtpCommand (GtpCommand.SET_RESIGN, pGameInfo._allowResignation ? "1" : "0");

	final int chineseRules = pGameInfo._chineseRules ? 1 : 0;
	MainActivity.setRules (chineseRules);
	if (isEnabledFor (_LOG_TAG, Log.DEBUG))
	{
		log (_LOG_TAG, Log.DEBUG, "command: 'chineseRules': " + chineseRules);
	}
	drawBoard (pGameInfo, pInit);
	_boardView.lockScreen (false);
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
	final Resources resources = _resources;
	if (pFinalScore
		&& pGameInfo._playerBlackHuman && pGameInfo._playerWhiteHuman)
	{
		drawBoard (pGameInfo);
		showWaitProgress (resources.
			getString (R.string.waitProgressEstimatingScoreMessage));
		final Matcher matcher =
			Pattern.compile (_ESTIMIATED_SCORE_PATTERN).matcher (
				gtpCommand (GtpCommand.ESTIMATE_SCORE, null));
		if (matcher.find ())
		{
			final boolean blackWins =
				_ESTIMATED_SCORE_BLACK_WINS_LETTER.equals (matcher.group (1));
			showScore (blackWins ? MainActivity._SHOW_ESTIMATED_SCORE : 0,
				blackWins ? 0 : MainActivity._SHOW_ESTIMATED_SCORE,
				matcher.group (2));
		}
		return;
	}

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
	final String autoSavePathFileName = _autoSaveGamePathFileName;
	final File autoSaveFile = new File (autoSavePathFileName);
	if (autoSaveFile.exists ())
	{
		synchronized (autoSavePathFileName)
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
		final File saveFile = new File (pAutoSave ?
			(loadFromExternalInput ?
				externalInputPathFileName : _autoSaveGamePathFileName) :
			pGameInfo._sgfFileName);
		if (!saveFile.isFile ())
		{
			return FAIL;
		}
		GameInfo.LoadGameStatus success =
			pGameInfo.loadGame (saveFile, pCollectionIdx);
		switch (success)
		{
		case SHOW_COLLECTION_LIST:
			if (loadFromExternalInput)
			{
				pGameInfo._sgfFileName = externalInputPathFileName;
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
		final File file = new File (pAutoSave ? _autoSaveGamePathFileName :
			pGameInfo._sgfFileName);
		if (file.isFile () && file.exists ())
		{
			file.delete ();
		}
		final boolean success;
		synchronized (pGameInfo)
		{
			success = pGameInfo.saveGame (file);
		}
		return success;
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
	return Integer.parseInt (
		gtpCommand (GtpCommand.GET_CAPTURES, pBlack ? _BLACK : _WHITE));
}

private static
Point vertex2Point (
	final String pVertex,
	final GameInfo pGameInfo
	)
{
	if (pVertex == null)
	{
		return null;
	}
	return new Point (
		_POSITION_LETTERS_STR.indexOf (pVertex.charAt (0)),
		pGameInfo._boardSize - Integer.parseInt (pVertex.substring (1)));
}

private static
List <Point> verteces2Points (
	final String pVerteces,
	final GameInfo pGameInfo
	)
{
	final List <Point> points = Generics.newArrayList ();
	if (pVerteces == null)
	{
		return points;
	}
	final StringTokenizer tokenizer = new StringTokenizer (pVerteces, " \n");
	while (tokenizer.hasMoreTokens ())
	{
		points.add (new Point (
			vertex2Point (tokenizer.nextToken (), pGameInfo)));
	}
	return points;
}

static
String point2Vertex (
	final Point pPoint,
	final int pBoardSize
	)
{
	if (pPoint == null || pPoint instanceof Passed)
	{
		return null;
	}
	return _POSITION_LETTERS_CHARS [pPoint.x]
		+ String.valueOf (pBoardSize - pPoint.y);
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