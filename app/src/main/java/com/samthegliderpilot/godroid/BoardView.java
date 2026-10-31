package com.samthegliderpilot.godroid;

import java.util.List;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PixelFormat;
import android.graphics.Point;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RadialGradient;
import android.graphics.Rect;
import android.graphics.Shader;
import android.graphics.drawable.shapes.PathShape;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.widget.Toast;

import androidx.annotation.NonNull;

import com.samthegliderpilot.util.Generics;

public
class BoardView
	extends SurfaceView
	implements SurfaceHolder.Callback
{
private static final
int _ZOOM_BOARD_SIZE = 5; // seems to work well

private static final
float _SHAPE_FACTOR = 100;

private static final
Paint _xferModePaintSrc = new Paint (),
	_xferModePaintAtop = new Paint (),
	_xferModePaintAtopAlpha,
	_crossCursporPaint,
	_numberPaint,
	_boardPaint;
static
{
	_xferModePaintSrc.setXfermode (
		new PorterDuffXfermode (PorterDuff.Mode.SRC));
	_xferModePaintAtop.setXfermode (
		new PorterDuffXfermode (PorterDuff.Mode.SRC_ATOP));
	_xferModePaintAtopAlpha = new Paint(_xferModePaintAtop);
	_crossCursporPaint = new Paint (_xferModePaintSrc);
	final Paint numberPaint = _numberPaint = new Paint (_xferModePaintAtop);
	numberPaint.setFlags (Paint.ANTI_ALIAS_FLAG);
	numberPaint.setTextAlign (Paint.Align.CENTER);
	numberPaint.setStrokeWidth (8);
	_boardPaint = new Paint (_xferModePaintAtop);
}

private static final
Bitmap.Config _bitmapConfig = Bitmap.Config.ARGB_8888;

MainActivity _mainActivity;

private final
int _blackStoneColor, _whiteStoneColor;

private final
SurfaceHolder _surfaceHolder;

private final
GestureDetector _gestureDetector;

private final
BoardGestureListener _gestureListener;

final
Toast _tapHint;

boolean _isZoom = false;

float _activeCellWidth;

EdgeTapPaddingMode _edgeTapPaddingMode = EdgeTapPaddingMode.AUTO;

private boolean _showCoordinates = true;

private
float
	_zoomFactor, // todo preferences
	_realCellWidth, _zoomCellWidth,
	_cellWidthDIV2, _realCellWidthDIV2, _zoomCellWidthDIV2;

int
	_boardSize,
	_activeXBoardOffset, _activeYBoardOffset;

private
int
	_boardWidth, _boardHeight,
	_intCellWidth, _intCellWidthDIV2,
	_activeIntCellWidth, _activeIntCellWidthDIV2,
	_intZoomCellWidth, _intZoomCellWidthDIV2,
	_yBoardOffset, _xBoardOffset,
	_drawnBoardWidth,
	_maxZoomBoardSizeOffset,
	_zoomRangeLow, _zoomRangeHigh,
	_crossCursorStrokeWidth;

private
Bitmap
	_boardBitmap,
	_blackStoneBitmap, _whiteStoneBitmap,
	_blackStoneZoomBitmap, _whiteStoneZoomBitmap,
	_blackStoneMarkerBitmap, _whiteStoneMarkerBitmap,
	_blackStoneZoomMarkerBitmap, _whiteStoneZoomMarkerBitmap,
	_blackTerritoryBitmap, _whiteTerritoryBitmap;

private
PathShape _gridShape, _markersShape;

private
float [] _textPosUpper, _textPosLower;

final
LegalMoves _legalMoves = new LegalMoves ();

private final
List <Point> _markers = Generics.newArrayList ();

Point _zoomViewPoint;

public
BoardView ( // 1
	final Context pContext,
	final AttributeSet pAttrs
	)
{
	super (pContext, pAttrs);
	final MainActivity mainActivity = _mainActivity = ((MainActivity)pContext);
	final Resources resources = getResources ();
	_xferModePaintAtopAlpha.setAlpha (resources.getInteger (
		R.integer.movingStoneAlphaTransperency));
	_crossCursporPaint.setStrokeWidth (
		_crossCursorStrokeWidth =
			resources.getInteger (R.integer.crossCursorStrokeWidth));
	_crossCursporPaint.setColor (resources.getColor (R.color.crossCursorColor));
	_boardPaint.setShader (new BitmapShader (
		BitmapFactory.decodeResource (resources, R.drawable.board),
		Shader.TileMode.MIRROR, Shader.TileMode.MIRROR));
	_boardPaint.setAlpha (190);
	_blackStoneColor = resources.getColor (R.color.blackStoneColor);
	_whiteStoneColor = resources.getColor (R.color.whiteStoneColor);
	_tapHint = MainActivity.makeToast (mainActivity,
		resources.getString (R.string.tapHintText));

	final SurfaceHolder holder = _surfaceHolder = getHolder ();
	holder.setFormat (PixelFormat.TRANSPARENT);
	holder.addCallback (this);

	final BoardGestureListener gestureListener = _gestureListener =
		new BoardGestureListener (this);
	_gestureDetector = new GestureDetector (pContext, gestureListener);
}

public
void surfaceCreated ( // 3
					  @NonNull final SurfaceHolder pHolder
	)
{
}

public
void surfaceDestroyed (
		@NonNull final SurfaceHolder pHolder
	)
{
}

public
void surfaceChanged ( // 4
					  @NonNull final SurfaceHolder pHolder,
					  final int pFormat,
					  final int pWidth,
					  final int pHeight
	)
{
	final boolean isLandscape = pWidth > pHeight;

	final MainActivity mainActivity = _mainActivity;

	final Bitmap boardBitmap = _boardBitmap;
	// Compare the raw surface dimensions directly, not a derived square size
	// (isLandscape ? pHeight : pWidth) -- on a phone where rotation swaps
	// width/height exactly, that derived value is unchanged across the swap,
	// which used to skip re-layout entirely and leave the board using the
	// wrong orientation's offsets after rotating.
	//
	// The comparison tolerates a few px of jitter rather than demanding an
	// exact match: confirmed via logging that the score panel above this
	// view (Compose, text-content-driven height) can report a height a
	// handful of px different from one recomposition to the next - e.g.
	// right as scoring finishes and the row's label/value text changes -
	// with no real resize involved. Treating that as a real resize used to
	// recreate _boardBitmap from scratch and redraw it via a plain
	// mainActivity.drawBoard(true), which doesn't know about the territory
	// markers Gtp.score() had just drawn onto the old bitmap moments
	// earlier - wiping them. A real resize (rotation, fold/unfold) moves
	// this by hundreds of px, far outside this tolerance.
	final int SIZE_JITTER_TOLERANCE_PX = 16;
	if (boardBitmap != null
		&& Math.abs (_boardWidth - pWidth) <= SIZE_JITTER_TOLERANCE_PX
		&& Math.abs (_boardHeight - pHeight) <= SIZE_JITTER_TOLERANCE_PX)
	{
		drawBoard2Surface ();
		return;
	}
	// Re-run for ANY real dimension change (rotation, fold/unfold), not just
	// the very first surface creation, so the board bitmap and centering
	// offsets -- and, via drawBoard(true) -> INIT_BOARD -> initBoard(), the
	// Auto edge-tap-padding decision -- reflect the current screen size.
	final boolean firstCreate = boardBitmap == null;
	_boardBitmap = Bitmap.createBitmap (pWidth, pHeight, _bitmapConfig);
	_boardWidth = pWidth;
	_boardHeight = pHeight;
	if (isLandscape)
	{
		_yBoardOffset = 0;
		_xBoardOffset = (pWidth - _boardHeight) / 2;
	}
	else
	{
		_yBoardOffset = (_boardHeight - pWidth) / 2;
		_xBoardOffset = 0;
	}
	if (firstCreate)
	{
		mainActivity.newGame ();
	}
	else
	{
		mainActivity.drawBoard (true);
		// drawBoard() redraws from GameInfo's move list alone - it has no
		// idea a finished game is showing territory/dead-stone markers on
		// top (that only exists via GTP queries Gtp.score() ran, not in
		// GameInfo), so a real resize would otherwise silently lose them.
		// Re-running the same query the "Show Territory" menu action uses
		// puts them back; it's a cheap, already-exercised GTP round-trip,
		// posted after drawBoard()'s own commands so it runs once the
		// board geometry is settled for the new size.
		if (mainActivity.isGameScored ())
		{
			mainActivity.showTerritory ();
		}
	}
}

void setEdgeTapPaddingMode (
	final EdgeTapPaddingMode pMode
	)
{
	_edgeTapPaddingMode = pMode;
}

void setShowCoordinates (
	final boolean pShow
	)
{
	_showCoordinates = pShow;
}

void initBoard (
	final int pSize
	)
{
	_boardSize = pSize;
	final int boardW = _boardWidth, boardH = _boardHeight,
		fullBoardWidth = boardW > boardH ? boardH : boardW;
	final boolean isLandscape = boardW > boardH;
	final float fullCellWidth = (float)fullBoardWidth / pSize;
	final boolean paddingActive = EdgeTapMath.isPaddingActive (_edgeTapPaddingMode,
		fullCellWidth, getResources ().getDisplayMetrics ().density,
		EdgeTapMath.AUTO_EDGE_PADDING_THRESHOLD_DP);
	// Shrink the whole board by one original row-length and add that margin
	// only on the left/right (the sides that are actually hard to reach on a
	// thin phone in a case) -- rather than widening touch tolerance, which
	// was barely noticeable. The vertical offset keeps the original unshrunk
	// formula, so the freed vertical space just falls wherever it already
	// was blank instead of pushing the top/bottom edges in too.
	final int margin = paddingActive ? (int)(fullCellWidth / 2) : 0;
	final int realBoardWidth = _drawnBoardWidth = fullBoardWidth - margin * 2;
	if (isLandscape)
	{
		_yBoardOffset = 0;
		_xBoardOffset = (boardW - boardH) / 2 + margin;
	}
	else
	{
		_yBoardOffset = (boardH - boardW) / 2;
		_xBoardOffset = margin;
	}
	final float shapeFactor =  _SHAPE_FACTOR,
		boardWidth = realBoardWidth * shapeFactor,
		cellWidth = boardWidth / pSize,
		cellWidthDIV2 = cellWidth / 2,
		realCellWidth = _realCellWidth = cellWidth / shapeFactor,
		realCellWidthDIV2 = _realCellWidthDIV2 = cellWidthDIV2 / shapeFactor;
	final int intCellWidth = _intCellWidth = (int)realCellWidth;
	_intCellWidthDIV2 = (int)(_cellWidthDIV2 = realCellWidthDIV2);
	final float zoomFactor =
		_zoomFactor = realBoardWidth / (_ZOOM_BOARD_SIZE * realCellWidth);
	_zoomRangeHigh = pSize - (_zoomRangeLow = _ZOOM_BOARD_SIZE / 2);
	_maxZoomBoardSizeOffset = pSize - _ZOOM_BOARD_SIZE;
	final float zoomCellWidth = _zoomCellWidth = realCellWidth * zoomFactor,
		zoomCellWidthDIV2 = realCellWidthDIV2 * zoomFactor;
	final int intZoomCellWidth = _intZoomCellWidth = (int)zoomCellWidth;
	_intZoomCellWidthDIV2 = (int)(_zoomCellWidthDIV2 = zoomCellWidthDIV2);
	_activeCellWidth = realCellWidth;
	_activeXBoardOffset = _xBoardOffset; _activeYBoardOffset = _yBoardOffset;

	final Resources resources = getResources ();
	Path path = new Path ();

	final float lineEnd = boardWidth - cellWidthDIV2;
	for (int idx=0; idx < pSize; idx++)
	{
		final float pos = cellWidthDIV2 + idx * cellWidth;
		path.moveTo (cellWidthDIV2, pos);
		path.lineTo (lineEnd, pos);
		path.moveTo (pos, cellWidthDIV2);
		path.lineTo (pos, lineEnd);
	}
	PathShape shape = _gridShape = new PathShape (path, boardWidth, boardWidth);
	shape.resize (realBoardWidth, realBoardWidth);

	path = new Path ();
	final List <Point> markers = _markers;
	markers.clear ();
	markers.addAll (points2Coords (Gtp.getMarkers ()));
	final float markerRadius = 52 * shapeFactor/pSize,
		markerOffset = cellWidthDIV2 + shapeFactor / 2,
		xBoardOffset = _xBoardOffset * shapeFactor,
		yBoardOffest = _yBoardOffset * shapeFactor;
	for (final Point point : markers)
	{
		path.addCircle (point.x * shapeFactor + markerOffset - xBoardOffset,
			point.y * shapeFactor + markerOffset - yBoardOffest,
			markerRadius, Path.Direction.CW);
	}
	shape = _markersShape = new PathShape (path, boardWidth, boardWidth);
	shape.resize (realBoardWidth, realBoardWidth);

	final int numPosEntries = pSize * 2;
	final float[] textPosUpper = _textPosUpper = new float [numPosEntries],
		textPosLower = _textPosLower = new float [numPosEntries];
	final float realCellWidhtDIV4 = realCellWidthDIV2 / 2,
		upperPosY = realCellWidthDIV2 -3, lowerPosY = realBoardWidth -3;
	for (int idx=0, posIdx=0; idx < pSize; idx++, posIdx+=2)
	{
		final float pos = realCellWidthDIV2 + realCellWidhtDIV4
			+ idx * realCellWidth;
		textPosUpper [posIdx] = textPosLower [posIdx] = pos;
		final int yIdx = posIdx +1;
		textPosUpper [yIdx] = upperPosY;
		textPosLower [yIdx] = lowerPosY;
	}

	final Bitmap.Config bitmapConfig = _bitmapConfig;
	Bitmap bitmap = _blackStoneBitmap = Bitmap.createBitmap (
		intCellWidth, intCellWidth, bitmapConfig);
	final Canvas canvas = new Canvas (bitmap);
	final float stoneCenter = boardWidth / 2,
		stoneRadius = stoneCenter - boardWidth / 30;
	path = new Path ();
	path.addCircle (stoneCenter, stoneCenter, stoneRadius, Path.Direction.CW);
	shape = new PathShape (path, boardWidth, boardWidth);
	shape.resize (realCellWidth, realCellWidth);
	final Paint paint = new Paint (_xferModePaintSrc);
	paint.setStyle (Paint.Style.FILL);
	paint.setFlags (Paint.ANTI_ALIAS_FLAG);
	final float circleHighlight = stoneCenter - stoneCenter / 3,
		radiusHighlight = stoneCenter / 3;
	final int blackStoneColor = _blackStoneColor;
	paint.setShader (new RadialGradient (
		circleHighlight, circleHighlight, radiusHighlight,
		resources.getColor (R.color.blackStoneHighlightColor),
		blackStoneColor, Shader.TileMode.CLAMP));
	shape.draw (canvas, paint);
	Paint blackPaint = new Paint (paint);

	bitmap = _whiteStoneBitmap = Bitmap.createBitmap (
		intCellWidth, intCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	final int whiteStoneColor = _whiteStoneColor;
	final float highlightEnd = stoneCenter
		+ (float)Math.sqrt (stoneCenter * stoneCenter / 2);
	paint.setShader (new LinearGradient (
		circleHighlight, circleHighlight,
		highlightEnd, highlightEnd,
		whiteStoneColor, resources.getColor (R.color.whiteStoneHighlightColor),
		Shader.TileMode.CLAMP));
	shape.draw (canvas, paint);

	bitmap = _blackStoneZoomBitmap = Bitmap.createBitmap (
		intZoomCellWidth, intZoomCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	shape.resize (zoomCellWidth, zoomCellWidth);
	shape.draw (canvas, blackPaint);
	bitmap = _whiteStoneZoomBitmap = Bitmap.createBitmap (
		intZoomCellWidth, intZoomCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	shape.draw (canvas, paint);

	bitmap = _whiteStoneMarkerBitmap = Bitmap.createBitmap (
		intCellWidth, intCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	path.rewind ();
	path.addCircle (stoneCenter, stoneCenter, stoneRadius * 0.7f,
		Path.Direction.CW);
	shape = new PathShape (path, boardWidth, boardWidth);
	shape.resize (realCellWidth, realCellWidth);
	paint.setStyle (Paint.Style.STROKE);
	paint.setStrokeWidth (stoneCenter / 9);
	paint.setShader (null);
	blackPaint = new Paint (paint);
	shape.draw (canvas, paint);

	bitmap = _blackStoneMarkerBitmap = Bitmap.createBitmap (
		intCellWidth, intCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	paint.setColor (whiteStoneColor);
	shape.draw (canvas, paint);

	bitmap = _blackStoneZoomMarkerBitmap = Bitmap.createBitmap (
		intZoomCellWidth, intZoomCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	shape.resize (zoomCellWidth, zoomCellWidth);
	shape.draw (canvas, paint);
	bitmap = _whiteStoneZoomMarkerBitmap = Bitmap.createBitmap (
		intZoomCellWidth, intZoomCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	shape.draw (canvas, blackPaint);

	bitmap = _whiteTerritoryBitmap = Bitmap.createBitmap (
		intCellWidth, intCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	path.rewind ();
	float strokeStart = boardWidth / 7,
		strokeEnd = boardWidth - strokeStart;
	path.moveTo (strokeStart, strokeStart);
	path.lineTo (strokeEnd, strokeEnd);
	path.moveTo (strokeStart, strokeEnd);
	path.lineTo (strokeEnd, strokeStart);
	shape = new PathShape (path, boardWidth, boardWidth);
	shape.resize (realCellWidth, realCellWidth);
	paint.setStrokeWidth (boardWidth / 15);
	paint.setStrokeCap (Paint.Cap.ROUND);
	shape.draw (canvas, paint);

	bitmap = _blackTerritoryBitmap = Bitmap.createBitmap (
		intCellWidth, intCellWidth, bitmapConfig);
	canvas.setBitmap (bitmap);
	paint.setColor (blackStoneColor);
	paint.setStrokeWidth (boardWidth / 30);
	shape.draw (canvas, paint);
}

void drawBoard (
	final List <Point> pBlackStones,
	final List <Point> pWhiteStones,
	final List <Point> pHistoryStones,
	final List <Point> pRedoPoints,
	final int pMoveNumber,
	final boolean pMarkBlack
	)
{
	final Bitmap boardBitmap = _boardBitmap;
	final int boardWidth = _boardWidth, size = _boardSize;
	final float realCellWidth = _realCellWidth,
		realCellWidthDIV2 = _realCellWidthDIV2,
		activeCellWidthDIV2;

	final Resources resources = getResources ();
	final Paint paint = new Paint (_xferModePaintSrc);
	paint.setColor (resources.getColor (R.color.boardColor));
	final Canvas canvas = new Canvas (boardBitmap);
	final int boardHeight = _boardHeight;
	canvas.drawRect (0, 0, boardWidth, boardHeight, paint);
	canvas.drawRect (0, 0, boardWidth, boardHeight, _boardPaint);
	paint.setStyle (Paint.Style.STROKE);
	paint.setStrokeWidth (0);
	paint.setColor (resources.getColor (R.color.boardLineColor));
	canvas.drawLine (0, 0, boardWidth, 0, paint);

	int intCellWidth, intCellWidthDIV2;
	final float zoomFactor = _zoomFactor, inverseZoomFactor = 1 / zoomFactor,
		xBoardOffset, yBoardOffset;
	final boolean isZoom = _isZoom;
	if (isZoom)
	{
		canvas.scale (zoomFactor, zoomFactor);
		final float zoomRangeLow = _zoomRangeLow,
			zoomRangeHigh = _zoomRangeHigh,
			maxZoomBoardSizeOffset = _maxZoomBoardSizeOffset;
		final Point zoomViewPoint = _zoomViewPoint;
		int x = zoomViewPoint.x, y = zoomViewPoint.y;
		xBoardOffset = x < zoomRangeLow ? 0
			: (x >= zoomRangeHigh ? maxZoomBoardSizeOffset
				: x - zoomRangeLow) * -realCellWidth;
		yBoardOffset = y < zoomRangeLow ? 0
			: (y >= zoomRangeHigh ? maxZoomBoardSizeOffset :
				y - zoomRangeLow) * -realCellWidth;
		_activeXBoardOffset = (int)(xBoardOffset * zoomFactor);
		_activeYBoardOffset = (int)(yBoardOffset * zoomFactor);
		_activeCellWidth = _zoomCellWidth;
		intCellWidth = _intZoomCellWidth;
		intCellWidthDIV2 = _intZoomCellWidthDIV2;
		activeCellWidthDIV2 = _zoomCellWidthDIV2;
	}
	else
	{
		xBoardOffset = _activeXBoardOffset = _xBoardOffset;
		yBoardOffset = _activeYBoardOffset = _yBoardOffset;
		_activeCellWidth = _realCellWidth;
		intCellWidth = _intCellWidth;
		intCellWidthDIV2 = _intCellWidthDIV2;
		activeCellWidthDIV2 = _cellWidthDIV2;
	}
	canvas.translate (xBoardOffset, yBoardOffset);
	_activeIntCellWidth = intCellWidth;
	_activeIntCellWidthDIV2 = intCellWidthDIV2;
	_gestureListener.reset (_activeCellWidth);

	_gridShape.draw (canvas, paint);

	paint.setFlags (Paint.ANTI_ALIAS_FLAG);
	paint.setStyle (Paint.Style.FILL);
	_markersShape.draw (canvas, paint);

	if (_showCoordinates)
	{
		paint.setTextAlign (Paint.Align.CENTER);
		paint.setTextSize (realCellWidthDIV2 - 2);
		final int sizeMin1 = size -1;
		final float realCellWidhtDIV4 = realCellWidthDIV2 / 2,
			textYOffset = realCellWidthDIV2 + realCellWidhtDIV4,
			// _drawnBoardWidth is the grid's actual on-screen size, which shrinks when
			// edge tap padding is active - unlike boardWidth/boardHeight here, which are
			// this View's fixed full pixel dimensions and don't track that margin, so
			// using them left the right-edge coordinate numbers behind where the grid
			// actually ends.
			textXPos = _drawnBoardWidth - realCellWidhtDIV4;
		for (int idx=0; idx < size; idx++)
		{
			final float pos = textYOffset + idx * realCellWidth;
			final String numberText = String.valueOf (size - idx);
			canvas.drawText (numberText, realCellWidhtDIV4, pos, paint);
			if (idx < sizeMin1)
			{
				canvas.drawText (numberText, textXPos, pos, paint);
			}
		}
		final char [] lettersText = Gtp._POSITION_LETTERS_CHARS;
		// Replace drawPosText for _textPosUpper
		for (int i = 0; i < sizeMin1; i++) {
			float x = _textPosUpper[i * 2];
			float y = _textPosUpper[i * 2 + 1];
			canvas.drawText(lettersText, i, 1, x, y, paint);
		}

	// Replace drawPosText for _textPosLower
		for (int i = 0; i < size; i++) {
			float x = _textPosLower[i * 2];
			float y = _textPosLower[i * 2 + 1];
			canvas.drawText(lettersText, i, 1, x, y, paint);
		}
	}
	canvas.translate (-xBoardOffset, -yBoardOffset);
	if (isZoom)
	{
		canvas.scale (inverseZoomFactor, inverseZoomFactor);
	}

	drawStones (canvas, pBlackStones, true, false, false, false);
	drawStones (canvas, pWhiteStones, false, false, false, false);
	if (pHistoryStones != null && !pHistoryStones.isEmpty ())
	{
		final Point point = pHistoryStones.get (0);
		if (point != null && !(point instanceof GameInfo.Passed))
		{
			drawStone (canvas, point,
				pMarkBlack, true, false, false, false);
		}
		labelStones (pHistoryStones, pMoveNumber, pMarkBlack,
			intCellWidthDIV2, activeCellWidthDIV2, intCellWidth, canvas,
			SpecialStonesType.HISTORY);
	}
	if (pRedoPoints != null && !pRedoPoints.isEmpty ())
	{
		labelStones (pRedoPoints, 0, pMarkBlack,
			intCellWidthDIV2, activeCellWidthDIV2, intCellWidth, canvas,
			SpecialStonesType.REDO_MOVES);
	}
	drawBoard2Surface ();
}

enum
SpecialStonesType
{
	HISTORY,
	REDO_MOVES
}

void labelStones (
	final List <Point> pStones,
	int pMoveNumber,
	boolean pColorBlack,
	final int pIntCellWidthDIV2,
	final float pActiveCellWidthDIV2,
	final int pIntCellWidth,
	final Canvas pCanvas,
	final SpecialStonesType pType
	)
{
	if (pStones == null)
	{
		return;
	}
	final Paint numberPaint = _numberPaint;
	numberPaint.setTextSize (pActiveCellWidthDIV2 + pActiveCellWidthDIV2 / 3);
	final Paint.FontMetrics fontMetrics = numberPaint.getFontMetrics ();
	final int
		textOffset = (int)((fontMetrics.ascent + fontMetrics.descent) / 2),
		blackColor = _blackStoneColor, whiteColor = _whiteStoneColor,
		numStones = pStones.size ();
	char redoChar = 'A';
	for (int pointIdx = pType == SpecialStonesType.HISTORY ? 1 : 0;
		pointIdx < numStones; pointIdx++)
	{
		Point point = pStones.get (pointIdx);
		if (point == null || point instanceof GameInfo.Passed)
		{
			if (pType == SpecialStonesType.HISTORY)
			{
				pColorBlack = !pColorBlack;
				pMoveNumber--;
			}
			continue;
		}
		numberPaint.setColor (pColorBlack ? blackColor : whiteColor);
		String text = "";
		switch (pType)
		{
		case HISTORY:
			text = String.valueOf (pMoveNumber-- % 100);
			pColorBlack = !pColorBlack;
			point2Coord (point);
			break;
		case REDO_MOVES:
			text = String.valueOf (redoChar++);
			break;
		}
		point.offset (pIntCellWidthDIV2, pIntCellWidth + textOffset);
		pCanvas.drawText (text, point.x, point.y, numberPaint);
	}
}

void drawBoard (
	final List <Point> pBlackStones,
	final List <Point> pWhiteStones,
	final List <Point> pHistoryStones,
	final int pMoveNumber,
	final boolean pMarkBlack
	)
{
	drawBoard (pBlackStones, pWhiteStones, pHistoryStones, null,
		pMoveNumber,  pMarkBlack);
}

void drawTerritory (
	final List <Point> pBlackTerritory,
	final List <Point> pWhiteTerritory,
	final boolean pIsCoord
	)
{
	final Canvas canvas = new Canvas (_boardBitmap);
	drawStones (canvas, pBlackTerritory, true, true, pIsCoord, false);
	drawStones (canvas, pWhiteTerritory, false, true, pIsCoord, false);
}

void drawDeadStones (
	final List <Point> pBlackDead,
	final List <Point> pWhiteDead
	)
{
	final Canvas canvas = new Canvas (_boardBitmap);
	drawStones (canvas, pBlackDead, true, false, false, true);
	drawStones (canvas, pWhiteDead, false, false, false, true);
}

public
void drawBoard2Surface ()
{
	final SurfaceHolder surfaceHolder = _surfaceHolder;
	final Canvas surfaceCanvas = surfaceHolder.lockCanvas ();
	if (surfaceCanvas != null)
	{
		surfaceCanvas.drawBitmap (_boardBitmap, 0, 0, _xferModePaintSrc);
		surfaceHolder.unlockCanvasAndPost (surfaceCanvas);
	}
}

boolean drawMovingStone (
	final Point pMovingStone,
	final Point pLastStone
	)
{
	final SurfaceHolder surfaceHolder = _surfaceHolder;
	if (pLastStone != null)
	{
		final Rect lastRect = createCellRect (pLastStone);
		final int boardWidth = _boardWidth, boardHeight = _boardHeight;
		eraseCrossCursor (surfaceHolder, getCrossCursorRect (pLastStone, true,
			boardWidth, boardHeight));
		eraseCrossCursor (surfaceHolder, getCrossCursorRect (pLastStone, false,
			boardWidth, boardHeight));
		final Canvas canvas = surfaceHolder.lockCanvas (lastRect);
		if (canvas != null)
		{
			canvas.drawBitmap (_boardBitmap,
				lastRect, lastRect, _xferModePaintSrc);
			surfaceHolder.unlockCanvasAndPost (canvas);
		}
	}
	return drawMovingStone (pMovingStone, true);
}

boolean drawMovingStone (
	final Point pMovingStone,
	final boolean pIsMoving
	)
{
	final int width = _boardWidth, height = _boardHeight;
	final Rect movingStoneRect = createCellRect (pMovingStone);
	final SurfaceHolder surfaceHolder = _surfaceHolder;
	drawCrossCursor (surfaceHolder, pMovingStone, true, width, height);
	drawCrossCursor (surfaceHolder, pMovingStone, false, width, height);
	final boolean isBlack = _mainActivity.getGameInfo ()._playerBlackMoves;
	final Canvas canvas = surfaceHolder.lockCanvas (movingStoneRect);
	if (canvas != null)
	{
		canvas.drawBitmap (_boardBitmap,
			movingStoneRect, movingStoneRect, _xferModePaintSrc);
		drawStone (canvas, pMovingStone, isBlack, false,
			false, true, pIsMoving);
		if (!pIsMoving) // mark
		{
			drawStone (canvas, pMovingStone, isBlack, true, false,
				true, pIsMoving);
		}
		surfaceHolder.unlockCanvasAndPost (canvas);
	}
	return isBlack;
}

private
void eraseCrossCursor (
	final SurfaceHolder pSurfaceHolder,
	final Rect pCrossCursorRect
	)
{
	Canvas canvas = pSurfaceHolder.lockCanvas (pCrossCursorRect);
	if (canvas != null)
	{
		canvas.drawBitmap (_boardBitmap, pCrossCursorRect, pCrossCursorRect,
			_xferModePaintSrc);
		pSurfaceHolder.unlockCanvasAndPost (canvas);
	}
}

private
int _numDrawCrossCursorInvocations = 0;

private
void drawCrossCursor (
	final SurfaceHolder pSurfaceHolder,
	final Point pPoint,
	final boolean pHorizontal,
	final int pWidth,
	final int pHeight
	)
{
	final Rect crossRect =
		getCrossCursorRect (pPoint, pHorizontal, pWidth, pHeight);
	final Canvas canvas = pSurfaceHolder.lockCanvas (crossRect);
	if (canvas != null)
	{
		final Rect clipBounds = canvas.getClipBounds ();
		if (clipBounds.top == 0 && clipBounds.left == 0
			&& _numDrawCrossCursorInvocations <= 1)
		{
			canvas.drawBitmap (_boardBitmap,
				crossRect, crossRect, _xferModePaintSrc);
			pSurfaceHolder.unlockCanvasAndPost (canvas);
			_numDrawCrossCursorInvocations++;
			drawCrossCursor (pSurfaceHolder, pPoint,
				pHorizontal, pWidth, pHeight);
			return;
		}
		_numDrawCrossCursorInvocations = 0;
		canvas.drawLine (crossRect.left, crossRect.top,
			pHorizontal ? crossRect.right : crossRect.left,
			pHorizontal ? crossRect.top : crossRect.bottom,
			_crossCursporPaint);
		pSurfaceHolder.unlockCanvasAndPost (canvas);
	}
}

private
Rect getCrossCursorRect (
	final Point pPoint,
	final boolean pHorizontal,
	final int pWitdh,
	final int pHeight
	)
{
	if (pHorizontal)
	{
		final int y = pPoint.y + _activeIntCellWidthDIV2;
		return new Rect (0, y, pWitdh, y + _crossCursorStrokeWidth);
	}
	else
	{
		final int x = pPoint.x + _activeIntCellWidthDIV2;
		return new Rect (x, 0, x + _crossCursorStrokeWidth, pHeight);
	}
}

private
void drawStones (
	final Canvas pCanvas,
	final List <Point> pStones,
	final boolean pBlack,
	final boolean pTerritory,
	final boolean pIsCoord,
	final boolean pPaintAlpha
	)
{
	if (pStones == null)
	{
		return;
	}
	for (final Point point : pStones)
	{
		drawStone (pCanvas, point, pBlack, false,
			pTerritory, pIsCoord, pPaintAlpha);
	}
}

private
void drawStone (
	final Canvas pCanvas,
	final Point pPoint,
	final boolean pBlack,
	final boolean pMark,
	final boolean pTerritory,
	final boolean pIsCoord,
	final boolean pPaintAlpha
	)
{
	if (pPoint instanceof GameInfo.Passed)
	{
		return;
	}
	if (!pIsCoord)
	{
		point2Coord (pPoint);
	}
	final int x = pPoint.x, y = pPoint.y;
	final boolean isZoom = _isZoom;
	if (pMark)
	{
		pCanvas.drawBitmap (pBlack ?
				(isZoom ? _blackStoneZoomMarkerBitmap : _blackStoneMarkerBitmap)
			: (isZoom ? _whiteStoneZoomMarkerBitmap : _whiteStoneMarkerBitmap),
			x, y, _xferModePaintAtop);
	}
	else
	{
		pCanvas.drawBitmap (
			pBlack ? (pTerritory ? _blackTerritoryBitmap :
					(isZoom ? _blackStoneZoomBitmap : _blackStoneBitmap))
				: (pTerritory ? _whiteTerritoryBitmap :
					(isZoom ? _whiteStoneZoomBitmap : _whiteStoneBitmap)),
			x, y, pPaintAlpha ? _xferModePaintAtopAlpha : _xferModePaintAtop);
	}
}

private
Rect createCellRect (
	final Point pStone
	)
{
	point2Coord (pStone);
	final int cellWidth = _activeIntCellWidth, x = pStone.x, y = pStone.y;
	return new Rect (x, y, x + cellWidth, y + cellWidth);
}

private
void point2Coord (
	final Point pPoint
	)
{
	final Point newCoord = BoardGeometry.point2Coord (
		pPoint, _activeCellWidth, _activeXBoardOffset, _activeYBoardOffset);
	if (newCoord != null)
	{
		pPoint.set (newCoord.x, newCoord.y);
	}
}

private
List <Point> points2Coords (
	final List <Point> pPoints
	)
{
	for (final Point point : pPoints)
	{
		point2Coord (point);
	}
	return pPoints;
}

void setLegalMoves (
	final List <Point> pPoints
	)
{
	_legalMoves.replaceWith (pPoints);
}

void moveStone (
	final int pDiffX,
	final int pDiffY
	)
{
	_gestureListener.moveStoneIncrementally (pDiffX, pDiffY);
}

void showKeyUpHint ()
{
	final BoardGestureListener gestureListener = _gestureListener;
	if (!gestureListener._interactionLocked
		&& gestureListener._stonePositionChanged)
	{
		gestureListener.showHint ();
	}
}

void lockScreen (
	final boolean pLock
	)
{
	_gestureListener._interactionLocked = pLock;
}

void setZoom (
	final boolean pZoom
	)
{
	_isZoom = pZoom;
}

public
boolean onTouchEvent (
	final MotionEvent pEvent
	)
{
	_gestureDetector.onTouchEvent (pEvent);
	if (pEvent.getAction () == MotionEvent.ACTION_UP)
	{
		_gestureListener.onUp ();
		performClick();
	}
	return true;
}

@Override
public boolean performClick() {
	// Optionally handle custom click behavior here

	// Always call super to properly dispatch accessibility events
	return super.performClick();
}

@Override
protected
void onMeasure (
	final int pWidthMeasureSpec,
	final int pHeightMeasureSpec
	)
{
	final int width =
		resolveSize (getSuggestedMinimumWidth (), pWidthMeasureSpec);
	setMeasuredDimension (width, (int)(width + width / 100f * 5f));
}

}
