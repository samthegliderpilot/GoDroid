/* Pre-generated, not produced by Pachi's own ./genbuild at build time.
 *
 * Upstream Pachi generates this via a bash script (genbuild) that shells out
 * to git and the compiler to embed branch/hash/date/flags into the --version
 * output - fine for a normal desktop build, but an extra moving part (and a
 * bash dependency) this project doesn't need for a subprocess nobody inspects
 * the version banner of. Values below are accurate for the vendored
 * third_party/pachi submodule (pinned to tag pachi-12.90) at the time this
 * file was written; they don't need to stay in perfect sync with the pin -
 * version.h only uses them for display text, nothing behavioral depends on
 * them.
 */
#define PACHI_GIT_BRANCH   "pachi-12.90"
#define PACHI_GIT_HASH     "f86fc61f"
#define PACHI_BUILD_DATE   "2026-10-31"
#define PACHI_BUILD_TARGET "android"
#define PACHI_CFLAGS       "-std=gnu99 -pthread -D_GNU_SOURCE"
#define PACHI_COMPILER     "Android NDK clang"
#define PACHI_CC1          "(not applicable - cross-compiled)"
