package com.samthegliderpilot.godroid.sgf

import com.samthegliderpilot.util.Generics
import java.io.BufferedReader
import java.io.Reader
import java.io.StringReader
import java.io.StringWriter
import java.io.Writer
import java.util.Locale
import java.util.regex.Matcher
import java.util.regex.Pattern

open class Node(@JvmField var _parent: Node?) {

    @JvmField
    var _children: MutableList<Node>? = null

    constructor(
        pReader: Reader,
        pParent: Node?,
        pOffset: Long,
        pNumChars: Long
    ) : this(pParent) {
        readTree(pReader, null, pOffset, pNumChars)
    }

    constructor(
        pReader: Reader,
        pLogger: _Logger,
        pParent: Node?
    ) : this(pParent) {
        _logger = pLogger
        _loggingEnabled = true
        readTree(pReader, null, 0, 0)
    }

    internal constructor(pNodeList: String, pParent: Node?) : this(pParent) {
        if (_loggingEnabled) {
            _logger.log(pNodeList + '\n')
        }
        readNodes(pNodeList)
    }

    open class PropertyNode : Node {

        constructor(pParent: Node) : super(pParent)

        constructor(pParent: Node, pProp: PropertyName.Property) : super(pParent) {
            pParent.addChildNode(this)
            addProperty(pProp)
        }

        val _properties: MutableMap<PropertyName, MutableList<String>> =
            Generics.newLinkedHashMap(1)

        fun addPropertyNode(pProp: PropertyName.Property): PropertyNode {
            var propNode: PropertyNode
            val children = _children
            if (children == null || children.isEmpty()) {
                propNode = PropertyNode(this)
                addChildNode(propNode)
            } else {
                val childPropNode = children[0]
                if (children.size == 1 && childPropNode is PropertyNode) {
                    if (childPropNode.containsPropertyValue(pProp)) {
                        return childPropNode
                    }
                    children.clear()
                    val newChildNode = add2Children(Node(this))
                    childPropNode._parent = newChildNode
                    newChildNode.add2Children(childPropNode)
                } else {
                    for (node in children) {
                        val nodePropNode = node.firstPropertyNode()
                        if (nodePropNode != null && nodePropNode.containsPropertyValue(pProp)) {
                            return nodePropNode
                        }
                    }
                }
                val newChildNode = add2Children(Node(this))
                propNode = PropertyNode(newChildNode)
                newChildNode.addChildNode(propNode)
            }
            propNode.addProperty(pProp)
            return propNode
        }

        fun addProperty(pProp: PropertyName.Property?): PropertyNode {
            if (pProp == null) {
                return this
            }
            val properties = _properties
            val name = pProp.name
            if (!properties.containsKey(name)) {
                val value = Generics.newArrayList<String>(1)
                value.add(pProp.value.trim())
                properties[name] = value
                return this
            }
            if (!PropertyName._listTypes.contains(name.type)) {
                properties[name]!!.clear()
            }
            properties[name]!!.add(pProp.value)
            return this
        }

        fun removeProperty(pProp: PropertyName.Property) {
            _properties.remove(pProp.name)
        }

        fun readNode(pIn: String) {
            val logger = _logger
            val loggingEnabled = _loggingEnabled
            if (loggingEnabled) {
                logger.log("-> $pIn")
            }
            val nodeMatcher = _nodePattern.matcher(pIn)
            while (nodeMatcher.find()) {
                val propName = nodeMatcher.group(1)
                if (loggingEnabled) {
                    logger.log("\t$propName : ${nodeMatcher.group(2)}")
                }
                val propertyName = _identPropertyNameMap[propName!!] ?: continue
                val values = Generics.newArrayList<String>()
                val valueMatcher = _valuePattern.matcher(nodeMatcher.group(2)!!)
                while (valueMatcher.find()) {
                    val value = valueMatcher.group(1)!!
                    if (loggingEnabled) {
                        logger.log("\t\t$value")
                    }
                    values.add(value.trim())
                }
                _properties[propertyName] = values
            }
        }

