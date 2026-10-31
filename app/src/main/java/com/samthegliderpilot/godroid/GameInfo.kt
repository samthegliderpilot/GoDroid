package com.samthegliderpilot.godroid

import android.content.ContentResolver
import android.graphics.Point
import android.net.Uri
import android.text.format.DateFormat
import android.util.Log
import com.samthegliderpilot.godroid.MainActivity._LOG_TAG
import com.samthegliderpilot.godroid.sgf.Node
import com.samthegliderpilot.godroid.sgf.Node.PropertyNode
import com.samthegliderpilot.godroid.sgf.PropertyName
import com.samthegliderpilot.godroid.sgf._Logger
import com.samthegliderpilot.util.Generics
import com.samthegliderpilot.util.Logging
import com.samthegliderpilot.util.Logging.isEnabledFor
import com.samthegliderpilot.util.Logging.log
import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStream
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.io.Reader
import java.io.Writer
import java.util.Collections
import java.util.GregorianCalendar

class GameInfo {

    class Passed : Point() {
        companion object {
            @JvmField
            val _Passed = Passed()
        }
    }

    enum class Rules(val _sgfPropertyName: String) {
        Japanese(PropertyName._JAPANESE_RULES_PROPERTY_VALUE),
        Chinese(_CHINESE_RULES_PROPERTY_VALUE),
    }

    enum class LoadGameStatus {
        SUCCESS, FAIL, SHOW_COLLECTION_LIST,
    }

    @JvmField var _boardSize: Int = _DEFAULT_BOARD_SIZE
    @JvmField var _level: Int = _DEFAULT_LEVEL
    @JvmField var _handicap: Int = _DEFAULT_HANDICAP
    @JvmField var _aiDelaySeconds: Int = _DEFAULT_AI_DELAY

    @JvmField var _komi: String = _DEFAULT_KOMI

    @JvmField var _chineseRules: Boolean = _DEFAULT_CHINESE_RULES

    @JvmField var _playerBlackHuman: Boolean = _DEFAULT_BLACK_HUMAN
    @JvmField var _playerWhiteHuman: Boolean = _DEFAULT_WHITE_HUMAN
    @JvmField var _playerBlackMoves: Boolean = _DEFAULT_BLACK_MOVES
    @JvmField var _allowResignation: Boolean = _DEFAULT_ALLOW_RESIGNATION

    @JvmField var _gameNode: Node? = null

    @JvmField var _setupNode: PropertyNode? = null
    @JvmField var _currentNode: PropertyNode? = null

    // Holds a Uri.toString() -- either a content:// Uri from the save/load
    // document picker, or a file:// Uri wrapping an internal path (autosave,
    // or a game shared in via an external .sgf open intent).
    @JvmField var _sgfFileName: String? = null

    // Human-readable name for the SGF GameName property -- content:// Uris are
    // often opaque provider paths, so this is tracked separately rather than
    // derived from _sgfFileName.
    @JvmField var _sgfDisplayName: String? = null

    // What to call the file in messages shown to the user. _sgfFileName is a
    // percent-encoded Uri string, so show the decoded path when the provider
    // exposes a readable one (the device's own storage), else the display name,
    // and only then the raw Uri string.
    fun getFileNameForMessages(): String? {
        val sgfFileName = _sgfFileName
        if (sgfFileName != null) {
            val uri = Uri.parse(sgfFileName)
            val path = uri.path
            if ("com.android.externalstorage.documents" == uri.authority &&
                path != null && path.startsWith("/document/")
            ) {
                // Document ids look like "primary:Documents/game.sgf" for the
                // internal storage, or "1234-ABCD:Documents/game.sgf" for an SD card.
                val documentId = path.substring("/document/".length)
                return if (documentId.startsWith("primary:"))
                    "/" + documentId.substring("primary:".length)
                else
                    documentId
            }
        }
        return if (_sgfDisplayName != null) _sgfDisplayName else _sgfFileName
    }

