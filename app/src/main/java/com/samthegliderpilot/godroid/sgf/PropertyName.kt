package com.samthegliderpilot.godroid.sgf

import java.util.EnumSet

enum class PropertyName(val ident: String, val type: Type) {
    BlackMove("B", Type.Move),
    BackTimeLeft("BL", Type.Real),
    BadMove("BM", Type.Double),
    Doubtful("DO", Type.None),
    Interesting("IT", Type.None),
    Ko("KO", Type.None),
    MoveNumber("MN", Type.Number),
    OtStonesBlack("OB", Type.Number),
    OtStonesWhite("OW", Type.Number),
    Tesuji("TE", Type.Real),
    WhiteMove("W", Type.Move),
    WhiteTimeLeft("WL", Type.Real),
    AddBlack("AB", Type.StoneList),
    AddEmpty("AE", Type.PointList),
    AddWhite("AW", Type.StoneList),
    Player("PL", Type.Color),
    Arrow("AR", Type.ComposedPointListColonPoint),
    Comment("C", Type.Text),
    Circle("CR", Type.PointList),
    DimPoints("DD", Type.PointEList),
    EvenPosition("DM", Type.Double),
    Figure("FG", Type.NoneOrComposedNumberColonSimpleText),
    GoodForBlack("GB", Type.Double),
    GoodForWhite("GW", Type.Double),
    Hotspot("HO", Type.Double),
    Label("LB", Type.ComposedPointListColonSimpleText),
    Line("LN", Type.ComposedPointListColonPoint),
    Mark("MA", Type.PointList),
    NodeName("N", Type.SimpleText),
    PrintMoveMode("PM", Type.Number),
    Selected("SL", Type.PointList),
    Square("SQ", Type.PointEList),
    Triangle("TR", Type.PointList),
    UnclearPos("UC", Type.Double),
    Value("V", Type.Real),
    View("VW", Type.PointEList),
    Application("AP", Type.ComposedSimpleTextColonNumber),
    Charset("CA", Type.SimpleText),
    FileFormat("FF", Type.NumberOneToFour),
    GameType("GM", Type.NumberOneToFiveSevenToSeventeen),
    Style("ST", Type.NumberZeroToThree),
    Size("SZ", Type.NumberOrComposedNumberColonNumber),
    Annotation("AN", Type.SimpleText),
    BlackRank("BR", Type.SimpleText),
    BlackTeam("BT", Type.SimpleText),
    Copyright("CP", Type.SimpleText),
    Date("DT", Type.SimpleText),
    Event("EV", Type.SimpleText),
    GameComment("GC", Type.Text),
    GameName("GN", Type.SimpleText),
    Opening("ON", Type.SimpleText),
    Overtime("OT", Type.SimpleText),
    PlayerBlack("PB", Type.SimpleText),
    Place("PC", Type.SimpleText),
    PlayerWhite("PW", Type.SimpleText),
    Result("RE", Type.SimpleText),
    Round("RO", Type.SimpleText),
    Rules("RU", Type.SimpleText),
    Source("SO", Type.SimpleText),
    TimeLimit("TM", Type.Real),
    User("US", Type.SimpleText),
    WhiteRank("WR", Type.SimpleText),
    WhiteTeam("WT", Type.SimpleText),
    TerritoryBlack("TB", Type.PointEList),
    TerritoryWhite("TW", Type.PointEList),
    Handicap("HA", Type.Number),
    Komi("KM", Type.Real),
    WhoAddsStones("AS", Type.SimpleText),
    InitialPos("IP", Type.SimpleText),
    InvertYAxis("IY", Type.SimpleText),
    Markup("SE", Type.Point),
    SetupType("SU", Type.SimpleText),
    RecentMove("RM", Type.SimpleText); // private property

    enum class Type {
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

    class Property(val name: PropertyName, val value: String)

    fun newProperty(value: String): Property = Property(this, value)

    companion object {
        val _listTypes: Set<Type> = EnumSet.of(Type.StoneList, Type.PointList, Type.PointEList)

        const val _COLOR_BLACK = "B"
        const val _COLOR_WHITE = "W"
        const val _JAPANESE_RULES_PROPERTY_VALUE = "Japanese"
        const val _SGF_FILE_FORMAT4 = "4"
        const val _GO_GAME_NUMBER = "1"
        const val _POSITION_LETTERS = "abcdefghijklmnopqrs"

        @JvmField
        val _POSITION_LETTERS_CHAR_ARR: CharArray = _POSITION_LETTERS.toCharArray()
    }
}
