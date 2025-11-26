package com.samthegliderpilot.util;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.SortedMap;
import java.util.TreeMap;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.WeakHashMap;
import java.util.LinkedHashMap;

public
class Generics {
    public static <K, V> HashMap<K, V> newHashMap() {
        return new HashMap<K, V>();
    }

    public static <K, V> HashMap<K, V> newHashMap(
            final int pInitialCapacity
    ) {
        return new HashMap<K, V>(pInitialCapacity);
    }

    public static <K, V> HashMap<K, V> newHashMap(
            final Map<? extends K, ? extends V> pInitialElements
    ) {
        return new HashMap<K, V>(pInitialElements);
    }

    public static <K, V> SortedMap<K, V> newSortedMap() {
        return new TreeMap<K, V>();
    }

    public static <K, V> SortedMap<K, V> newSortedMap(
            final Comparator<? super K> pComparator
    ) {
        return new TreeMap<K, V>(pComparator);
    }

    public static <K, V> SortedMap<K, V> newSortedMap(
            final Map<? extends K, ? extends V> pInitialElements
    ) {
        return new TreeMap<K, V>(pInitialElements);
    }

    public static <K, V> WeakHashMap<K, V> newWeakHashMap() {
        return new WeakHashMap<K, V>();
    }

    public static <K, V> LinkedHashMap<K, V> newLinkedHashMap() {
        return new LinkedHashMap<K, V>();
    }

    public static <K, V> LinkedHashMap<K, V> newLinkedHashMap(
            final int pInitialCapacity
    ) {
        return new LinkedHashMap<K, V>(pInitialCapacity);
    }

    public static <E> ArrayList<E> newArrayList() {
        return new ArrayList<E>();
    }

    public static <E> ArrayList<E> newArrayList(
            final int pInitialCapacity
    ) {
        return new ArrayList<E>(pInitialCapacity);
    }

    public static <E> ArrayList<E> newArrayList(
            final Collection<? extends E> pInitialElements
    ) {
        return new ArrayList<E>(pInitialElements);
    }

    public static <E> LinkedList<E> newLinkedList() {
        return new LinkedList<E>();
    }

    public static <E> HashSet<E> newHashSet() {
        return new HashSet<E>();
    }

    public static <E> HashSet<E> newHashSet(
            final int pInitialCapacity
    ) {
        return new HashSet<E>(pInitialCapacity);
    }

    public static <E> HashSet<E> newHashSet(
            final Collection<? extends E> pInitialElements
    ) {
        return new HashSet<E>(pInitialElements);
    }
}
