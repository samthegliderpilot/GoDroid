package com.samthegliderpilot.godroid.sgf;

import com.samthegliderpilot.godroid.sgf.Node.PropertyNode;
import org.junit.Test;

import java.io.StringReader;
import java.util.ArrayList;
import java.util.List;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

/**
 * Characterization tests for Node.readCollectionIndices -- the multi-game "archive"
 * file detection used by GameInfo.getSetupNode / MainActivity.showCollectionList.
 * Plain JVM tests, no Android dependencies. Includes a test that documents a known
 * fragility (regex-based GM/GN detection over raw text can be fooled by property-like
 * text inside a Comment) rather than fixing it -- this is characterization, not a fix.
 */
public class NodeCollectionIndicesTest
{
	@Test
	public void twoQualifyingGamesDetectedAsCollection () throws Exception
	{
		final String sgf = "(;GM[1]FF[4]SZ[9]GN[Game One];B[cc])"
			+ "(;GM[1]FF[4]SZ[9]GN[Game Two];B[dd])";
		final List <Long> offsets = new ArrayList <> (),
			numChars = new ArrayList <> ();
		final List <String> names = new ArrayList <> ();

		final boolean isCollection =
			Node.readCollectionIndices (new StringReader (sgf), offsets, numChars, names);

		assertTrue (isCollection);
		assertEquals (2, offsets.size ());
		assertEquals (List.of (0L, 36L), offsets);
		assertEquals (List.of ("1 GameOne", "2 GameTwo"), names);
	}

	@Test
	public void nonGoGameIsExcludedAndDoesNotConsumeAGameNumber () throws Exception
	{
		// GM[2] (non-Go) precedes a real GM[1] game; the excluded tree must not
		// be counted, and must not consume game-number "1" from the real game.
		final String sgf = "(;GM[2]FF[4]SZ[19];B[cc])"
			+ "(;GM[1]FF[4]SZ[9]GN[RealGame];B[dd])";
		final List <Long> offsets = new ArrayList <> (),
			numChars = new ArrayList <> ();
		final List <String> names = new ArrayList <> ();

		final boolean isCollection =
			Node.readCollectionIndices (new StringReader (sgf), offsets, numChars, names);

		// Only one qualifying game -> not flagged as a collection, even though
		// the raw file contains two top-level (...) trees.
		assertFalse (isCollection);
		assertEquals (1, offsets.size ());
		assertEquals (List.of ("1 RealGame"), names);
	}

	@Test
	public void singleQualifyingGameIsNotACollection () throws Exception
	{
		final String sgf = "(;GM[1]FF[4]SZ[9]GN[Solo];B[cc])";
		final List <Long> offsets = new ArrayList <> (),
			numChars = new ArrayList <> ();
		final List <String> names = new ArrayList <> ();

		final boolean isCollection =
			Node.readCollectionIndices (new StringReader (sgf), offsets, numChars, names);

		assertFalse (isCollection);
		assertEquals (1, offsets.size ());
	}

	@Test
	public void knownGap_commentTextResemblingAPropertyCanFoolGameTypeDetection ()
		throws Exception
	{
		// KNOWN FRAGILITY, characterized here rather than fixed: _GAME_TYPE_MATCHER
		// runs a greedy regex over the raw (whitespace-stripped) tree text rather
		// than parsed properties. A Comment that happens to contain text shaped
		// like "GM[2]" is matched instead of the real GM[1] property (regex
		// backtracking prefers the later match), causing this real, valid Go game
		// to be wrongly excluded from the archive listing.
		final String sgf = "(;GM[1]FF[4]SZ[9]C[note mentions GM[2] inline];B[cc])"
			+ "(;GM[1]FF[4]SZ[9]GN[Second];B[dd])";
		final List <Long> offsets = new ArrayList <> (),
			numChars = new ArrayList <> ();
		final List <String> names = new ArrayList <> ();

		Node.readCollectionIndices (new StringReader (sgf), offsets, numChars, names);

		// Documents the bug: only the second game survives detection.
		assertEquals (1, offsets.size ());
		assertEquals (List.of ("1 Second"), names);
	}

	@Test
	public void offsetsAndLengthsAllowReReadingEachGameIndependently () throws Exception
	{
		// Mirrors GameInfo.getSetupNode's usage: readCollectionIndices once, then
		// re-parse a single game's byte range on demand.
		final String sgf = "(;GM[1]FF[4]SZ[9]GN[Game One];B[cc])"
			+ "(;GM[1]FF[4]SZ[13]GN[Game Two];B[dd])";
		final List <Long> offsets = new ArrayList <> (),
			numChars = new ArrayList <> ();
		final List <String> names = new ArrayList <> ();
		Node.readCollectionIndices (new StringReader (sgf), offsets, numChars, names);

		final Node subRoot0 = new Node (new StringReader (sgf), null,
			offsets.get (0), numChars.get (0));
		final PropertyNode setup0 = subRoot0._children.get (0).nextPropertyNodes ().get (0);
		assertEquals ("9", setup0.getPropertyValue (PropertyName.Size));
		assertEquals ("Game One", setup0.getPropertyValue (PropertyName.GameName));

		final Node subRoot1 = new Node (new StringReader (sgf), null,
			offsets.get (1), numChars.get (1));
		final PropertyNode setup1 = subRoot1._children.get (0).nextPropertyNodes ().get (0);
		assertEquals ("13", setup1.getPropertyValue (PropertyName.Size));
		assertEquals ("Game Two", setup1.getPropertyValue (PropertyName.GameName));
	}
}