    @JvmField var _isCollection: Boolean = false

    @JvmField var _collectionOffsets: LongArray? = null
    @JvmField var _collectionNumChars: LongArray? = null

    @JvmField var _collectionNames: Array<String>? = null

    @JvmField var _collectionIdx: Int = _DEFAULT_GAME_COLLECTION_IDX

    @JvmField var _moveNumber: Int = 0

    @JvmField var _redoPoints: MutableList<Point>? = null

    @JvmField var _invalid: Boolean = false

    fun copy(pGameInfo: GameInfo): GameInfo {
        _playerBlackMoves = pGameInfo._playerBlackMoves
        _gameNode = pGameInfo._gameNode
        _setupNode = pGameInfo._setupNode
        _currentNode = pGameInfo._currentNode
        _moveNumber = pGameInfo._moveNumber
        _collectionIdx = pGameInfo._collectionIdx
        return copyCollection(pGameInfo)
    }

    fun copyCollection(pGameInfo: GameInfo): GameInfo {
        _isCollection = pGameInfo._isCollection
        _collectionOffsets = pGameInfo._collectionOffsets
        _collectionNumChars = pGameInfo._collectionNumChars
        _collectionNames = pGameInfo._collectionNames
        _sgfFileName = pGameInfo._sgfFileName
        _sgfDisplayName = pGameInfo._sgfDisplayName
        return this
    }

    fun initSGF(appName: String, appVersion: String) {
        val gameNode = Node(null)
        _gameNode = gameNode
        val node = PropertyNode(
            gameNode,
            PropertyName.Application.newProperty("$appName:$appVersion")
        )
            .addProperty(PropertyName.FileFormat.newProperty(PropertyName._SGF_FILE_FORMAT4))
            .addProperty(PropertyName.GameType.newProperty(PropertyName._GO_GAME_NUMBER))
            .addProperty(toPropertyValue(PropertyName.Size, _boardSize))
            .addProperty(toPropertyValue(PropertyName.Komi, _komi))
            .addProperty(toPropertyValue(PropertyName.Player, _playerBlackMoves))
        _setupNode = node
        _currentNode = node
        node.addProperty(toPropertyValue(PropertyName.Rules, _chineseRules))
        if (_handicap > 0) {
            val handicapStones = Gtp.getStones(true, this)
            if (handicapStones != null && handicapStones.isNotEmpty()) {
                node.addProperty(toPropertyValue(PropertyName.Handicap, _handicap))
                for (point in handicapStones) {
                    node.addProperty(toPropertyValue(PropertyName.AddBlack, point))
                }
            }
        }
    }

    fun addMove(pMove: Point) {
        val currentNode = _currentNode
        if (currentNode == null || currentNode === _gameNode) {
            return
        }
        try {
            setCurrentNode(
                currentNode.addPropertyNode(
                    toPropertyValue(getMoveName(_playerBlackMoves), pMove)
                )
            )
        } catch (e: Exception) {
            return
        }
        _moveNumber++
    }

    fun setCurrentNode(pNewNode: PropertyNode?): PropertyNode? {
        if (pNewNode == null) {
            return null
        }
        val doLog = isEnabledFor(_LOG_TAG, Log.VERBOSE)
        val currentNodeName = _RECENT_MOVE_PROPERTY
        val currentNode = _currentNode
        if (currentNode != null) {
            currentNode.removeProperty(currentNodeName)
            if (doLog) {
                log(_LOG_TAG, Log.VERBOSE, "last node: '$currentNode'")
            }
        }
        if (pNewNode !== _setupNode) {
            pNewNode.addProperty(currentNodeName)
            if (doLog) {
                log(_LOG_TAG, Log.VERBOSE, "current node: '$pNewNode'")
            }
        }
        _currentNode = pNewNode
        return pNewNode
    }

