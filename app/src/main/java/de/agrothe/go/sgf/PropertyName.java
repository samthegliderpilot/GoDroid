package de.agrothe.go.sgf;

import java.util.Set;
import java.util.EnumSet;

public
enum PropertyName
{
BlackMove ("B", Type.Move),
BackTimeLeft ("BL", Type.Real),
BadMove ("BM", Type.Double),
Doubtful ("DO", Type.None),
Interesting ("IT", Type.None),
Ko ("KO", Type.None),
MoveNumber ("MN", Type.Number),
OtStonesBlack ("OB", Type.Number),
OtStonesWhite ("OW", Type.Number),
Tesuji ("TE", Type.Real),
WhiteMove ("W", Type.Move),
WhiteTimeLeft ("WL", Type.Real),
AddBlack ("AB", Type.StoneList),
AddEmpty ("AE", Type.PointList),
AddWhite ("AW", Type.StoneList),
Player ("PL", Type.Color),
Arrow ("AR", Type.ComposedPointListColonPoint),
Comment ("C", Type.Text),
Circle ("CR", Type.PointList),
DimPoints ("DD", Type.PointEList),
EvenPosition ("DM", Type.Double),
Figure ("FG", Type.NoneOrComposedNumberColonSimpleText),
GoodForBlack ("GB", Type.Double),
GoodForWhite ("GW", Type.Double),
Hotspot ("HO", Type.Double),
Label ("LB", Type.ComposedPointListColonSimpleText),
Line ("LN", Type.ComposedPointListColonPoint),
Mark ("MA", Type.PointList),
NodeName ("N", Type.SimpleText),
PrintMoveMode ("PM", Type.Number),
Selected ("SL", Type.PointList),
Square ("SQ", Type.PointEList),
Triangle ("TR", Type.PointList),
UnclearPos ("UC", Type.Double),
Value ("V", Type.Real),
View ("VW", Type.PointEList),
Application ("AP", Type.ComposedSimpleTextColonNumber),
Charset ("CA", Type.SimpleText),
FileFormat ("FF", Type.NumberOneToFour),
GameType ("GM", Type.NumberOneToFiveSevenToSeventeen),
Style ("ST", Type.NumberZeroToThree),
Size ("SZ", Type.NumberOrComposedNumberColonNumber),
Annotation ("AN", Type.SimpleText),
BlackRank ("BR", Type.SimpleText),
BlackTeam ("BT", Type.SimpleText),
Copyright ("CP", Type.SimpleText),
Date ("DT", Type.SimpleText),
Event ("EV", Type.SimpleText),
GameComment ("GC", Type.Text),
GameName ("GN", Type.SimpleText),
Opening ("ON", Type.SimpleText),
Overtime ("OT", Type.SimpleText),
PlayerBlack ("PB", Type.SimpleText),
Place ("PC", Type.SimpleText),
PlayerWhite ("PW", Type.SimpleText),
Result ("RE", Type.SimpleText),
Round ("RO", Type.SimpleText),
Rules ("RU", Type.SimpleText),
Source ("SO", Type.SimpleText),
TimeLimit ("TM", Type.Real),
User ("US", Type.SimpleText),
WhiteRank ("WR", Type.SimpleText),
WhiteTeam ("WT", Type.SimpleText),
TerritoryBlack ("TB", Type.PointEList),
TerritoryWhite ("TW", Type.PointEList),
Handicap ("HA", Type.Number),
Komi ("KM", Type.Real),
WhoAddsStones ("AS", Type.SimpleText),
InitialPos ("IP", Type.SimpleText),
InvertYAxis ("IY", Type.SimpleText),
Markup ("SE", Type.Point),
SetupType ("SU", Type.SimpleText),
RecentMove ("RM", Type.SimpleText), // private property
;

public static
enum Type
{
	Move,
	Real,
	Double,
	None,
	Number,
	StoneList,
	PointList,
	Color,
	ComposedPointListColonPoint,
	Text,
	PointEList,
	NoneOrComposedNumberColonSimpleText,
	ComposedPointListColonSimpleText,
	SimpleText,
	ComposedSimpleTextColonNumber,
	NumberOneToFour,
	NumberOneToFiveSevenToSeventeen,
	NumberZeroToThree,
	NumberOrComposedNumberColonNumber,
	Point,
}

final static
Set <Type> _listTypes = EnumSet.of (
	Type.StoneList, Type.PointList, Type.PointEList);

public static
class Property
{
	final
	PropertyName _name;

	final
	String _value;

	Property (
		final PropertyName pName,
		final String pValue
		)
	{
		_name = pName;
		_value = pValue;
	}
}

public static final
String
	_COLOR_BLACK = "B",
	_COLOR_WHITE = "W",
	_JAPANESE_RULES_PROPERTY_VALUE = "Japanese",
	_SGF_FILE_FORMAT4 = "4",
	_GO_GAME_NUMBER = "1",
	_POSITION_LETTERS = "abcdefghijklmnopqrs";

public static final
char [] _POSITION_LETTERS_CHAR_ARR = _POSITION_LETTERS.toCharArray ();

final
String _ident;

final
Type _type;

PropertyName (
	final String pIdent,
	final Type pType
	)
{
	_ident = pIdent;
	_type = pType;
}

public
Type getType ()
{
	return _type;
}

public
Property newProperty (
	final String pValue
	)
{
	return new Property (this, pValue);
}
}