        // The recursive version below ("too many recursions for devices with limited
        // per App memory (ie. 1.6 G1) -> stack overflow") is kept only as history in
        // the original Java; this iterative version is the real implementation.
        override fun writeNode(pWriter: Writer) {
            var currentNode: PropertyNode = this
            while (true) {
                pWriter.write(';'.code)
                val properties = currentNode._properties
                for (propertyName in properties.keys) {
                    pWriter.write(propertyName.ident)
                    for (value in properties[propertyName]!!) {
                        pWriter.write('['.code)
                        pWriter.write(value)
                        pWriter.write(']'.code)
                    }
                }
                val children = currentNode._children
                if (children == null || children.isEmpty()) {
                    return
                }
                val propertyChild = children[0]
                if (children.size == 1 && propertyChild is PropertyNode) {
                    currentNode = propertyChild
                } else {
                    for (child in children) {
                        child?.writeNode(pWriter)
                    }
                    return
                }
            }
        }

        fun getPropertyValues(pPropertyName: PropertyName): List<String>? =
            _properties[pPropertyName]

        fun getPropertyValue(pPropertyName: PropertyName): String? {
            val values = getPropertyValues(pPropertyName)
            return if (values == null || values.size != 1) null else values[0]
        }

        fun containsPropertyValue(pProp: PropertyName.Property): Boolean {
            val value = getPropertyValue(pProp.name)
            return value != null && value == pProp.value
        }

        companion object {
            const val _VALUE_PATTERN = "\\s*\\[((?:[^]]|\\\\])*)\\]"

            val _nodePattern: Pattern =
                Pattern.compile("\\s*([A-Z]+)((${_VALUE_PATTERN})+)")
            val _valuePattern: Pattern = Pattern.compile(_VALUE_PATTERN)

            val _identPropertyNameMap: Map<String, PropertyName> = run {
                val properties = PropertyName.values()
                val identPropertyMap =
                    Generics.newHashMap<String, PropertyName>(properties.size)
                for (property in properties) {
                    identPropertyMap[property.ident] = property
                }
                identPropertyMap
            }
        }
    }

    open fun readTree(
        pIn: Reader?,
        pNode: Node?,
        pOffset: Long,
        pNumChars: Long
    ): Int {
        var numCharsLeft = pNumChars
        try {
            if (pIn == null) {
                throw Exception("InputStream == null")
            }
            if (pOffset > 0) {
                pIn.skip(pOffset)
            }
            val inBuf = CharArray(_IN_BUF_SIZE)
            var currIdx = 0
            var startTreeCount = 0
            var treeStartIdx = 0
            var inPropertyValue = false
            var prevChar = 0.toChar()
            var treeString = StringBuilder()
            var readChars: Int
            while (pIn.read(inBuf).also { readChars = it } != -1) {
                for (byteIdx in 0 until readChars) {
                    val currChar = inBuf[byteIdx]
                    treeString.append(currChar)
                    when (currChar) {
                        '[' -> {
                            if (!inPropertyValue) {
                                inPropertyValue = true
                            }
                        }
                        ']' -> {
                            if (prevChar != '\\') {
                                inPropertyValue = false
                            }
                        }
                        '(' -> {
                            if (!inPropertyValue) {
                                if (startTreeCount == 0) {
                                    treeStartIdx = currIdx
                                }
                                startTreeCount++
                            }
                        }
                        ')' -> {
                            if (!inPropertyValue) {
                                startTreeCount--
                                if (startTreeCount == 0) {
                                    val tree = treeString.substring(treeStartIdx + 1, currIdx)
                                    val newNode = Node(tree, pNode)
                                    if (pNode != null) {
                                        pNode.add2Children(newNode)
                                        return currIdx
                                    }
                                    add2Children(newNode)
                                    treeString = StringBuilder()
                                    treeStartIdx = 0
                                    currIdx = -1
                                }
                            }
                        }
                    }
                    if (numCharsLeft > 0 && --numCharsLeft == 0L) {
                        return 0
                    }
                    prevChar = currChar
                    currIdx++
                }
            }
        } catch (e: Exception) {
            throw Exception("failed reading input: $e")
        } finally {
            if (pIn != null) {
                try {
                    pIn.close()
                } catch (ignored: Exception) {
                }
            }
        }
        return 0
    }