    /** Writes both colors' current clock totals onto the most recent move node (or
     * the setup node, if called before any move) - SGF's standard per-move
     * time-bookkeeping properties (`BL`/`WL`), reused here to record elapsed *used*
     * time rather than time *left* under a limit, since this app enforces no limit.
     * Called from the clock's own ticker ([GameClock]), not from `Gtp.java`'s
     * move-commit flow, so adding this never touches the orchestration code in
     * `Gtp.java`'s `PLAY_MOVE`/`UNDO_MOVE`/`NEW_GAME` (deliberately left alone - see
     * the roadmap). */
    fun recordElapsedTime(pBlackSeconds: Float, pWhiteSeconds: Float) {
        val node = _currentNode ?: return
        node.addProperty(toPropertyValue(PropertyName.BackTimeLeft, pBlackSeconds.toString()))
        node.addProperty(toPropertyValue(PropertyName.WhiteTimeLeft, pWhiteSeconds.toString()))
    }

    /** Walks backward from the current node (same direction [undo]/[getPreviousMoves]
     * already walk) to the most recent node carrying a recorded clock total, so
     * resuming a game (app relaunch, or an Activity recreation from rotation - this
     * app has no `configChanges`) can restore both players' elapsed time instead of
     * silently resetting it to zero. Returns null for a fresh game with nothing
     * recorded yet. */
    fun lastRecordedElapsedTime(): FloatArray? {
        var node = _currentNode
        while (node != null) {
            val blackValue = node.getPropertyValue(PropertyName.BackTimeLeft)
            val whiteValue = node.getPropertyValue(PropertyName.WhiteTimeLeft)
            if (blackValue != null && whiteValue != null) {
                return floatArrayOf(
                    blackValue.toFloatOrNull() ?: 0f,
                    whiteValue.toFloatOrNull() ?: 0f
                )
            }
            node = node.previousPropertyNode()
        }
        return null
    }

    fun restartGame() {
        val setupNode = _setupNode ?: return
        setCurrentNode(setupNode)
        Gtp.gtpCommand(Gtp.GtpCommand.UNDO, _moveNumber.toString())
        _playerBlackMoves = _handicap == 0
        setupPlayerBlackMoves()
        _moveNumber = 0
        _redoPoints = null
        _aiDelaySeconds = 0
    }

    fun getPreviousMoves(pPlayerBlackColor: Boolean, pNumMoves: Int): MutableList<Point> {
        var blackColor = pPlayerBlackColor
        var numMoves = pNumMoves
        val moves = Generics.newArrayList<Point>(numMoves)
        var node = _currentNode
        if (node == null) {
            return moves
        }
        while (true) {
            if (node == null) {
                break
            }
            val point = getMoveValue(blackColor, node)
            if (point == null) {
                node = node.previousPropertyNode()
                continue
            }
            moves.add(point)
            blackColor = !blackColor
            if (numMoves == 1) {
                break
            }
            numMoves--
            node = node.previousPropertyNode()
        }
        return moves
    }

    fun getRedoPoints(): MutableList<Point>? = _redoPoints?.let { redoPoints ->
        redoPoints.mapTo(Generics.newArrayList(redoPoints.size)) { point ->
            if (point is Passed) point else Point(point)
        }
    }

    fun undo(): MutableList<Point>? {
        var node = _currentNode ?: return null
        node = node.previousPropertyNode() ?: return null
        val undoPoints = Generics.newArrayList<Point>(1)
        val blackMoves = _playerBlackMoves
        if (_moveNumber > 1) {
            node = previousMove(node, blackMoves, undoPoints) ?: return null
        }
        setCurrentNode(node)
        _moveNumber--
        _playerBlackMoves = !blackMoves
        return undoPoints
    }

