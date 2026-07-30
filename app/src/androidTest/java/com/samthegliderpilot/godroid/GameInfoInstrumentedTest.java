package com.samthegliderpilot.godroid;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;

import android.graphics.Point;

import androidx.test.core.app.ActivityScenario;
import androidx.test.ext.junit.runners.AndroidJUnit4;
import androidx.test.platform.app.InstrumentationRegistry;

import com.samthegliderpilot.godroid.GameInfo.LoadGameStatus;
import com.samthegliderpilot.godroid.sgf.Node.PropertyNode;
import com.samthegliderpilot.godroid.sgf.PropertyName;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;

import java.io.File;
import java.io.FileWriter;
import java.io.Writer;

/**
 * Characterization tests for GameInfo.saveGame/loadGame/getSetupNode, run on-device
 * because GameInfo's static init (Globals._appInfo, MainActivity._LOG_TAG) requires
 * the real app bootstrap, and loadGame drives the native GnuGo engine synchronously
 * via Gtp.gtpCommand/Gtp.playMove.
 *
 * These call GameInfo's package-private save/load methods directly, bypassing the
 * async Gtp.handleMessage UI-orchestration layer (which needs a live BoardView / UI
 * thread and is not exercised here). Autosave-on-move/undo/redo and the "save loaded
 * from a collection always prompts for a new filename" MainActivity dialog behavior
 * both live in that UI-orchestration layer and are NOT covered by this pass -- they
 * would need Espresso-driven UI interaction, deliberately out of scope here.
 */
@RunWith (AndroidJUnit4.class)
public class GameInfoInstrumentedTest
{
	private ActivityScenario <MainActivity> _scenario;

	private File _testDir;

	@Before
	public void launchAppAndPrepareScratchDir () throws Exception
	{
		_scenario = ActivityScenario.launch (MainActivity.class);
		// MainActivity.onStart() kicks off an async NEW_GAME on the GTP thread
		// (native SET_BOARDSIZE / legal-move query). Give it a moment to settle
		// before this test starts issuing its own synchronous native calls on
		// the same single native engine instance, to avoid interleaving.
		Thread.sleep (2000);

		_testDir = new File (InstrumentationRegistry.getInstrumentation ()
			.getTargetContext ().getCacheDir (), "gameInfoTest");
		_testDir.mkdirs ();
	}

	@After
	public void cleanup ()
	{
		if (_testDir != null)
		{
			final File[] files = _testDir.listFiles ();
			if (files != null)
			{
				for (final File f : files)
				{
					f.delete ();
				}
			}
			_testDir.delete ();
		}
		if (_scenario != null)
		{
			_scenario.close ();
		}
	}

	private File newFile (final String pName)
	{
		return new File (_testDir, pName);
	}

	private void writeRaw (final File pFile, final String pSgf) throws Exception
	{
		final Writer writer = new FileWriter (pFile);
		writer.write (pSgf);
		writer.close ();
	}

	@Test
	public void saveGame_writesBoardSizeMovesAndFileMetadata () throws Exception
	{
		final GameInfo gameInfo = new GameInfo ();
		gameInfo._boardSize = 9;
		gameInfo.initSGF ();
		// addMove records the move under the CURRENT _playerBlackMoves color and
		// does not toggle it -- the caller is responsible for alternating turns,
		// same as Gtp.handleMessage's PLAY_MOVE case does around addMove().
		gameInfo.addMove (new Point (2, 2));
		gameInfo._playerBlackMoves = !gameInfo._playerBlackMoves;
		gameInfo.addMove (new Point (6, 6));
		gameInfo._playerBlackMoves = !gameInfo._playerBlackMoves;

		final File file = newFile ("saveTest.sgf");
		assertTrue (gameInfo.saveGame (file));
		assertTrue (file.exists ());

		final String contents = new String (
			java.nio.file.Files.readAllBytes (file.toPath ()));
		assertTrue (contents.contains ("SZ[9]"));
		assertTrue (contents.contains ("GN[saveTest.sgf]"));
		assertTrue (contents.contains (";B[cc]"));
		assertTrue (contents.contains (";W[gg]"));
	}