    fun readNodes(pIn: String) {
        var nextNode = PropertyNode(this)
        var inPropertyValue = false
        val numChars = pIn.length
        var nodeStartIdx = -1
        var prevChar = 0.toChar()
        var charIdx = 0
        while (charIdx < numChars) {
            val c = pIn[charIdx]
            when (c) {
                '(' -> {
                    if (!inPropertyValue) {
                        if (nodeStartIdx != -1) {
                            newPropertyNode(nextNode, pIn.substring(nodeStartIdx + 1, charIdx))
                            nodeStartIdx = -1
                        }
                        val treeLen = readTree(
                            BufferedReader(StringReader(pIn.substring(charIdx))),
                            nextNode, 0, 0
                        )
                        charIdx += treeLen
                    }
                }
                '[' -> {
                    if (!inPropertyValue) {
                        inPropertyValue = true
                    }
                }
                ']' -> {
                    if (prevChar != '\\') {
                        inPropertyValue = false
                    }
                }
                ';' -> {
                    if (!inPropertyValue) {
                        if (nodeStartIdx != -1) {
                            nextNode = newPropertyNode(
                                nextNode, pIn.substring(nodeStartIdx + 1, charIdx)
                            )
                        }
                        nodeStartIdx = charIdx
                    }
                }
            }
            prevChar = c
            charIdx++
        }
        if (nodeStartIdx != -1) {
            newPropertyNode(nextNode, pIn.substring(nodeStartIdx + 1))
        }
    }

    fun newPropertyNode(pNode: PropertyNode, pIn: String): PropertyNode {
        pNode._parent!!.addChildNode(pNode).readNode(pIn)
        return PropertyNode(pNode)
    }

    fun add2Children(pNode: Node): Node {
        var children = _children
        if (children == null) {
            children = Generics.newArrayList(1)
            _children = children
        }
        children.add(pNode)
        return pNode
    }

    fun addChildNode(pChildNode: PropertyNode): PropertyNode {
        add2Children(pChildNode)
        pChildNode._parent = this
        return pChildNode
    }

    fun nextPropertyNode(pTraverseChildren: Boolean): PropertyNode? {
        val children = _children
        if (pTraverseChildren && this is PropertyNode && children != null && children.isNotEmpty()) {
            val firstChild = children[0]
            return if (firstChild is PropertyNode) firstChild else firstChild.firstPropertyNode()
        }
        var currentNode: Node = this
        var siblings: MutableList<Node>?
        var myIdx: Int
        while (true) {
            val parent = currentNode._parent
            siblings = parent?._children
            if (parent == null || siblings == null || siblings.isEmpty()) {
                return null
            }
            myIdx = siblings.indexOf(currentNode)
            if (myIdx != -1 && myIdx != siblings.size - 1) {
                break
            }
            currentNode = parent
        }
        val nextNode = siblings!![myIdx + 1] ?: return null
        if (nextNode is PropertyNode) {
            return nextNode
        }
        return nextNode.firstPropertyNode()
    }

    fun nextPropertyNode(): PropertyNode? = nextPropertyNode(true)

    fun previousPropertyNode(): PropertyNode? {
        val parent = _parent ?: return null
        return if (parent is PropertyNode) parent else parent.previousPropertyNode()
    }

    fun nextPropertyNodes(): List<PropertyNode> {
        val nextNodes = Generics.newArrayList<PropertyNode>(1)
        val children = _children
        if (children != null) {
            for (child in children) {
                if (child is PropertyNode) {
                    nextNodes.add(child)
                    break
                }
                nextNodes.addAll(child.nextPropertyNodes())
            }
        }
        return nextNodes
    }

    fun firstLastPropertyNode(pGetFirst: Boolean): PropertyNode? {
        val children = _children ?: return null
        val firstChild = children[if (pGetFirst) 0 else children.size - 1]
        return if (firstChild is PropertyNode) firstChild else null
    }

    fun firstPropertyNode(): PropertyNode? = firstLastPropertyNode(true)

    fun lastPropertyNode(): PropertyNode? = firstLastPropertyNode(false)

    open fun writeNode(pWriter: Writer) {
        val children = _children ?: return
        pWriter.write('('.code)
        for (child in children) {
            child.writeNode(pWriter)
        }
        pWriter.write(')'.code)
    }

