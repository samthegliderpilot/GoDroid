package com.samthegliderpilot.godroid.sgf;

import com.samthegliderpilot.godroid.sgf.Node.PropertyNode;
import org.junit.Test;

import java.io.StringReader;
import java.io.StringWriter;
import java.util.List;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;

/**
 * Characterization tests for Node/PropertyNode SGF parse+serialize round-tripping,
 * locking in CURRENT behavior before any save/load storage refactor. These are plain
 * JVM tests: Node/PropertyName/_Logger/Generics have zero Android imports.
 */
public class NodeRoundTripTest
{
	private static Node parse (final String pSgf) throws Exception
	{
		return new Node (new StringReader (pSgf), null, 0, 0);
	}

	private static Node firstGame (final Node pRoot)
	{
		return pRoot._children.get (0);
	}

	private static PropertyNode setupNode (final Node pGame)
	{
		final List <PropertyNode> setups = pGame.nextPropertyNodes ();
		assertEquals (1, setups.size ());
		return setups.get (0);
	}

	private static String serialize (final Node pGame) throws Exception
	{
		final StringWriter writer = new StringWriter ();
		pGame.writeNode (writer);
		return writer.toString ();
	}

	@Test
	public void singleGameLinearMovesRoundTrip () throws Exception
	{
		final String sgf = "(;GM[1]FF[4]SZ[9]HA[2]KM[0.5]PL[W]AB[gc][cg];W[ec];B[gg];W[cc])";
		final Node root = parse (sgf);
		assertEquals (1, root._children.size ());

		final Node game = firstGame (root);
		final PropertyNode setup = setupNode (game);
		assertEquals ("9", setup.getPropertyValue (PropertyName.Size));
		assertEquals ("2", setup.getPropertyValue (PropertyName.Handicap));
		assertEquals ("0.5", setup.getPropertyValue (PropertyName.Komi));
		assertEquals (List.of ("gc", "cg"),
			setup.getPropertyValues (PropertyName.AddBlack));

		PropertyNode cur = setup;
		final String[][] expectedMoves =
			{ {null, "ec"}, {"gg", null}, {null, "cc"} };
		for (final String[] expected : expectedMoves)
		{
			cur = cur.nextPropertyNode ();
			assertEquals (expected[0], cur.getPropertyValue (PropertyName.BlackMove));
			assertEquals (expected[1], cur.getPropertyValue (PropertyName.WhiteMove));
		}
		assertNull (cur.nextPropertyNode ());

		assertEquals (sgf, serialize (game));
	}

	@Test
	public void passMoveWithEmptyValueRoundTrips () throws Exception
	{
		final String sgf = "(;GM[1]FF[4]SZ[9];B[];W[cd])";
		final Node root = parse (sgf);
		final Node game = firstGame (root);
		final PropertyNode setup = setupNode (game);

		final PropertyNode firstMove = setup.nextPropertyNode ();
		assertEquals ("", firstMove.getPropertyValue (PropertyName.BlackMove));

		assertEquals (sgf, serialize (game));
	}

	@Test
	public void variationBranchesPreserveDistinctContinuations () throws Exception
	{
		final String sgf =
			"(;GM[1]FF[4]SZ[9];B[cc](;W[dd];B[ee])(;W[ff];B[gg]))";
		final Node root = parse (sgf);
		final Node game = firstGame (root);
		final PropertyNode setup = setupNode (game);

		final PropertyNode blackMove = setup.nextPropertyNode ();
		assertEquals ("cc", blackMove.getPropertyValue (PropertyName.BlackMove));
		assertEquals (2, blackMove._children.size ());

		final List <PropertyNode> branches = blackMove.nextPropertyNodes ();
		assertEquals (2, branches.size ());
		assertEquals ("dd", branches.get (0).getPropertyValue (PropertyName.WhiteMove));
		assertEquals ("ff", branches.get (1).getPropertyValue (PropertyName.WhiteMove));

		assertEquals (sgf, serialize (game));
	}

	@Test
	public void unrecognizedPropertyIsSilentlySkipped () throws Exception
	{
		// Characterizes current lenient behavior (Node.PropertyNode.readNode swallows
		// unknown idents rather than throwing) -- NOT asserting this is desirable.
		final String sgf = "(;GM[1]FF[4]SZ[9]XY[bogus];B[cc])";
		final Node root = parse (sgf);
		final Node game = firstGame (root);
		final PropertyNode setup = setupNode (game);

		assertEquals ("9", setup.getPropertyValue (PropertyName.Size));

		final String serialized = serialize (game);
		assertFalse ("unknown property must not appear in output",
			serialized.contains ("XY"));
		assertEquals ("(;GM[1]FF[4]SZ[9];B[cc])", serialized);
	}

	@Test
	public void handicapStoneListRoundTrips () throws Exception
	{
		final String sgf = "(;GM[1]FF[4]SZ[19]HA[4]AB[dd][dp][pd][pp];W[nq])";
		final Node root = parse (sgf);
		final Node game = firstGame (root);
		final PropertyNode setup = setupNode (game);

		assertEquals (List.of ("dd", "dp", "pd", "pp"),
			setup.getPropertyValues (PropertyName.AddBlack));
		assertTrue (setup.containsPropertyValue (
			PropertyName.Handicap.newProperty ("4")));

		assertEquals (sgf, serialize (game));
	}
}
