package de.agrothe.go;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.Writer;
import java.util.Collections;
import java.util.GregorianCalendar;
import java.util.List;

import android.graphics.Point;
import android.text.format.DateFormat;
import android.util.Log;
import static de.agrothe.go.MainActivity._LOG_TAG;
import de.agrothe.go.sgf.Node;
import static de.agrothe.go.sgf.Node.PropertyNode.PropertyNode;
import de.agrothe.go.sgf.PropertyName;
import de.agrothe.go.sgf._Logger;
import static de.agrothe.go.Globals.*;
import de.agrothe.util.Generics;
import de.agrothe.util.Logging;
import static de.agrothe.util.Logging.isEnabledFor;
import static de.agrothe.util.Logging.log;

public
class GameInfo
{
static final
String
	_CURRENT_NODE_NAME = "-RECENT_MOVE",
	_RECENT_MOVE_NAME = _appInfo._appName + _CURRENT_NODE_NAME,
	_CHINESE_RULES_PROPERTY_VALUE = "Chinese",
	_DEFAULT_KOMI = "5.5";

static final
int
	_DEFAULT_GAME_COLLECTION_IDX = -1,
	_MAX_HISTORY_STONES = 2, // todo settings
	_DEFAULT_BOARD_SIZE = 9,
	_DEFAULT_LEVEL = 1,
	_DEFAULT_HANDICAP = 0,
	_DEFAULT_AI_DELAY = 0;

static final
PropertyName.Property _RECENT_MOVE_PROPERTY =
	PropertyName.RecentMove.newProperty (_RECENT_MOVE_NAME);

static final
boolean
	_DEFAULT_BLACK_HUMAN = true,
	_DEFAULT_WHITE_HUMAN = false,
	_DEFAULT_BLACK_MOVES = true,
	_DEFAULT_CHINESE_RULES = false,
	_DEFAULT_ALLOW_RESIGNATION = true;

static final
_Logger _SGF_LOGGER = new _Logger ()
	{
		public
		void log (final String pMessage)
		{
			if (isEnabledFor (_LOG_TAG, Log.VERBOSE))
			{
				Logging.log (_LOG_TAG, Log.VERBOSE, pMessage);
			}
		}
	};

static
class Passed
	extends Point
{
	final static
	Passed _Passed = new Passed ();
}

enum Rules
{
	Japanese (PropertyName._JAPANESE_RULES_PROPERTY_VALUE),
	Chinese (_CHINESE_RULES_PROPERTY_VALUE);

	final
	String _sgfPropertyName;

	Rules (
		final String pSgfName
		)
	{
		_sgfPropertyName = pSgfName;
	}
}
/*
static final
Map <String, Rules> _rulesMap;
static
{
	final Rules[] rules = Rules.values ();
	final Map <String, Rules> rulesMap =
		_rulesMap = Generics.newHashMap (rules.length);
	for (final Rules rule : rules)
	{
		rulesMap.put (rule._sgfPropertyName, rule);
	}
}
*/

enum LoadGameStatus
{
	SUCCESS, FAIL, SHOW_COLLECTION_LIST
}

int
	_boardSize = _DEFAULT_BOARD_SIZE,
	_level = _DEFAULT_LEVEL,
	_handicap = _DEFAULT_HANDICAP,
	_aiDelaySeconds = _DEFAULT_AI_DELAY;

String _komi = _DEFAULT_KOMI;

boolean _chineseRules = _DEFAULT_CHINESE_RULES;

boolean
	_playerBlackHuman = _DEFAULT_BLACK_HUMAN,
	_playerWhiteHuman = _DEFAULT_WHITE_HUMAN,
	_playerBlackMoves = _DEFAULT_BLACK_MOVES,

