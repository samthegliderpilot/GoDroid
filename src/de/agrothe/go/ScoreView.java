package de.agrothe.go;

import android.content.Context;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.widget.RelativeLayout;

public
class ScoreView
	extends RelativeLayout
{
GestureDetector _gestureDetector;

public
ScoreView (
	final Context pContext,
	final AttributeSet pAttributeSet
	)
{
	super (pContext, pAttributeSet);
}

public
boolean onTouchEvent (
	final MotionEvent pEvent
	)
{
	_gestureDetector.onTouchEvent (pEvent);
	return true;
}
}