    override fun toString(): String {
        var stringWriter: StringWriter? = null
        try {
            stringWriter = StringWriter()
            writeNode(stringWriter)
            stringWriter.close()
            return stringWriter.toString()
        } catch (e: Exception) {
            return ""
        } finally {
            if (stringWriter != null) {
                try {
                    stringWriter.close()
                } catch (ignored: Exception) {
                }
            }
        }
    }

    companion object {
        const val _IN_BUF_SIZE = 1024

        private const val _PROPERTY_VALUE_PATTERN = ".*%s[^\\[]*\\[([^]]+)\\].*"

        val _GAME_NAME_MATCHER: Matcher = Pattern.compile(
            String.format(Locale.US, _PROPERTY_VALUE_PATTERN, PropertyName.GameName.ident)
        ).matcher("")
        val _GAME_TYPE_MATCHER: Matcher = Pattern.compile(
            String.format(Locale.US, _PROPERTY_VALUE_PATTERN, PropertyName.GameType.ident)
        ).matcher("")

        @JvmField
        var _logger: _Logger = object : _Logger {
            override fun log(pMessage: String) {}
        }

        @JvmField
        var _loggingEnabled: Boolean = false

        @JvmStatic
        fun readCollectionIndices(
            pIn: Reader?,
            pOffsets: MutableList<Long>,
            pNumChars: MutableList<Long>,
            pNames: MutableList<String>
        ): Boolean {
            try {
                if (pIn == null) {
                    throw Exception("InputStream == null")
                }
                val inBuf = CharArray(_IN_BUF_SIZE)
                var startTreeCount = 0
                var numTree = 1
                var currIdx: Long = 0
                var startIdx: Long = 0
                var inPropertyValue = false
                var prevChar = 0.toChar()
                var tree = StringBuilder()
                val gameTypeMatcher = _GAME_TYPE_MATCHER
                val gameNameMatcher = _GAME_NAME_MATCHER
                var readChars: Int
                while (pIn.read(inBuf).also { readChars = it } != -1) {
                    for (byteIdx in 0 until readChars) {
                        val currChar = inBuf[byteIdx]
                        tree.append(currChar)
                        when (currChar) {
                            '[' -> {
                                if (!inPropertyValue) {
                                    inPropertyValue = true
                                }
                            }
                            ']' -> {
                                if (prevChar != '\\') {
                                    inPropertyValue = false
                                }
                            }
                            '(' -> {
                                if (!inPropertyValue) {
                                    startTreeCount++
                                }
                            }
                            ')' -> {
                                if (!inPropertyValue) {
                                    startTreeCount--
                                    if (startTreeCount == 0) {
                                        // maybe not portable to non Android platforms
                                        val treeStr = tree.toString().replace(Regex("[[\\s]--[ ]]"), "")
                                        tree = StringBuilder()
                                        gameTypeMatcher.reset(treeStr)
                                        val thisStartIdx = startIdx
                                        startIdx = currIdx + 1
                                        // A mismatched GM (game type) property means this
                                        // parenthesized tree isn't a go game: skip recording
                                        // it as an offset/name, but keep scanning (this is a
                                        // `break` out of the Java switch only, not the loop).
                                        var isGoGame = true
                                        if (gameTypeMatcher.matches()) {
                                            val goType = gameTypeMatcher.group(1)
                                            if (goType != null &&
                                                PropertyName._GO_GAME_NUMBER != goType.trim()
                                            ) {
                                                isGoGame = false
                                            }
                                        }
                                        if (isGoGame) {
                                            pOffsets.add(thisStartIdx)
                                            pNumChars.add(currIdx - thisStartIdx + 1)
                                            gameNameMatcher.reset(treeStr)
                                            var name: String? = null
                                            if (gameNameMatcher.matches()) {
                                                name = gameNameMatcher.group(1)
                                            }
                                            pNames.add(
                                                numTree.toString() +
                                                    (if (name == null) "" else " " + name.trim())
                                            )
                                            numTree++
                                        }
                                    }
                                }
                            }
                        }
                        prevChar = currChar
                        currIdx++
                    }
                }
            } catch (e: Exception) {
                throw Exception("failed reading input: $e")
            } finally {
                if (pIn != null) {
                    try {
                        pIn.close()
                    } catch (ignored: Exception) {
                    }
                }
            }
            return pOffsets.size > 1
        }
    }
}