    fun previousMove(
        pNodeArg: PropertyNode?,
        pBlack: Boolean,
        pPoints: MutableList<Point>
    ): PropertyNode? {
        var pNode = pNodeArg
        while (true) {
            if (pNode == null) {
                return null
            }
            val move = getMoveValue(pBlack, pNode)
            if (move != null) {
                pPoints.add(move)
                return pNode
            }
            if (getMoveValue(!pBlack, pNode) != null) {
                return null
            }
            pNode = pNode.previousPropertyNode()
        }
    }

    fun bothPlayersPassed(): Boolean {
        if (_moveNumber < 2) {
            return false
        }
        val node = _currentNode ?: return false
        val playerBlack = !_playerBlackMoves
        val point1 = getMoveValue(playerBlack, node) ?: return false
        val point2 = getMoveValue(!playerBlack, node.previousPropertyNode())
        return point2 != null && point1 is Passed && point2 is Passed
    }

    fun getRecentMoveValue(): Point? {
        val currentNode = _currentNode
        return if (currentNode == null || currentNode === _setupNode) null
        else getMoveValue(!_playerBlackMoves, currentNode)
    }

    fun getMoveValue(pBlack: Boolean, pNode: PropertyNode?): Point? {
        if (pNode == null) {
            return null
        }
        val moveName = getMoveName(pBlack)
        val value = pNode.getPropertyValue(moveName) ?: return null
        return fromMovePropertyValue(moveName, value, Point())
    }

    fun canRedo(pNumRedos: Int, pNode: PropertyNode?, pBlackMoves: Boolean): Boolean {
        if (pNode == null) {
            return false
        }
        if (pNumRedos == 0) {
            return false
        }
        val nodes = pNode.nextPropertyNodes()
        for (node in nodes) {
            val value = node.getPropertyValue(getMoveName(pBlackMoves))
            if (value == null) {
                if (canRedo(pNumRedos, node, pBlackMoves)) {
                    return true
                }
            }
            if (pNumRedos == 1) {
                return true
            }
            if (canRedo(pNumRedos - 1, node, !pBlackMoves)) {
                return true
            }
        }
        return false
    }

    fun canRedo(pNumRedos: Int): Boolean = canRedo(pNumRedos, _currentNode, _playerBlackMoves)

    private fun redo(
        pNode: PropertyNode?,
        pNodes: MutableList<PropertyNode>,
        pRedoPoints: MutableList<Point>,
        pPlayerBlack: Boolean
    ) {
        if (pNode == null) {
            return
        }
        val nodes = pNode.nextPropertyNodes()
        if (nodes.isEmpty()) {
            return
        }
        for (node in nodes) {
            val point = getMoveValue(pPlayerBlack, node)
            if (point != null) {
                pRedoPoints.add(point)
                pNodes.add(node)
            } else if (getMoveValue(!pPlayerBlack, node) == null) {
                redo(node, pNodes, pRedoPoints, pPlayerBlack)
            }
        }
    }

    fun redo(): MutableList<Point> {
        val redoPoints = Generics.newArrayList<Point>(1)
        val nodes = Generics.newArrayList<PropertyNode>(1)
        val playerBlackMoves = _playerBlackMoves
        redo(_currentNode, nodes, redoPoints, playerBlackMoves)
        if (nodes.size == 1) {
            setCurrentNode(nodes[0])
            _moveNumber++
            _playerBlackMoves = !playerBlackMoves
        }
        return redoPoints
    }

