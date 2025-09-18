package com.samthegliderpilot.util;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.util.List;

import android.content.res.AssetManager;
import android.util.Log;
import com.samthegliderpilot.godroid.MainActivity;
import static com.samthegliderpilot.util.Logging.isEnabledFor;
import static com.samthegliderpilot.util.Logging.log;

public
class AssetsManager
{
static private final
String _F_SEP = File.separator;

public static
List <File> extractAssetFiles (
	final AssetManager pAssetManager,
	final String [] pIgnoredDirs,
	final File pOutputDir,
	final String pParentPath
	)
{
	final List <File> filesList = Generics.newArrayList ();
	return extractAssetFiles (pAssetManager, pIgnoredDirs, pOutputDir,
		filesList, pParentPath, true);
}

public static
List <File> extractAssetFiles (
	final AssetManager pAssetManager,
	final String [] pIgnoredDirs,
	final File pOutputDir,
	final List <File> pFilesList,
	final String pParentPath,
	final boolean pIsRoot
	)
{
	final String targetPath = pOutputDir.getAbsolutePath();
	InputStream is = null;
	try
	{
		if (!pIsRoot && !ignoreFile (pParentPath, pIgnoredDirs))
		{
			new File (targetPath + _F_SEP + pParentPath).mkdirs ();
		}
		for (String fileName : pAssetManager.list (pParentPath))
		{
			if (ignoreFile (fileName, pIgnoredDirs))
			{
				continue;
			}
			try
			{
				is = pAssetManager.open (pParentPath + _F_SEP +
					fileName, AssetManager.ACCESS_BUFFER);
				final String filepath = targetPath +
					(pIsRoot ? "" : _F_SEP + pParentPath) + _F_SEP + fileName;
				final File file = copyFile (is, filepath);
				if (file != null)
				{
					pFilesList.add (file);
				}
				if (isEnabledFor (MainActivity._LOG_TAG, Log.DEBUG))
				{
					log (MainActivity._LOG_TAG, Log.DEBUG,
						"Copied asset file: " + filepath);
				}
			}
			catch (final Exception e)
			{
				try
				{
					if (is != null)
					{
						is.close ();
					}
				}
				catch (final Exception ignored) {}
				//maybe this a directory
				extractAssetFiles (pAssetManager, pIgnoredDirs, pOutputDir,
					pFilesList, (pIsRoot ? "" : pParentPath + "/") + fileName,
					false);
			}
		}
	}
	catch (final Exception e)
	{
		if (isEnabledFor (MainActivity._LOG_TAG, Log.ERROR))
		{
			log (MainActivity._LOG_TAG, Log.ERROR,
				"extractAssetFiles: " + e);
		}
	}
	return pFilesList;
}

public static
File copyFile (
	final InputStream pInputStream,
	final String pPath
	)
	throws Exception
{
	File file = null;
	try
	{
		if (pInputStream == null || pPath == null)
		{
			return null;
		}
		file = new File (pPath);
		if (file.exists ())
		{
			file.delete ();
		}
		file.createNewFile ();
		file.deleteOnExit ();
		copyFile (pInputStream, new FileOutputStream (file));
	}
	catch (final Exception e)
	{
		if (pInputStream != null)
		{
			pInputStream.close ();
		}
	}
	return file;
}

public static
void copyFile (
	InputStream pInputStream,
	OutputStream pOutputStream
	)
	throws Exception
{
	try
	{
		if (pInputStream == null || pOutputStream == null)
		{
			throw new Exception ("copyFile: input or output == null");
		}
		pInputStream = new BufferedInputStream (pInputStream);
		pOutputStream = new BufferedOutputStream (pOutputStream);
		final byte[] buffer = new byte[1024];
		int len;
		while ((len = pInputStream.read (buffer)) > 0)
		{
			pOutputStream.write (buffer, 0, len);
		}
	}
	finally
	{
		try
		{
			if (pInputStream != null)
			{
				pInputStream.close ();
			}
			if (pOutputStream != null)
			{
				pOutputStream.close ();
			}
		}
		catch (final Exception ignored) {}
	}
}

private static
boolean ignoreFile (
	final String pPath,
	final String [] pIgnoredDirs
	)
{
	if (pIgnoredDirs == null)
	{
		return false;
	}
	for (final String ignoreDir : pIgnoredDirs)
	{
		if (ignoreDir.equals (pPath))
		{
			return true;
		}
	}
	return false;
}
}
