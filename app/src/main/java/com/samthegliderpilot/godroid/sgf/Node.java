package com.samthegliderpilot.godroid.sgf;

import java.io.BufferedReader;
import java.io.Reader;
import java.io.StringReader;
import java.io.StringWriter;
import java.io.Writer;
import java.util.List;
import java.util.Map;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import com.samthegliderpilot.util.Generics;

public
class Node
{
static final
int _IN_BUF_SIZE = 1024;

static final
String _PROPERTY_VALUE_PATTERN = ".*%s[^\\[]*\\[([^]]+)\\].*";

static final
Matcher
	_GAME_NAME_MATCHER = Pattern.compile (
		String.format (Locale.US, _PROPERTY_VALUE_PATTERN,
			PropertyName.GameName._ident)).matcher (""),
	_GAME_TYPE_MATCHER = Pattern.compile (
		String.format (Locale.US, _PROPERTY_VALUE_PATTERN,
			PropertyName.GameType._ident)).matcher ("");

protected static
_Logger _logger = new _Logger()
{
	public
	void log (
		final String pMessage
		)
	{
	}
};

protected static
boolean _loggingEnabled = false;

public
List <Node> _children;

Node _parent;

public static
class PropertyNode
	extends Node
{
static final
String _VALUE_PATTERN = "\\s*\\[(([^]]|\\\\])*)\\]";

static final
Pattern _nodePattern = Pattern.compile (
		"\\s*([A-Z]+)((" + _VALUE_PATTERN + ")+)"),
	_valuePattern = Pattern.compile (_VALUE_PATTERN);

protected static final
Map <String, PropertyName> _identPropertyNameMap;
static
{
	final PropertyName[] properties = PropertyName.values ();
	final Map <String, PropertyName> identPropertyMap =
		_identPropertyNameMap = Generics.newHashMap (properties.length);
	for (final PropertyName property : properties)
	{
		identPropertyMap.put (property._ident, property);
	}
}

final
Map <PropertyName, List <String>> _properties = Generics.newLinkedHashMap (1);

PropertyNode (
	final Node pParent
	)
{
	super (pParent);
}

public
PropertyNode (
	final Node pParent,
	final PropertyName.Property pProp
	)
{
	super (pParent);
	pParent.addChildNode (this);
	addProperty (pProp);
}

public
PropertyNode addPropertyNode (
	final PropertyName.Property pProp
	)
{
	PropertyNode propNode;
	final List <Node> children = _children;
	if (children == null || children.isEmpty ())
	{
		addChildNode (propNode = new PropertyNode (this));
	}
	else
	{
		Node childPropNode, newChildNode;
		if (children.size () == 1
			&& (childPropNode = children.get (0)) instanceof PropertyNode)
		{
			final PropertyNode childNode = (PropertyNode)childPropNode;
			if (childNode.containsPropertyValue (pProp))
			{
				return childNode;
			}
			children.clear ();
			newChildNode = add2Children (new Node (this));
			childPropNode._parent = newChildNode;
			newChildNode.add2Children (childPropNode);
		}
		else
		{
			for (final Node node : children)
			{
				final PropertyNode nodePropNode = node.firstPropertyNode ();
				if (nodePropNode != null
					&& nodePropNode.containsPropertyValue (pProp))
				{
					return nodePropNode;
				}
			}
		}
		newChildNode = add2Children (new Node (this));
		newChildNode.addChildNode (propNode =
			new PropertyNode (newChildNode));
	}
	propNode.addProperty (pProp);
	return propNode;
}

public
PropertyNode addProperty (
	final PropertyName.Property pProp
	)
{
	if (pProp == null)
	{
		return this;
	}
	final Map <PropertyName, List <String>> properties = _properties;
	final PropertyName name = pProp._name;
	if (!properties.containsKey (name))
	{
		final List <String> value = Generics.newArrayList (1);
		value.add (pProp._value.trim ());
		properties.put (name, value);
		return this;
	}
	if (!PropertyName._listTypes.contains (name._type))
	{
		properties.get (name).clear ();
	}
	properties.get (name).add (pProp._value);
	return this;
}

public
void removeProperty (
	final PropertyName.Property pProp
	)
{
	_properties.remove (pProp._name);
}

void readNode (
	final String pIn
	)
	throws Exception
{
	final _Logger logger = _logger;
	final boolean loggingEnabled = _loggingEnabled;
	if (loggingEnabled)
	{
		logger.log ("-> " + pIn);
	}
	final Matcher nodeMatcher = _nodePattern.matcher (pIn);
	while (nodeMatcher.find ())
	{
		final String propName = nodeMatcher.group (1);
		if (loggingEnabled)
		{
			logger.log ("\t" + propName
				+ " : " + nodeMatcher.group (2));
		}
		final PropertyName propertyName =
			_identPropertyNameMap.get (propName);
		if (propertyName == null)
		{
			continue;
//			throw new Exception ("unidentified property name: '"
//				+ propName + "'");
		}
		final List <String> values = Generics.newArrayList ();
		final Matcher valueMatcher =
			_valuePattern.matcher (nodeMatcher.group (2));
		while (valueMatcher.find ())
		{
			final String value = valueMatcher.group (1);
			if (loggingEnabled)
			{
				logger.log ("\t\t" + value);
			}
			values.add (value.trim ());
		}
		_properties.put (propertyName, values);
	}
}

// too many recursions for devices with limited per App memory (ie. 1.6 G1)
// -> stack overflow
/*
public
void writeNode (
	final Writer pWriter
	)
	throws Exception
{
	pWriter.write (';');
	final Map <PropertyName, List <String>> properties = _properties;
	for (final PropertyName propertyName : properties.keySet ())
	{
		pWriter.write (propertyName._ident);
		for (final String value : properties.get (propertyName))
		{
			pWriter.write ('[');
			pWriter.write (value);
			pWriter.write (']');
		}
	}
	if (_children == null)
	{
		return;
	}
	for (final Node child : _children)
	{
		child.writeNode (pWriter);
	}
}
*/

public
void writeNode (
	final Writer pWriter
	)
	throws Exception
{
	PropertyNode currentNode = this;
	while (true)
	{
		pWriter.write (';');
		final Map <PropertyName, List <String>> properties =
			currentNode._properties;
		for (final PropertyName propertyName : properties.keySet ())
		{
			pWriter.write (propertyName._ident);
			for (final String value : properties.get (propertyName))
			{
				pWriter.write ('[');
				pWriter.write (value);
				pWriter.write (']');
			}
		}
		final List <Node> children = currentNode._children;
		if (children == null || children.isEmpty ())
		{
			return;
		}
		final Node propertyChild;
		if (children.size () == 1
			&& (propertyChild = children.get (0)) instanceof PropertyNode)
		{
			currentNode = (PropertyNode)propertyChild;
		}
		else
		{
			for (final Node child : children)
			{
				if (child != null)
				{
					child.writeNode (pWriter);
				}
			}
			return;
		}
	}
}

public
List <String> getPropertyValues (
	final PropertyName pPropertyName
	)
{
	return _properties.get (pPropertyName);
}

public
String getPropertyValue (
	final PropertyName pPropertyName
	)
{
	final List <String> values = getPropertyValues (pPropertyName);
	return values == null || values.size () != 1 ? null : values.get (0);
}

public
boolean containsPropertyValue (
	final PropertyName.Property pProp
	)
{
	final String value = getPropertyValue (pProp._name);
	return value != null && value.equals (pProp._value);
}
}

public
Node (
	final Node pParent
	)
{
	_parent = pParent;
}

public
Node (
	final Reader pReader,
	final Node pParent,
	final long pOffset,
	final long pNumChars
	)
	throws Exception
{
	this (pParent);
	readTree (pReader, null, pOffset, pNumChars);
}

public
Node (
	final Reader pReader,
	final _Logger pLogger,
	final Node pParent
	)
	throws Exception
{
	this (pParent);
	_logger = pLogger;
	_loggingEnabled = true;
	readTree (pReader, null, 0, 0);
}

Node (
	final String pNodeList,
	final Node pParent
	)
	throws Exception
{
	this (pParent);
	if (_loggingEnabled)
	{
		_logger.log (pNodeList + '\n');
	}
	readNodes (pNodeList);
}

int readTree (
	final Reader pIn,
	final Node pNode,
	final long pOffset,
	long pNumChars
	)
	throws Exception
{
	try
	{
		if (pIn == null)
		{
			throw new Exception ("InputStream == null");
		}
		if (pOffset > 0)
		{
			pIn.skip (pOffset);
		}
		final char[] inBuf = new char[_IN_BUF_SIZE];
		int readChars, currIdx = 0;
		int startTreeCount = 0, treeStartIdx = 0;
		boolean inPropertyValue = false;
		char prevChar = 0;
		StringBuilder treeString = new StringBuilder ();
		while ((readChars = pIn.read (inBuf)) != -1)
		{
			for (int byteIdx = 0; byteIdx < readChars; byteIdx++)
			{
				final char currChar = inBuf [byteIdx];
				treeString.append (currChar);
				switch (currChar)
				{
				case '[':
					if (!inPropertyValue)
					{
						inPropertyValue = true;
					}
					break;
				case ']':
					if (prevChar != '\\')
					{
						inPropertyValue = false;
					}
					break;
				case '(':
					if (!inPropertyValue)
					{
						if (startTreeCount == 0)
						{
							treeStartIdx = currIdx;
						}
						startTreeCount++;
					}
					break;
				case ')':
					if (!inPropertyValue)
					{
						startTreeCount--;
						if (startTreeCount == 0)
						{
							final String tree = treeString.substring (
								treeStartIdx +1, currIdx);
							final Node newNode = new Node (tree, pNode);
							if (pNode != null)
							{
								pNode.add2Children (newNode);
								return currIdx;
							}
							add2Children (newNode);
							treeString = new StringBuilder ();
							treeStartIdx = 0;
							currIdx = -1;
						}
					}
					break;
				}
				if (pNumChars > 0 && --pNumChars == 0)
				{
					return 0;
				}
				prevChar = currChar;
				currIdx++;
			}
		}
	}
	catch (final Exception e)
	{
		throw new Exception ("failed reading input: " + e);
	}
	finally
	{
		if (pIn != null)
		{
			try
			{
				pIn.close ();
			}
			catch (final Exception ignored) {}
		}
	}
	return 0;
}

public static
boolean readCollectionIndices (
	final Reader pIn,
	final List <Long> pOffsets,
	final List <Long> pNumChars,
	final List <String> pNames
	)
	throws Exception
{
	try
	{
		if (pIn == null)
		{
			throw new Exception ("InputStream == null");
		}
		final char[] inBuf = new char[_IN_BUF_SIZE];
		int readChars, startTreeCount = 0, numTree = 1;
		long currIdx = 0, startIdx = 0;
		boolean inPropertyValue = false;
		char prevChar = 0;
		StringBuilder tree = new StringBuilder ();
		final Matcher gameTypeMatcher = _GAME_TYPE_MATCHER,
			gameNameMatcher = _GAME_NAME_MATCHER;
		while ((readChars = pIn.read (inBuf)) != -1)
		{
			for (int byteIdx = 0; byteIdx < readChars; byteIdx++)
			{
				final char currChar = inBuf [byteIdx];
				tree.append (currChar);
				switch (currChar)
				{
				case '[':
					if (!inPropertyValue)
					{
						inPropertyValue = true;
					}
					break;
				case ']':
					if (prevChar != '\\')
					{
						inPropertyValue = false;
					}
					break;
				case '(':
					if (!inPropertyValue)
					{
						startTreeCount++;
					}
					break;
				case ')':
					if (!inPropertyValue)
					{
						startTreeCount--;
						if (startTreeCount == 0)
						{
							String treeStr = tree.toString ().
							// maybe not portable to non Android platforms
								replaceAll ("[[\\s]--[ ]]", "");
							tree = new StringBuilder ();
							gameTypeMatcher.reset (treeStr);
							final long thisStartIdx = startIdx;
							startIdx = currIdx +1;
							if (gameTypeMatcher.matches ())
							{
								final String goType = gameTypeMatcher.group (1);
								if (goType != null
									&& !PropertyName._GO_GAME_NUMBER.equals (
										goType.trim ()))
								{
									break;
								}
							}
							pOffsets.add (thisStartIdx);
							pNumChars.add (currIdx - thisStartIdx +1);
							gameNameMatcher.reset (treeStr);
							String name = null;
							if (gameNameMatcher.matches ())
							{
								name = gameNameMatcher.group (1);
							}
							pNames.add (String.valueOf (numTree)
								+ (name == null ? "" : (" " + name.trim ())));
							numTree++;
						}
					}
					break;
				}
				prevChar = currChar;
				currIdx++;
			}
		}
	}
	catch (final Exception e)
	{
		throw new Exception ("failed reading input: " + e);
	}
	finally
	{
		if (pIn != null)
		{
			try
			{
				pIn.close ();
			}
			catch (final Exception ignored) {}
		}
	}
	return pOffsets.size () > 1;
}

void readNodes (
	String pIn
	)
	throws Exception
{
	PropertyNode nextNode = new PropertyNode (this);
	boolean inPropertyValue = false;
	int numChars = pIn.length ();
	int nodeStartIdx = -1;
	char prevChar = 0;
	for (int charIdx = 0; charIdx < numChars; charIdx++)
	{
		final char c = pIn.charAt (charIdx);
		switch (c)
		{
		case '(':
			if (!inPropertyValue)
			{
				if (nodeStartIdx != -1)
				{
					newPropertyNode (nextNode,
						pIn.substring (nodeStartIdx +1, charIdx));
					nodeStartIdx = -1;
				}
				final int treeLen = readTree (
					new BufferedReader (new StringReader (
						pIn.substring (charIdx))),
					nextNode, 0, 0);
				charIdx = charIdx + treeLen;
			}
			break;
		case '[':
			if (!inPropertyValue)
			{
				inPropertyValue = true;
			}
			break;
		case ']':
			if (prevChar != '\\')
			{
				inPropertyValue = false;
			}
			break;
		case ';':
			if (!inPropertyValue)
			{
				if (nodeStartIdx != -1)
				{
					nextNode = newPropertyNode (nextNode,
						pIn.substring (nodeStartIdx +1, charIdx));
				}
				nodeStartIdx = charIdx;
			}
			break;
		}
		prevChar = c;
	}
	if (nodeStartIdx != -1)
	{
		newPropertyNode (nextNode, pIn.substring (nodeStartIdx +1));
	}
}

PropertyNode newPropertyNode (
	final PropertyNode pNode,
	final String pIn
	)
	throws Exception
{
	pNode._parent.addChildNode (pNode).readNode (pIn);
	return new PropertyNode (pNode);
}

Node add2Children (
	final Node pNode
	)
{
	List <Node> children = _children;
	if (_children == null)
	{
		children = _children = Generics.newArrayList (1);
	}
	children.add (pNode);
	return pNode;
}

public
PropertyNode addChildNode (
	final PropertyNode pChildNode
	)
{
	add2Children (pChildNode);
	pChildNode._parent = this;
	return pChildNode;
}

PropertyNode nextPropertyNode (
	final boolean pTraverseChildren
	)
{
	if (pTraverseChildren && this instanceof PropertyNode
		&& _children != null && !_children.isEmpty ())
	{
		final Node firstChild = _children.get (0);
		return firstChild instanceof PropertyNode ?
			(PropertyNode)firstChild : firstChild.firstPropertyNode ();
	}
	Node currentNode = this;
	List <Node> siblings;
	int myIdx;
	while (true)
	{
		final Node parent = currentNode._parent;
		if (parent == null || (siblings = parent._children) == null
			|| siblings.isEmpty ())
		{
			return null;
		}
		myIdx = siblings.indexOf (currentNode);
		if (myIdx != -1 && myIdx != siblings.size () -1)
		{
			break;
		}
		currentNode = parent;
	}
	final Node nextNode = siblings.get (myIdx +1);
	if (nextNode == null)
	{
		return null;
	}
	if (nextNode instanceof PropertyNode)
	{
		return (PropertyNode)nextNode;
	}
	return nextNode.firstPropertyNode ();
}

// too many recursions for devices with limited per App memory (ie. 1.6 G1)
// -> stack overflow
/*
PropertyNode nextPropertyNode (
	final boolean pTraverseChildren
	)
{
	if (pTraverseChildren && this instanceof PropertyNode
		&& _children != null && !_children.isEmpty ())
	{
		final Node firstChild = _children.get (0);
		return firstChild instanceof PropertyNode ?
			(PropertyNode)firstChild : firstChild.firstPropertyNode ();
	}
	Node parent = _parent;
	final List <Node> siblings;
	if (parent == null || (siblings = parent._children) == null
		|| siblings.isEmpty ())
	{
		return null;
	}
	final int myIdx = siblings.indexOf (this);
	if (myIdx == -1 || myIdx == siblings.size () -1)
	{
		return parent.nextPropertyNode (false);
	}
	final Node nextNode = siblings.get (myIdx +1);
	if (nextNode == null)
	{
		return null;
	}
	if (nextNode instanceof PropertyNode)
	{
		return (PropertyNode)nextNode;
	}
	return nextNode.firstPropertyNode ();
}
*/

public
PropertyNode nextPropertyNode ()
{
	return nextPropertyNode (true);
}

public
PropertyNode previousPropertyNode ()
{
	final Node parent = _parent;
	if (parent == null)
	{
		return null;
	}
	return parent instanceof PropertyNode ?
		(PropertyNode)parent : parent.previousPropertyNode ();
}

public
List <PropertyNode> nextPropertyNodes ()
{
	final List <PropertyNode> nextNodes = Generics.newArrayList (1);
	final List <Node> children = _children;
	if (children != null)
	{
		for (final Node child : children)
		{
			if (child instanceof PropertyNode)
			{
				nextNodes.add ((PropertyNode)child);
				break;
			}
			nextNodes.addAll (child.nextPropertyNodes ());
		}
	}
	return nextNodes;
}

PropertyNode firstLastPropertyNode (
	final boolean pGetFirst
	)
{
	final List <Node> children = _children;
	if (children == null)
	{
		return null;
	}
	final Node firstChild = children.get (pGetFirst ? 0 : children.size () -1);
	if (firstChild == null || !(firstChild instanceof PropertyNode))
	{
		return null;
	}
	return (PropertyNode)firstChild;
}

public
PropertyNode firstPropertyNode ()
{
	return firstLastPropertyNode (true);
}

public
PropertyNode lastPropertyNode ()
{
	return firstLastPropertyNode (false);
}

public
void writeNode (
	final Writer pWriter
	)
	throws Exception
{
	if (_children == null)
	{
		return;
	}
	pWriter.write ('(');
	for (final Node child : _children)
	{
		child.writeNode (pWriter);
	}
	pWriter.write (')');
}

public
String toString ()
{
	StringWriter stringWriter = null;
	try
	{
		stringWriter = new StringWriter ();
		writeNode (stringWriter);
		stringWriter.close ();
		return stringWriter.toString ();
	}
	catch (final Exception e)
	{
		return "";
	}
	finally
	{
		if (stringWriter != null)
		{
			try
			{
				stringWriter.close ();
			}
			catch (final Exception ignored) {}
		}
	}
}
}