	@Test
	public void saveThenLoad_roundTripsBoardSizeAndMoveSequence () throws Exception
	{
		final GameInfo original = new GameInfo ();
		original._boardSize = 9;
		original.initSGF ();
		original.addMove (new Point (2, 2));
		original._playerBlackMoves = !original._playerBlackMoves;
		original.addMove (new Point (6, 6));
		original._playerBlackMoves = !original._playerBlackMoves;
		original.addMove (new Point (2, 6));
		original._playerBlackMoves = !original._playerBlackMoves;

		final File file = newFile ("roundTrip.sgf");
		assertTrue (original.saveGame (file));

		final GameInfo loaded = new GameInfo ();
		final LoadGameStatus status =
			loaded.loadGame (file, GameInfo._DEFAULT_GAME_COLLECTION_IDX);

		assertEquals (LoadGameStatus.SUCCESS, status);
		assertEquals (9, loaded._boardSize);
		assertEquals (3, loaded._moveNumber);
		// Black played moves 1 and 3, White played move 2 -> White is due next.
		assertFalse (loaded._playerBlackMoves);

		// Walk the loaded tree directly to confirm the actual move sequence,
		// not just the count.
		PropertyNode node = loaded._setupNode;
		node = node.nextPropertyNode ();
		assertEquals ("cc", node.getPropertyValue (PropertyName.BlackMove));
		node = node.nextPropertyNode ();
		assertEquals ("gg", node.getPropertyValue (PropertyName.WhiteMove));
		node = node.nextPropertyNode ();
		assertEquals ("cg", node.getPropertyValue (PropertyName.BlackMove));
	}

	@Test
	public void saveThenLoad_handicapStonesRoundTripAsAddBlackList () throws Exception
	{
		final int boardSize = 9, handicap = 4;
		// Mirror what Gtp.handleMessage's NEW_GAME case does before initSGF():
		// the engine must actually have the handicap stones placed, since
		// initSGF() reads them back via Gtp.getStones(true, gameInfo).
		Gtp.gtpCommand (Gtp.GtpCommand.SET_BOARDSIZE, String.valueOf (boardSize));
		Gtp.storeMarkers ();
		Gtp.gtpCommand (Gtp.GtpCommand.SET_HANDICAP, String.valueOf (handicap));

		final GameInfo original = new GameInfo ();
		original._boardSize = boardSize;
		original._handicap = handicap;
		original._playerBlackMoves = false;
		original.initSGF ();

		final File file = newFile ("handicap.sgf");
		assertTrue (original.saveGame (file));
		assertEquals (handicap,
			original._setupNode.getPropertyValues (PropertyName.AddBlack).size ());

		final GameInfo loaded = new GameInfo ();
		final LoadGameStatus status =
			loaded.loadGame (file, GameInfo._DEFAULT_GAME_COLLECTION_IDX);

		assertEquals (LoadGameStatus.SUCCESS, status);
		assertEquals (boardSize, loaded._boardSize);
		assertEquals (handicap, loaded._handicap);
	}

	@Test
	public void loadGame_multiGameFile_returnsShowCollectionListWithoutLoading ()
		throws Exception
	{
		final String sgf = "(;GM[1]FF[4]SZ[9]GN[Game One];B[cc])"
			+ "(;GM[1]FF[4]SZ[13]GN[Game Two];B[dd])";
		final File file = newFile ("collection.sgf");
		writeRaw (file, sgf);

		final GameInfo gameInfo = new GameInfo ();
		final LoadGameStatus status =
			gameInfo.loadGame (file, GameInfo._DEFAULT_GAME_COLLECTION_IDX);

		assertEquals (LoadGameStatus.SHOW_COLLECTION_LIST, status);
		assertTrue (gameInfo._isCollection);
		assertNotNull (gameInfo._collectionNames);
		assertEquals (2, gameInfo._collectionNames.length);
		// NOTE: on-device this differs from desktop JVM (see the equivalent
		// pure-JVM NodeCollectionIndicesTest, which expects "1 GameOne" with the
		// space stripped). Node.readCollectionIndices strips whitespace via the
		// regex character class "[[\\s]--[ ]]" (a comment on that line literally
		// says "maybe not portable to non Android platforms"). Android's ICU-based
		// regex engine treats "--" as genuine character-class subtraction
		// (whitespace minus space -> strips tabs/newlines, keeps spaces), while
		// desktop OpenJDK's java.util.regex does not support "--" that way and
		// ends up stripping spaces too. Real, confirmed platform divergence.
		assertEquals ("1 Game One", gameInfo._collectionNames [0]);
		assertEquals ("2 Game Two", gameInfo._collectionNames [1]);

		// Loading the second entry explicitly by index should actually load it.
		final LoadGameStatus secondStatus = gameInfo.loadGame (file, 1);
		assertEquals (LoadGameStatus.SUCCESS, secondStatus);
		assertEquals (13, gameInfo._boardSize);
	}