    fun getSetupNode(pUri: Uri, pCollectionIdx: Int, pContentResolver: ContentResolver): PropertyNode {
        var collectionOffsets = _collectionOffsets
        if (collectionOffsets == null) {
            val collectionOffsetsList = Generics.newArrayList<Long>(1)
            val collectionNumCharsList = Generics.newArrayList<Long>(1)
            val namesList = Generics.newArrayList<String>(1)
            val isCollection = Node.readCollectionIndices(
                BufferedReader(InputStreamReader(openInput(pUri, pContentResolver))),
                collectionOffsetsList, collectionNumCharsList, namesList
            )
            _isCollection = isCollection
            collectionOffsets = toLongArray(collectionOffsetsList)
            _collectionOffsets = collectionOffsets
            _collectionNumChars = toLongArray(collectionNumCharsList)
            if (isCollection) {
                _collectionNames = namesList.toTypedArray()
            }
        }
        if (pCollectionIdx < 0 || pCollectionIdx >= collectionOffsets.size) {
            throw Exception("loadGame: collection idx out of bounds")
        }
        val collection = Node(
            BufferedReader(InputStreamReader(openInput(pUri, pContentResolver))),
            null,
            collectionOffsets[pCollectionIdx], _collectionNumChars!![pCollectionIdx]
        )
        val games = collection._children
        if (games == null || games.size != 1) {
            throw Exception("loadGame: no game found")
        }
        val setupNodesList = games[0].nextPropertyNodes()
        if (setupNodesList.size != 1) {
            throw Exception("loadGame: no setup nodes found")
        }
        return setupNodesList[0]
    }

    fun loadGame(pUri: Uri, pCollectionIdxArg: Int, pContentResolver: ContentResolver): LoadGameStatus {
        var pCollectionIdx = pCollectionIdxArg
        try {
            var setupNode: PropertyNode? = null
            if (pCollectionIdx == _DEFAULT_GAME_COLLECTION_IDX) {
                pCollectionIdx = 0
                setupNode = getSetupNode(pUri, pCollectionIdx, pContentResolver)
                if (_isCollection) {
                    return LoadGameStatus.SHOW_COLLECTION_LIST
                }
            }
            _collectionIdx = pCollectionIdx
            if (setupNode == null) {
                setupNode = getSetupNode(pUri, pCollectionIdx, pContentResolver)
            }
            val nonNullSetupNode = setupNode ?: return LoadGameStatus.FAIL
            val gameNode = Node(null)
            _gameNode = gameNode
            val rootSetupNode = gameNode.addChildNode(nonNullSetupNode)
            _setupNode = rootSetupNode
            _currentNode = rootSetupNode
            if (_isCollection) {
                _playerBlackHuman = true
                _playerWhiteHuman = true
            }
            val size = fromNumberPropertyValue(
                PropertyName.Size, rootSetupNode.getPropertyValue(PropertyName.Size)
            )
            if (size != null && size > 0 && size <= Gtp._POSITION_LETTERS_CHARS.size) {
                _boardSize = size
                Gtp.gtpCommand(Gtp.GtpCommand.SET_BOARDSIZE, size.toString())
                Gtp.storeMarkers()
            }
            val handicap = fromNumberPropertyValue(
                PropertyName.Handicap, rootSetupNode.getPropertyValue(PropertyName.Handicap)
            )
            if (handicap != null && handicap > 0) {
                _handicap = handicap
                Gtp.gtpCommand(Gtp.GtpCommand.SET_HANDICAP, handicap.toString())
                _playerBlackMoves = false
            } else {
                _handicap = 0
            }
            /*
            val komi = fromRealPropertyValue(PropertyName.Komi, rootSetupNode.getPropertyValue(PropertyName.Komi))
            if (komi != null && komi > 0) {
                _komi = komi.toString()
                Gtp.gtpCommand(Gtp.GtpCommand.SET_KOMI, _komi)
            }
            val rules = rootSetupNode.getPropertyValue(PropertyName.Rules)
            if (rules != null) {
                val rule = _rulesMap[rules.trim()]
                if (rule != null) {
                    when (rule) {
                        Rules.Chinese -> _chineseRules = true
                        Rules.Japanese -> _chineseRules = false
                    }
                }
            }
            */
            val playerBlack = setupPlayerBlackMoves()
            setupStones(true, rootSetupNode)
            setupStones(false, rootSetupNode)

            val recentMoveName = _RECENT_MOVE_NAME
            var recentNode: PropertyNode = rootSetupNode
            while (true) {
                recentNode = recentNode.nextPropertyNode() ?: return LoadGameStatus.SUCCESS
                if (recentMoveName == recentNode.getPropertyValue(PropertyName.RecentMove)) {
                    break
                }
            }
            var blackMoves = false
            if (recentNode.getPropertyValue(getMoveName(true)) == null) {
                if (recentNode.getPropertyValue(getMoveName(false)) == null) {
                    return LoadGameStatus.SUCCESS
                }
                blackMoves = true
            }
            var currentNode: PropertyNode? = recentNode
            val moves = Generics.newArrayList<Point>()
            while (true) {
                blackMoves = !blackMoves
                val prevMove = previousMove(currentNode, blackMoves, moves)
                if (prevMove == null) {
                    break
                }
                currentNode = prevMove.previousPropertyNode()
                if (currentNode == null) {
                    break
                }
                if (currentNode === rootSetupNode) {
                    break
                }
            }
            if (currentNode == null || blackMoves != playerBlack) {
                return LoadGameStatus.SUCCESS
            }
            Collections.reverse(moves)
            val boardSize = _boardSize
            for (point in moves) {
                Gtp.playMove(false, blackMoves, point, boardSize)
                blackMoves = !blackMoves
                _moveNumber++
            }
            _playerBlackMoves = blackMoves
            _currentNode = recentNode
            return LoadGameStatus.SUCCESS
        } catch (e: Exception) {
            if (isEnabledFor(_LOG_TAG, Log.ERROR)) {
                log(_LOG_TAG, Log.ERROR, "loading game failed: '$e'")
            }
            return LoadGameStatus.FAIL
        }
    }