	_allowResignation = _DEFAULT_ALLOW_RESIGNATION;

Node _gameNode;

PropertyNode
	_setupNode,
	_currentNode;

String _sgfFileName;

boolean _isCollection = false;

long[]
	_collectionOffsets, _collectionNumChars;

String[] _collectionNames;

int _collectionIdx = _DEFAULT_GAME_COLLECTION_IDX;

int _moveNumber = 0;

List <Point> _redoPoints;

boolean _invalid = false;

GameInfo copy (
	final GameInfo pGameInfo
	)
{
	_playerBlackMoves = pGameInfo._playerBlackMoves;
	_gameNode = pGameInfo._gameNode;
	_setupNode = pGameInfo._setupNode;
	_currentNode = pGameInfo._currentNode;
	_moveNumber = pGameInfo._moveNumber;
	_collectionIdx = pGameInfo._collectionIdx;
	return copyCollection (pGameInfo);
}

GameInfo copyCollection (
	final GameInfo pGameInfo
	)
{
	_isCollection = pGameInfo._isCollection;
	_collectionOffsets = pGameInfo._collectionOffsets;
	_collectionNumChars = pGameInfo._collectionNumChars;
	_collectionNames = pGameInfo._collectionNames;
	_sgfFileName = pGameInfo._sgfFileName;
	return this;
}

void initSGF ()
{
	final AppInfo appInfo = _appInfo;
	final PropertyNode node = _setupNode = _currentNode =
		new PropertyNode (_gameNode = new Node (null),
			PropertyName.Application.newProperty (
				appInfo._appName + ":" + appInfo._appVersion)).
		addProperty (PropertyName.FileFormat.newProperty (
			PropertyName._SGF_FILE_FORMAT4)).
		addProperty (PropertyName.GameType.newProperty (
			PropertyName._GO_GAME_NUMBER)).
		addProperty (toPropertyValue (PropertyName.Size, _boardSize)).
		addProperty (toPropertyValue (PropertyName.Komi, _komi)).
		addProperty (toPropertyValue (PropertyName.Player, _playerBlackMoves));
		node.addProperty (toPropertyValue (PropertyName.Rules, _chineseRules));
	if (_handicap > 0)
	{
		final List <Point> handicapStones = Gtp.getStones (true, this);
		if (handicapStones != null && !handicapStones.isEmpty ())
		{
			node.addProperty (toPropertyValue (
				PropertyName.Handicap, _handicap));
			for (final Point point : handicapStones)
			{
				node.addProperty (
					toPropertyValue (PropertyName.AddBlack, point));
			}
		}
	}
}

void addMove (
	final Point pMove
	)
{
	final PropertyNode currentNode = _currentNode;
	if (currentNode == null || currentNode == _gameNode)
	{
		return;
	}
	try
	{
		setCurrentNode (currentNode.addPropertyNode (
			toPropertyValue (getMoveName (_playerBlackMoves), pMove)));
	}
	catch (final Exception e)
	{
		return;
	}
	_moveNumber++;
}

PropertyNode setCurrentNode (
	final PropertyNode pNewNode
	)
{
	if (pNewNode == null)
	{
		return null;
	}
	final boolean doLog = isEnabledFor (_LOG_TAG, Log.VERBOSE);
	final PropertyName.Property currentNodeName = _RECENT_MOVE_PROPERTY;
	final PropertyNode currentNode = _currentNode;
	if (currentNode != null)
	{
		currentNode.removeProperty (currentNodeName);
		if (doLog)
		{
			log (_LOG_TAG, Log.VERBOSE, "last node: '" + currentNode + "'");
		}
	}
	if (pNewNode != _setupNode)
	{
		pNewNode.addProperty (currentNodeName);
		if (doLog)
		{
			log (_LOG_TAG, Log.VERBOSE, "current node: '" + pNewNode + "'");
		}
	}
	return _currentNode = pNewNode;
}

void restartGame ()
{
	final PropertyNode setupNode = _setupNode;
	if (setupNode == null)
	{
		return;
	}
	setCurrentNode (setupNode);
	Gtp.gtpCommand (Gtp.GtpCommand.UNDO, Integer.toString (_moveNumber));
	_playerBlackMoves = _handicap == 0;
	setupPlayerBlackMoves ();
	_moveNumber = 0;
	_redoPoints = null;
	_aiDelaySeconds = 0;
}

List <Point> getPreviousMoves (
	boolean pPlayerBlackColor,
	int pNumMoves
	)
{
	final List <Point> moves = Generics.newArrayList (pNumMoves);
	PropertyNode node = _currentNode;
	if (node == null)
	{
		return moves;
	}
	for (; true; node = node.previousPropertyNode ())
	{
		if (node == null)
		{
			break;
		}
		final Point point = getMoveValue (pPlayerBlackColor, node);
		if (point == null)
		{
			continue;
		}
		moves.add (point);
		pPlayerBlackColor = !pPlayerBlackColor;
		if (pNumMoves == 1)
		{
			break;
		}
		pNumMoves--;
	}
	return moves;
}

List <Point> getRedoPoints ()
{
	if (_redoPoints == null)
	{
		return null;
	}
	final List <Point> redoPoints = _redoPoints,
		newRedoPoints = Generics.newArrayList (redoPoints.size ());
	for (final Point redoPoint : redoPoints)
	{
		newRedoPoints.add (
			redoPoint instanceof Passed ? redoPoint : new Point (redoPoint));
	}
	return newRedoPoints;
}

List <Point> undo ()
{
	PropertyNode node = _currentNode;
	if (node == null)
	{
		return null;
	}
	node = node.previousPropertyNode ();
	if (node == null)
	{
		return null;
	}
	List <Point> undoPoints = Generics.newArrayList (1);
	final boolean blackMoves = _playerBlackMoves;
	if (_moveNumber > 1)
	{
		node = previousMove (node, blackMoves, undoPoints);
		if (node == null)
		{
			return null;
		}
	}
	setCurrentNode (node);
	_moveNumber--;
	_playerBlackMoves = !blackMoves;
	return undoPoints;
}

PropertyNode previousMove (
	PropertyNode pNode,
	final boolean pBlack,
	final List <Point> pPoints
	)
{
	while (true)
	{
		if (pNode == null)
		{
			return null;
		}
		final Point move = getMoveValue (pBlack, pNode);
		if (move != null)
		{
			pPoints.add (move);
			return pNode;
		}
		if (getMoveValue (!pBlack, pNode) != null)
		{
			return null;
		}
		pNode = pNode.previousPropertyNode ();
	}
}

boolean bothPlayersPassed ()
{
	if (_moveNumber < 2)
	{
		return false;
	}
	PropertyNode node = _currentNode;
	if (node == null)
	{
		return false;
	}
	final boolean playerBlack = !_playerBlackMoves;
	final Point point1 = getMoveValue (playerBlack, node);
	if (point1 == null)
	{
		return false;
	}
	final Point point2 = getMoveValue (!playerBlack,
		node.previousPropertyNode ());
	return point2 != null
		&& point1 instanceof Passed && point2 instanceof Passed;
}

Point getRecentMoveValue ()
{
	final PropertyNode currentNode = _currentNode;
	return currentNode == null || currentNode == _setupNode ? null
		: getMoveValue (!_playerBlackMoves, currentNode);
}

Point getMoveValue (
	final boolean pBlack,
	final PropertyNode pNode
	)
{
	if (pNode == null)
	{
		return null;
	}
	final PropertyName moveName = getMoveName (pBlack);
	final String value = pNode.getPropertyValue (moveName);
	if (value == null)
	{
		return null;
	}
	return fromMovePropertyValue (moveName, value, new Point ());
}

static
PropertyName getMoveName (
	final boolean pBlackMove
	)
{
	return pBlackMove ? PropertyName.BlackMove : PropertyName.WhiteMove;
}

boolean canRedo (
	final int pNumRedos,
	final PropertyNode pNode,
	final boolean pBlackMoves
	)
{
	if (pNode == null)
	{
		return false;
	}
	if (pNumRedos == 0)
	{
		return false;
	}
	final List <PropertyNode> nodes = pNode.nextPropertyNodes ();
	if (nodes == null)
	{
		return false;
	}
	for (final PropertyNode node : nodes)
	{
		final String value = node.getPropertyValue (getMoveName (pBlackMoves));
		boolean canRedo;
		if (value == null)
		{
			canRedo = canRedo (pNumRedos, node, pBlackMoves);
			if (canRedo)
			{
				return true;
			}
		}
		if (pNumRedos == 1)
		{
			return true;
		}
		canRedo = canRedo (pNumRedos -1, node, !pBlackMoves);
		if (canRedo)
		{
			return true;
		}
	}
	return false;
}

boolean canRedo (
	final int pNumRedos
	)
{
	return canRedo (pNumRedos, _currentNode, _playerBlackMoves);
}

private
void redo (
	final PropertyNode pNode,
	final List <PropertyNode> pNodes,
	final List <Point> pRedoPoints,
	final boolean pPlayerBlack
	)
{
	if (pNode == null)
	{
		return;
	}
	final List <PropertyNode> nodes = pNode.nextPropertyNodes ();
	if (nodes == null || nodes.size () == 0)
	{
		return;
	}
	for (final PropertyNode node : nodes)
	{
		final Point point = getMoveValue (pPlayerBlack, node);
		if (point != null)
		{
			pRedoPoints.add (point);
			pNodes.add (node);
		}
		else if (getMoveValue (!pPlayerBlack, node) == null)
		{
			redo (node, pNodes, pRedoPoints, pPlayerBlack);
		}
	}
}

List <Point> redo ()
{
	final List <Point> redoPoints = Generics.newArrayList (1);
	final List <PropertyNode> nodes = Generics.newArrayList (1);
	final boolean playerBlackMoves = _playerBlackMoves;
	redo (_currentNode, nodes, redoPoints, playerBlackMoves);
	if (nodes.size () == 1)
	{
		setCurrentNode (nodes.get (0));
		_moveNumber++;
		_playerBlackMoves = !playerBlackMoves;
	}
	return redoPoints;
}

static
long[] toLongArray (
	final List <Long> pLongList
	)
{
	final long[] longArray = new long[pLongList.size ()];
	int idx = 0;
	for (final Long val : pLongList)
	{
		longArray [idx++] = val;
	}
	return longArray;
}

PropertyNode getSetupNode (
	final File pFile,
	final int pCollectionIdx
	)
	throws Exception
{
	long[] collectionOffsets = _collectionOffsets;
	if (collectionOffsets == null)
	{
		List <Long> collectionOffsetsList = Generics.newArrayList (1),
			collectionNumCharsList = Generics.newArrayList (1);
		List <String> namesList = Generics.newArrayList (1);
		boolean isCollection = _isCollection =
			Node.readCollectionIndices (
				new BufferedReader (new FileReader (pFile)),
				collectionOffsetsList, collectionNumCharsList, namesList);
		collectionOffsets = _collectionOffsets =
			toLongArray (collectionOffsetsList);
		//noinspection UnusedAssignment
		collectionOffsetsList = null;
		_collectionNumChars = toLongArray (collectionNumCharsList);
		//noinspection UnusedAssignment
		collectionNumCharsList = null;
		if (isCollection)
		{
			_collectionNames =
				namesList.toArray (new String[namesList.size ()]);
		}
		//noinspection UnusedAssignment
		namesList = null;
	}
	if (pCollectionIdx < 0 || pCollectionIdx >= collectionOffsets.length)
	{
		throw new Exception ("loadGame: collection idx out of bounds");
	}
	final Node collection = new Node (
		new BufferedReader (new FileReader (pFile)), /*_SGF_LOGGER,*/ null,
		collectionOffsets[pCollectionIdx], _collectionNumChars[pCollectionIdx]);
	final List <Node> games = collection._children;
	if (games == null || games.size () != 1)
	{
		throw new Exception ("loadGame: no game found");
	}
	final List <PropertyNode> setupNodesList =
		games.get (0).nextPropertyNodes ();
	if (setupNodesList == null || setupNodesList.size () !=1)
	{
		throw new Exception ("loadGame: no setup nodes found");
	}
	final PropertyNode setupNode = setupNodesList.get (0);
	if (setupNode == null)
	{
		throw new Exception ("loadGame: no setup node found");
	}
	return setupNode;
}

LoadGameStatus loadGame (
	final File pFile,
	int pCollectionIdx
	)
{
	try
	{
		PropertyNode setupNode = null;
		if (pCollectionIdx == _DEFAULT_GAME_COLLECTION_IDX)
		{
			pCollectionIdx = 0;
			setupNode = getSetupNode (pFile, pCollectionIdx);
			if (_isCollection)
			{
				return LoadGameStatus.SHOW_COLLECTION_LIST;
			}
		}
		_collectionIdx = pCollectionIdx;
		if (setupNode == null)
		{
			setupNode = getSetupNode (pFile, pCollectionIdx);
		}
		if (setupNode == null)
		{
			return LoadGameStatus.FAIL;
		}
		_currentNode = _setupNode =
			(_gameNode = new Node (null)).addChildNode (setupNode);
		if (_isCollection)
		{
			_playerBlackHuman = _playerWhiteHuman = true;
		}
		final Integer size = fromNumberPropertyValue (PropertyName.Size,
			setupNode.getPropertyValue (PropertyName.Size));
		if (size != null
			&& size > 0 && size <= Gtp._POSITION_LETTERS_CHARS.length)
		{
			_boardSize = size;
			Gtp.gtpCommand (
				Gtp.GtpCommand.SET_BOARDSIZE, String.valueOf (size));
			Gtp.storeMarkers ();
		}
		final Integer handicap = fromNumberPropertyValue (PropertyName.Handicap,
			setupNode.getPropertyValue (PropertyName.Handicap));
		if (handicap != null && handicap > 0)
		{
			_handicap = handicap;
			Gtp.gtpCommand (Gtp.GtpCommand.SET_HANDICAP,
				String.valueOf (handicap));
			_playerBlackMoves = false;
		}
		else
		{
			_handicap = 0;
		}
		/*
		final Float komi = fromRealPropertyValue (PropertyName.Komi,
			setupNode.getPropertyValue (PropertyName.Komi));
		if (komi != null && komi > 0)
		{
			_komi = String.valueOf (komi);
			Gtp.gtpCommand (Gtp.GtpCommand.SET_KOMI, _komi);
		}
		final String rules = setupNode.getPropertyValue (PropertyName.Rules);
		if (rules != null)
		{
			final Rules rule = _rulesMap.get (rules.trim ());
			if (rule != null)
			{
				switch (rule)
				{
				case Chinese:
					_chineseRules = true;
					break;
				case Japanese:
					_chineseRules = false;
					break;
				}
			}
		}
		*/
		final Boolean playerBlack = setupPlayerBlackMoves ();
		setupStones (true, setupNode);
		setupStones (false, setupNode);

		final String recentMoveName = _RECENT_MOVE_NAME;
		PropertyNode recentNode = setupNode;
		while (true)
		{
			recentNode = recentNode.nextPropertyNode ();
			if (recentNode == null)
			{
				return LoadGameStatus.SUCCESS;
			}
			if (recentMoveName.equals (
				recentNode.getPropertyValue (PropertyName.RecentMove)))
			{
				break;
			}
		}
		boolean blackMoves = false;
		if (recentNode.getPropertyValue (getMoveName (true)) == null)
		{
			if (recentNode.getPropertyValue (getMoveName (false)) == null)
			{
				return LoadGameStatus.SUCCESS;
			}
			blackMoves = true;
		}
		PropertyNode currentNode = recentNode;
		final List <Point> moves = Generics.newArrayList ();
		//noinspection StatementWithEmptyBody
		while ((currentNode = previousMove (
			currentNode, blackMoves = !blackMoves, moves).
				previousPropertyNode ())
					!= null && currentNode != setupNode);
		if (currentNode == null || blackMoves != playerBlack)
		{
			return LoadGameStatus.SUCCESS;
		}
		Collections.reverse (moves);
		final int boardSize = _boardSize;
		for (final Point point : moves)
		{
			Gtp.playMove (false, blackMoves, point, boardSize, _allowResignation);
			blackMoves = !blackMoves;
			_moveNumber++;
		}
		_playerBlackMoves = blackMoves;
		_currentNode = recentNode;
		return LoadGameStatus.SUCCESS;
	}
	catch (final Exception e)
	{
		if (isEnabledFor (_LOG_TAG, Log.ERROR))
		{
			log (_LOG_TAG, Log.ERROR, "loading game failed: '" + e + "'");
		}
		return LoadGameStatus.FAIL;
	}
}

boolean setupPlayerBlackMoves ()
{
	if (_setupNode == null)
	{
		return _playerBlackMoves;
	}
	final Boolean playerBlack = fromBlackPropertyValue (PropertyName.Player,
		_setupNode.getPropertyValue (PropertyName.Player));
	if (playerBlack != null)
	{
		_playerBlackMoves = playerBlack;
	}
	return _playerBlackMoves;
}

boolean saveGame (
	final File pFile
	)
{
	if (_gameNode == null || _setupNode == null)
	{
		return false;
	}
	_setupNode.
		addProperty (PropertyName.Date.newProperty (
			DateFormat.format ("yyyy-MM-dd",
				new GregorianCalendar ()).toString ())).
		addProperty (PropertyName.GameName.newProperty (pFile.getName ()));
	Writer writer = null;
	try
	{
		_gameNode.writeNode (
			writer = new BufferedWriter (new FileWriter (pFile)));
	}
	catch (final Exception e)
	{
		if (isEnabledFor (_LOG_TAG, Log.ERROR))
		{
			log (_LOG_TAG, Log.ERROR, "saving game failed: '" + e + "'");
		}
		return false;
	}
	finally
	{
		if (writer != null)
		{
			try
			{
				writer.close ();
			}
			catch (final Exception ignored) {}
		}
	}
	return true;
}

void setupStones (
	final boolean pBlack,
	final PropertyNode pNode
	)
{
	final PropertyName propertyName = pBlack ?
		PropertyName.AddBlack : PropertyName.AddWhite;
	final List <String> moves = pNode.getPropertyValues (propertyName);
	if (moves == null)
	{
		return;
	}
	final int boardSize = _boardSize;
	for (final String move : moves)
	{
		final Point point =
			fromMovePropertyValue (propertyName, move, new Point ());
		if (point != null)
		{
			Gtp.playMove (false, pBlack, point, boardSize, true);
		}
	}
}

PropertyName.Property toPropertyValue (
	final PropertyName pProperty,
	String pValue
	)
{
	try
	{
		switch (pProperty.getType ())
		{
		case Real:
			pValue = String.valueOf (Float.parseFloat (pValue));
			break;
		}
	}
	catch (final Exception e)
	{
		pValue = "0";
	}
	return pProperty.newProperty (pValue);
}

PropertyName.Property toPropertyValue (
	final PropertyName pProperty,
	final Point pValue
	)
{
	final char[] posLetters = PropertyName._POSITION_LETTERS_CHAR_ARR;
	String value = "";
	switch (pProperty.getType ())
	{
	case StoneList:
	case Move:
		value = pValue == null || pValue instanceof Passed ? ""
			: posLetters [pValue.x] + "" + posLetters [pValue.y];
		break;
	}
	return pProperty.newProperty (value);
}

PropertyName.Property toPropertyValue (
	final PropertyName pProperty,
	final int pValue
	)
{
	String value = "";
	switch (pProperty.getType ())
	{
	case Number:
	case NumberOrComposedNumberColonNumber:
		value = String.valueOf (pValue);
		break;
	}
	return pProperty.newProperty (value);
}

PropertyName.Property toPropertyValue (
	final PropertyName pProperty,
	final boolean pValue
	)
{
	String value = "";
	switch (pProperty)
	{
	case Rules:
		value = pValue ? Rules.Chinese._sgfPropertyName
			: Rules.Japanese._sgfPropertyName;
		break;
	case Player:
		value = pValue ? PropertyName._COLOR_BLACK : PropertyName._COLOR_WHITE;
		break;
	}
	return pProperty.newProperty (value);
}

Point fromMovePropertyValue (
	final PropertyName pProperty,
	String pValue,
	final Point pPoint
	)
{
	final String posLetters = PropertyName._POSITION_LETTERS;
	switch (pProperty.getType ())
	{
	case Move:
	case StoneList:
	case PointList:
		if (pValue == null || (pValue = pValue.trim ()).length () == 0)
		{
			return Passed._Passed;
		}
		if (pValue.length () != 2)
		{
			return null;
		}
		final int x = posLetters.indexOf (pValue.charAt (0)),
			y = posLetters.indexOf (pValue.charAt (1)),
			boardsizePlus1 = _boardSize + 1;
		if (x > boardsizePlus1 || y > boardsizePlus1)
		{
			return null;
		}
		if (x == boardsizePlus1 && y == boardsizePlus1)
		{
			return Passed._Passed;
		}
		pPoint.x = x;
		pPoint.y = y;
		break;
	}
	return pPoint;
}

Integer fromNumberPropertyValue (
	final PropertyName pProperty,
	final String pValue
	)
{
	if (pValue == null)
	{
		return null;
	}
	switch (pProperty.getType ())
	{
	case Number:
	case NumberOrComposedNumberColonNumber:
		return Integer.parseInt (pValue);
	}
	return null;
}

Float fromRealPropertyValue (
	final PropertyName pProperty,
	final String pValue
	)
{
	if (pValue == null)
	{
		return null;
	}
	switch (pProperty.getType ())
	{
	case Real:
		return Float.parseFloat (pValue);
	}
	return null;
}

Boolean fromBlackPropertyValue (
	final PropertyName pProperty,
	String pValue
	)
{
	if (pValue == null)
	{
		return null;
	}
	pValue = pValue.trim ();
	switch (pProperty.getType ())
	{
	case Color:
		return PropertyName._COLOR_BLACK.equals (pValue) ?
			Boolean.TRUE : (PropertyName._COLOR_WHITE.equals (pValue) ?
				Boolean.FALSE : null);
	}
	return null;
}
}