	@Test
	public void loadGame_knownGap_externallyAuthoredSgfReplaysNoMoves () throws Exception
	{
		// KNOWN GAP, characterized here rather than fixed: loadGame's move-replay
		// loop (GameInfo.java ~689-703) only walks forward and replays moves if it
		// finds a node tagged with the app's own private RM (RecentMove) marker
		// property. A plain SGF file this app never wrote (e.g. emailed from
		// another Go program, or opened via the file:// / content:// ACTION_VIEW
		// intent path) has no RM marker anywhere, so loadGame hits the end of the
		// tree, finds nothing, and returns SUCCESS with _moveNumber left at 0 --
		// even though the file objectively contains moves and board size/single-
		// vs-collection detection both work correctly. The moves are still present
		// in the parsed tree (_setupNode's children), just never replayed into
		// live game state. This is a real, user-visible gap for opening externally
		// authored .sgf files; documented here, not fixed as part of this change.
		final String sgf = "(;GM[1]FF[4]SZ[9]GN[Solo];B[cc];W[gg])";
		final File file = newFile ("solo.sgf");
		writeRaw (file, sgf);

		final GameInfo gameInfo = new GameInfo ();
		final LoadGameStatus status =
			gameInfo.loadGame (file, GameInfo._DEFAULT_GAME_COLLECTION_IDX);

		assertEquals (LoadGameStatus.SUCCESS, status);
		assertFalse (gameInfo._isCollection);
		assertEquals (9, gameInfo._boardSize);
		assertEquals ("no RM marker in the file -> no moves are replayed (known gap)",
			0, gameInfo._moveNumber);

		// The moves are still present in the parsed tree itself, unreplayed.
		PropertyNode node = gameInfo._setupNode.nextPropertyNode ();
		assertEquals ("cc", node.getPropertyValue (PropertyName.BlackMove));
	}

	@Test
	public void loadGame_resumesAtRecentMoveMarkerPosition () throws Exception
	{
		// GameInfo.setCurrentNode tags whichever node is "current" with the
		// private RM (RecentMove) property; loadGame scans forward from setup
		// looking for that marker to know where a resumed game left off.
		final GameInfo original = new GameInfo ();
		original._boardSize = 9;
		original.initSGF ();
		original.addMove (new Point (2, 2));
		original._playerBlackMoves = !original._playerBlackMoves;
		original.addMove (new Point (6, 6));
		original._playerBlackMoves = !original._playerBlackMoves;
		original.addMove (new Point (2, 6));
		original._playerBlackMoves = !original._playerBlackMoves;
		// Undo one move, so the RM marker sits before the last move added --
		// this distinguishes "resume position" from "last node in the tree".
		original.undo ();

		final File file = newFile ("resume.sgf");
		assertTrue (original.saveGame (file));

		final GameInfo loaded = new GameInfo ();
		final LoadGameStatus status =
			loaded.loadGame (file, GameInfo._DEFAULT_GAME_COLLECTION_IDX);

		assertEquals (LoadGameStatus.SUCCESS, status);
		// Only the first 2 moves (before the undo) should be replayed.
		assertEquals (2, loaded._moveNumber);
		assertTrue (loaded._playerBlackMoves);
	}

	@Test
	public void loadGame_knownGap_komiAndRulesAreNotRestoredFromSgf () throws Exception
	{
		// Characterizes a pre-existing gap (GameInfo.java ~659-684 is commented
		// out): loading a saved game does NOT restore komi/rules from the SGF
		// text, even though they were written on save. This documents current
		// behavior; it is not being fixed as part of this change.
		final String sgf = "(;GM[1]FF[4]SZ[9]KM[6.5]RU[Chinese];B[cc])";
		final File file = newFile ("komiRules.sgf");
		writeRaw (file, sgf);

		final GameInfo gameInfo = new GameInfo ();
		final String komiBeforeLoad = gameInfo._komi;
		final boolean chineseRulesBeforeLoad = gameInfo._chineseRules;

		final LoadGameStatus status =
			gameInfo.loadGame (file, GameInfo._DEFAULT_GAME_COLLECTION_IDX);

		assertEquals (LoadGameStatus.SUCCESS, status);
		assertEquals ("komi is not restored from SGF on load (known gap)",
			komiBeforeLoad, gameInfo._komi);
		assertEquals ("rules are not restored from SGF on load (known gap)",
			chineseRulesBeforeLoad, gameInfo._chineseRules);
	}
}