    fun setupPlayerBlackMoves(): Boolean {
        val setupNode = _setupNode ?: return _playerBlackMoves
        val playerBlack = fromBlackPropertyValue(
            PropertyName.Player, setupNode.getPropertyValue(PropertyName.Player)
        )
        if (playerBlack != null) {
            _playerBlackMoves = playerBlack
        }
        return _playerBlackMoves
    }

    fun saveGame(pUri: Uri, pDisplayName: String, pContentResolver: ContentResolver): Boolean {
        val gameNode = _gameNode
        val setupNode = _setupNode
        if (gameNode == null || setupNode == null) {
            return false
        }
        setupNode
            .addProperty(
                PropertyName.Date.newProperty(
                    DateFormat.format("yyyy-MM-dd", GregorianCalendar()).toString()
                )
            )
            .addProperty(PropertyName.GameName.newProperty(pDisplayName))
        var writer: Writer? = null
        try {
            val out = pContentResolver.openOutputStream(pUri, "wt")
            writer = BufferedWriter(OutputStreamWriter(out))
            gameNode.writeNode(writer)
        } catch (e: Exception) {
            if (isEnabledFor(_LOG_TAG, Log.ERROR)) {
                log(_LOG_TAG, Log.ERROR, "saving game failed: '$e'")
            }
            return false
        } finally {
            if (writer != null) {
                try {
                    writer.close()
                } catch (ignored: Exception) {
                }
            }
        }
        return true
    }

