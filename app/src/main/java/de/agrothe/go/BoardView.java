package de.agrothe.go;

import java.util.List;
import java.util.Set;

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
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.shapes.PathShape;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.widget.Toast;
import static de.agrothe.go.Globals._scoreView;
import static de.agrothe.go.Globals.*;
import de.agrothe.util.Generics;

public
class BoardView
	extends SurfaceView
	implements SurfaceHolder.Callback
{
private static final
int _ZOOM_BOARD_SIZE = 5; // todo preferences

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
BitmapDrawable _scoreBackground;

private
PathShape _gridShape, _markersShape;

private
float [] _textPosUpper, _textPosLower;

final
Set <Point> _legalMoves = Generics.newHashSet ();

private final
List <Point> _markers = Generics.newArrayList ();

Point _zoomViewPoint;

private final
class BoardGestureListener
	extends GestureDetector.SimpleOnGestureListener
{
	static final
	int _HINT_DISPLAY_TIME_MILLIS = 2000;

	long _lastHintDisplayTime;

	boolean _showHint = true;

	float _cellWidthDIV2, _cellWidthDIV3;

	float _lastX, _lastY;

	Point _lastPoint;

	boolean _stonePositionChanged;

	boolean _wasTapUp;

	boolean _interactionLocked;

	void reset (
		final float pCellWidth
		)
	{
		_cellWidthDIV2 = pCellWidth / 2;
		_cellWidthDIV3 = pCellWidth / 2*3; // todo: no effect ?
		_lastX = _lastY = -pCellWidth -1;
		_lastPoint = null;
		_stonePositionChanged = false;
	}

	void showHint ()
	{
		final long currentTime = System.currentTimeMillis ();
		if (currentTime - _HINT_DISPLAY_TIME_MILLIS < _lastHintDisplayTime)
		{
			return;
		}
		_tapHint.show ();
		_lastHintDisplayTime = currentTime;
	}

	Point coord2Point (
		final float x,
		final float y
		)
	{
		final float activeCellWidth = _activeCellWidth;
		return new Point ((int)(x / activeCellWidth),
			(int)(y / activeCellWidth));
	}

	public
	boolean onScroll (
		final MotionEvent pEvent1,
		final MotionEvent pEvent2,
		final float pDistanceX,
		final float pDistanceY
		)
	{
		if (_interactionLocked)
		{
			return true;
		}
		final float x = pEvent2.getX () - _activeXBoardOffset,
			y = pEvent2.getY () - _activeYBoardOffset;
		final float cellWidth = _activeCellWidth,
			lastX = _lastX, lastY = _lastY;
		if (x < lastX || x > lastX + cellWidth
			|| y < lastY || y > lastY + cellWidth)
		{
			final Point newPoint = coord2Point (x, y);
			if (!_legalMoves.contains (newPoint))
			{
				return true;
			}
			moveStone (newPoint);
		}
		return true;
	}

	void moveStone (
		final Point pNewPoint
		)
	{
		final float cellWidth = _activeCellWidth;
		_lastX = pNewPoint.x * cellWidth;
		_lastY = pNewPoint.y * cellWidth;
		final Point lastPoint = new Point (pNewPoint);
		final String vertex = Gtp.point2Vertex (pNewPoint, _boardSize);
		_mainActivity.showMove (drawMovingStone (pNewPoint, _lastPoint),
			vertex);
		_lastPoint = lastPoint;
		_stonePositionChanged = true;
	}

	public
	boolean onSingleTapUp (
		final MotionEvent pEvent
		)
	{
		if (_interactionLocked)
		{
			return true;
		}
		_wasTapUp = true;
		if (_stonePositionChanged)
		{
			showHint ();
			return true;
		}
		final float x = pEvent.getX () - _activeXBoardOffset,
			y = pEvent.getY () - _activeYBoardOffset,
			cellWidthDVI2 = _cellWidthDIV2, hitRange = _cellWidthDIV3,
			lastX = _lastX + cellWidthDVI2, lastY = _lastY + cellWidthDVI2;
		if (Math.abs (lastX - x) < hitRange && Math.abs (lastY - y) < hitRange)
		{
			setStone ();
		}
		return true;
	}

	void setStone ()
	{
		_showHint = false;
		final Point lastPoint = _lastPoint;
		_lastPoint = null;
		if (lastPoint == null)
		{
			return;
		}
		drawMovingStone (new Point (lastPoint), false);
		_mainActivity.nextMove (lastPoint);
	}

	void moveStoneIncrementally (
		int pDiffX,
		int pDiffY
		)
	{
		if (_interactionLocked)
		{
			return;
		}
		Point lastPoint = _lastPoint;
		if (pDiffX == 0 && pDiffY == 0)
		{
			if (lastPoint != null)
			{
				setStone ();
			}
			return;
		}

		final Set <Point> legalMoves = _legalMoves;
		if (lastPoint == null)
		{
			if (legalMoves.size () == 0)
			{
				_stonePositionChanged = false;
				return;
			}
			lastPoint = legalMoves.iterator ().next ();
			pDiffX = pDiffY = 0;
		}
		int newX = lastPoint.x, newY = lastPoint.y;
		final int boardSize = _boardSize;
		final Point newPoint = new Point ();
		do
		{
			newX += pDiffX; newY += pDiffY;
			if (newX < 0 || newX == boardSize
				|| newY < 0 || newY == boardSize)
			{
				return;
			}
			newPoint.set (newX, newY);
		}
		while (!legalMoves.contains (newPoint));
		moveStone (newPoint);
	}

	void onUp ()
	{
		if (_interactionLocked)
		{
			return;
		}
		if (!_wasTapUp)
		{
			showHint ();
		}
		_wasTapUp = false;
	}

	public
	boolean onDown (
		final MotionEvent pMotionEvent
		)
	{
		if (_interactionLocked)
		{
			return true;
		}
		_stonePositionChanged = false;
		return onScroll (null, pMotionEvent, 0, 0);
	}

	public
	void onLongPress (
		final MotionEvent pEvent
		)
	{
		if (_interactionLocked)
		{
			return;
		}
		if (_isZoom)
		{
			_isZoom = false;
		}
		else
		{
			_isZoom = true;
			final Point lastPoint = _lastPoint;
			_zoomViewPoint = _legalMoves.contains (lastPoint) ? lastPoint
				: coord2Point (pEvent.getX (), pEvent.getY ());
		}
		_mainActivity.drawBoard (false);
		_wasTapUp = true;
	}
}

public
BoardView ( // 1
	final Context pContext,
	final AttributeSet pAttrs
	)
{
	super (pContext, pAttrs);
	final MainActivity mainActivity = ((MainActivity)pContext);
	_boardView = this;
	final Resources resources = _resources;
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
		new BoardGestureListener ();
	_gestureDetector = new GestureDetector (pContext, gestureListener);
}

public
void surfaceCreated ( // 3
	final SurfaceHolder pHolder
	)
{
}

public
void surfaceDestroyed (
	final SurfaceHolder pHolder
	)
{
}

public
void surfaceChanged ( // 4
	final SurfaceHolder pHolder,
	final int pFormat,
	final int pWidth,
	final int pHeight
	)
{
	final boolean isLandscape = pWidth > pHeight;
	final int boardWidth = isLandscape ? pHeight : pWidth;

	final MainActivity mainActivity = _mainActivity;
	final View scoreView = _scoreView;
	final int scoreWidth = scoreView.getWidth (),
		scoreHeight = scoreView.getHeight ();
	final Bitmap backgroundBitmap = Bitmap.createBitmap (scoreWidth,
		scoreHeight, _bitmapConfig);
	final Resources resources = _resources;
	final Drawable drawable = resources.getDrawable (R.drawable.painting);
	final int drawableWidth = drawable.getIntrinsicWidth (),
		drawableHeight = drawable.getIntrinsicHeight ();
	drawable.setBounds (0, 0, drawableWidth, drawableHeight);
	final Canvas canvas = new Canvas (backgroundBitmap);
	canvas.scale (
		(float)scoreWidth / drawableWidth, (float)scoreHeight / drawableHeight);
	drawable.draw (canvas);
	try
	{
		_scoreBackground =
			new BitmapDrawable (resources, backgroundBitmap);
	}
	catch (final Exception e) {}
	showScoreBackground (true);
	mainActivity.sizeScoreViewTexts (scoreWidth, scoreHeight);

	final Bitmap boardBitmap = _boardBitmap;
	if (boardBitmap != null && _boardWidth == boardWidth)
	{
		drawBoard2Surface ();
		return;
	}
	if (boardBitmap == null)
	{
		_boardBitmap = Bitmap.createBitmap (pWidth, pHeight, _bitmapConfig);
		_boardWidth = pWidth; _boardHeight = pHeight;
		if (isLandscape)
		{
			_yBoardOffset = 0;
			_xBoardOffset = (pWidth - pHeight) / 2;
		}
		else
		{
			_yBoardOffset = (pHeight - pWidth) / 2;
			_xBoardOffset = 0;
		}
		mainActivity.newGame ();
	}
	else
	{
		mainActivity.drawBoard (true);
	}
}

void initBoard (
	final int pSize
	)
{
	_boardSize = pSize;
	final int boardW = _boardWidth, boardH = _boardHeight,
		realBoardWidth = boardW > boardH ? boardH : boardW;
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

	final Resources resources = _resources;
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
	final float markerRadius = 36 * shapeFactor/pSize,
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

	final Resources resources = _resources;
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

	paint.setTextAlign (Paint.Align.CENTER);
	paint.setTextSize (realCellWidthDIV2 - 2);
	final int sizeMin1 = size -1;
	final float realCellWidhtDIV4 = realCellWidthDIV2 / 2,
		textYOffset = realCellWidthDIV2 + realCellWidhtDIV4,
		textXPos = (boardWidth > boardHeight ? boardHeight : boardWidth)
			- realCellWidhtDIV4;
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
	canvas.drawPosText (lettersText, 0, sizeMin1, _textPosUpper, paint);
	canvas.drawPosText (lettersText, 0, size, _textPosLower, paint);
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

private
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
	if (pPoint instanceof GameInfo.Passed)
	{
		return;
	}
	final float cellWidth = _activeCellWidth;
	pPoint.set (
		(int)(pPoint.x * cellWidth + _activeXBoardOffset),
		(int)(pPoint.y * cellWidth + _activeYBoardOffset));
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
	final Set <Point> legalMoves = _legalMoves;
	legalMoves.clear ();
	if (pPoints != null)
	{
		legalMoves.addAll (pPoints);
	}
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

void showScoreBackground (
	final boolean pShow
	)
{
	_scoreView.setBackgroundDrawable (
		pShow ? _scoreBackground : null);
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
	}
	return true;
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

boolean interactionLocked ()
{
	return _gestureListener._interactionLocked;
}
}