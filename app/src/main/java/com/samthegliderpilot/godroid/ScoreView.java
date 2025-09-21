package com.samthegliderpilot.godroid;

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

	@Override
	public boolean performClick() {
		super.performClick();
		// Handle click behavior here, or just leave it empty if no extra action needed
		return true;
	}
}