    // Adds this game as an additional (...) tree in an existing SGF file
    // instead of replacing it, turning (or extending) it into a multi-game
    // collection. Reads the existing content and rewrites it in full (rather
    // than relying on SAF "append" open mode) since not every DocumentsProvider
    // is guaranteed to support append semantics.
    fun appendGame(pUri: Uri, pDisplayName: String, pContentResolver: ContentResolver): Boolean {
        val gameNode = _gameNode
        val setupNode = _setupNode
        if (gameNode == null || setupNode == null) {
            return false
        }
        setupNode
            .addProperty(
                PropertyName.Date.newProperty(
                    DateFormat.format("yyyy-MM-dd", GregorianCalendar()).toString()
                )
            )
            .addProperty(PropertyName.GameName.newProperty(pDisplayName))
        var writer: Writer? = null
        try {
            val existing = StringBuilder()
            val reader: Reader = InputStreamReader(openInput(pUri, pContentResolver))
            val buffer = CharArray(4096)
            var numChars: Int
            while (reader.read(buffer).also { numChars = it } != -1) {
                existing.append(buffer, 0, numChars)
            }
            reader.close()

            val out = pContentResolver.openOutputStream(pUri, "wt")
            writer = BufferedWriter(OutputStreamWriter(out))
            writer.write(existing.toString())
            gameNode.writeNode(writer)
        } catch (e: Exception) {
            if (isEnabledFor(_LOG_TAG, Log.ERROR)) {
                log(_LOG_TAG, Log.ERROR, "appending game failed: '$e'")
            }
            return false
        } finally {
            if (writer != null) {
                try {
                    writer.close()
                } catch (ignored: Exception) {
                }
            }
        }
        return true
    }

    private fun openInput(pUri: Uri, pContentResolver: ContentResolver): InputStream {
        return pContentResolver.openInputStream(pUri)
            ?: throw Exception("openInputStream returned null for $pUri")
    }

    fun setupStones(pBlack: Boolean, pNode: PropertyNode) {
        val propertyName = if (pBlack) PropertyName.AddBlack else PropertyName.AddWhite
        val moves = pNode.getPropertyValues(propertyName) ?: return
        val boardSize = _boardSize
        for (move in moves) {
            val point = fromMovePropertyValue(propertyName, move, Point())
            if (point != null) {
                Gtp.playMove(false, pBlack, point, boardSize)
            }
        }
    }

    fun toPropertyValue(pProperty: PropertyName, pValue: String): PropertyName.Property {
        var value = pValue
        try {
            when (pProperty.type) {
                PropertyName.Type.Real -> value = value.toFloat().toString()
                else -> {}
            }
        } catch (e: Exception) {
            value = "0"
        }
        return pProperty.newProperty(value)
    }

    fun toPropertyValue(pProperty: PropertyName, pValue: Point?): PropertyName.Property {
        val posLetters = PropertyName._POSITION_LETTERS_CHAR_ARR
        var value = ""
        when (pProperty.type) {
            PropertyName.Type.StoneList, PropertyName.Type.Move ->
                value = if (pValue == null || pValue is Passed) ""
                else "${posLetters[pValue.x]}${posLetters[pValue.y]}"
            else -> {}
        }
        return pProperty.newProperty(value)
    }

    fun toPropertyValue(pProperty: PropertyName, pValue: Int): PropertyName.Property {
        var value = ""
        when (pProperty.type) {
            PropertyName.Type.Number, PropertyName.Type.NumberOrComposedNumberColonNumber ->
                value = pValue.toString()
            else -> {}
        }
        return pProperty.newProperty(value)
    }

    fun toPropertyValue(pProperty: PropertyName, pValue: Boolean): PropertyName.Property {
        var value = ""
        when (pProperty) {
            PropertyName.Rules ->
                value = if (pValue) Rules.Chinese._sgfPropertyName else Rules.Japanese._sgfPropertyName
            PropertyName.Player ->
                value = if (pValue) PropertyName._COLOR_BLACK else PropertyName._COLOR_WHITE
            else -> {}
        }
        return pProperty.newProperty(value)
    }

    fun fromMovePropertyValue(pProperty: PropertyName, pValue: String?, pPoint: Point): Point? {
        val posLetters = PropertyName._POSITION_LETTERS
        when (pProperty.type) {
            PropertyName.Type.Move, PropertyName.Type.StoneList, PropertyName.Type.PointList -> {
                var value = pValue
                if (value == null) {
                    return Passed._Passed
                }
                value = value.trim()
                if (value.isEmpty()) {
                    return Passed._Passed
                }
                if (value.length != 2) {
                    return null
                }
                val x = posLetters.indexOf(value[0])
                val y = posLetters.indexOf(value[1])
                val boardsizePlus1 = _boardSize + 1
                if (x < 0 || y < 0 || x > boardsizePlus1 || y > boardsizePlus1) {
                    return null
                }
                if (x == boardsizePlus1 && y == boardsizePlus1) {
                    return Passed._Passed
                }
                pPoint.x = x
                pPoint.y = y
            }
            else -> {}
        }
        return pPoint
    }

