package com.samthegliderpilot.godroid

/**
 * A running Go-playing engine that speaks GTP (the Go Text Protocol) over
 * some transport. GnuGo is the only implementation today, but this is kept
 * engine-agnostic so a second engine (e.g. Pachi or Fuego) doesn't require
 * reshaping this contract.
 */
interface GoEngine {

    /**
     * Sends one GTP command and returns its response, including the leading
     * "= "/"? " status marker, up to (not including) the blank line that
     * terminates every GTP response.
     */
    fun sendCommand(command: String): String

    fun isAlive(): Boolean

    fun shutdown()
}
