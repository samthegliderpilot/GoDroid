package de.agrothe.util;

import android.util.Log;

public
class Logging 
{
static final
int _MAX_LOG_TAG_LENGTH = 23;

public static
String buidLogTag (
	final String pTagName
	)
{
	final int length = pTagName.length ();
	return length <= _MAX_LOG_TAG_LENGTH ? pTagName :
		pTagName.substring (length - _MAX_LOG_TAG_LENGTH);
}

public static
boolean isEnabledFor (
	final String pTag,
	final int pLevel
	)
{
	return Log.isLoggable (pTag, pLevel < Log.INFO ? Log.INFO : pLevel);
}

public static
void log (
	final String pTag,
	final int pLevel,
	final Object pMessage
	)
{
	final String message = pMessage == null ? "null"
		: (pMessage instanceof String ?
			(String)pMessage : pMessage.toString ());
	switch (pLevel)
	{
	case Log.VERBOSE:
		Log.v (pTag, message);
		break;
	case Log.DEBUG:
		Log.d (pTag, message);
		break;
	case Log.WARN:
		Log.w (pTag, message);
		break;
	case Log.ERROR:
		Log.e (pTag, message);
		break;
	default:
	case Log.INFO:
		Log.i (pTag, message);
		break;
	}
}
}