    fun fromNumberPropertyValue(pProperty: PropertyName, pValue: String?): Int? {
        if (pValue == null) {
            return null
        }
        when (pProperty.type) {
            PropertyName.Type.Number, PropertyName.Type.NumberOrComposedNumberColonNumber ->
                return pValue.toInt()
            else -> {}
        }
        return null
    }

    fun fromRealPropertyValue(pProperty: PropertyName, pValue: String?): Float? {
        if (pValue == null) {
            return null
        }
        when (pProperty.type) {
            PropertyName.Type.Real -> return pValue.toFloat()
            else -> {}
        }
        return null
    }

    fun fromBlackPropertyValue(pProperty: PropertyName, pValue: String?): Boolean? {
        if (pValue == null) {
            return null
        }
        val value = pValue.trim()
        when (pProperty.type) {
            PropertyName.Type.Color ->
                return if (PropertyName._COLOR_BLACK == value) true
                else if (PropertyName._COLOR_WHITE == value) false
                else null
            else -> {}
        }
        return null
    }

    companion object {
        const val _CURRENT_NODE_NAME = "-RECENT_MOVE"

        // An internal SGF marker (never shown to the user, never compared
        // against anything outside this app's own save files) - "GoDroid" is
        // a fixed literal, not a read of the app's live display name, so
        // this stays a compile-time constant and every version keeps writing
        // and recognizing the exact same marker value. (Matches
        // MainActivity.AppInfo's _appName, which has always resolved to the
        // same "GoDroid" app_name string resource - see AndroidManifest's
        // android:label - so this preserves compatibility with saves from
        // every prior version too.)
        const val _RECENT_MOVE_NAME = "GoDroid" + _CURRENT_NODE_NAME
        const val _CHINESE_RULES_PROPERTY_VALUE = "Chinese"
        const val _DEFAULT_KOMI = "5.5"

        const val _DEFAULT_GAME_COLLECTION_IDX = -1

        // todo settings
        const val _MAX_HISTORY_STONES = 2
        const val _DEFAULT_BOARD_SIZE = 9
        const val _DEFAULT_LEVEL = 1
        const val _DEFAULT_HANDICAP = 0
        const val _DEFAULT_AI_DELAY = 0

        val _RECENT_MOVE_PROPERTY: PropertyName.Property =
            PropertyName.RecentMove.newProperty(_RECENT_MOVE_NAME)

        const val _DEFAULT_BLACK_HUMAN = true
        const val _DEFAULT_WHITE_HUMAN = false
        const val _DEFAULT_BLACK_MOVES = true
        const val _DEFAULT_CHINESE_RULES = false
        const val _DEFAULT_ALLOW_RESIGNATION = true

        val _SGF_LOGGER: _Logger = object : _Logger {
            override fun log(pMessage: String) {
                if (isEnabledFor(_LOG_TAG, Log.VERBOSE)) {
                    Logging.log(_LOG_TAG, Log.VERBOSE, pMessage)
                }
            }
        }

        @JvmStatic
        fun getMoveName(pBlackMove: Boolean): PropertyName =
            if (pBlackMove) PropertyName.BlackMove else PropertyName.WhiteMove

        @JvmStatic
        fun toLongArray(pLongList: List<Long>): LongArray {
            val longArray = LongArray(pLongList.size)
            var idx = 0
            for (value in pLongList) {
                longArray[idx++] = value
            }
            return longArray
        }
    }
}
