/* Minimal entry point for running GNU Go as a standalone GTP engine over
 * real stdin/stdout, the same way any GTP-speaking Go GUI (Sabaki, GoGui)
 * launches `gnugo --mode gtp`.
 *
 * This is deliberately not a copy of GNU Go's own interface/main.c: that
 * file parses ~90 command-line flags and supports several modes (ascii,
 * gmp, solo, decide-*) the Android app never uses, which would also pull
 * in play_ascii.c/play_gmp.c/play_solo.c and their dependencies. The app
 * does all game setup (board size, komi, level, handicap, rules, resign
 * option) via real GTP commands sent after this process starts, exactly
 * like every other GTP client does, so no argument parsing is needed here.
 */

#include <time.h>

#include "gnugo.h"
#include "interface.h"

int
main(void)
{
  init_gnugo(DEFAULT_MEMORY, (unsigned int) time(0));
  play_gtp(stdin, stdout, NULL, 0);
  return 0;
}
