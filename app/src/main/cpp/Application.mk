#APP_MODULES      := gnuGo-3.8
APP_OPTIM		 := release
APP_ABI := armeabi-v7a arm64-v8a
APP_PLATFORM := android-21
APP_STL := c++_static
APP_OPTIM := release

# The vendored GnuGo sources used to produce tens of thousands of warnings
# (64-bit pattern constants silently truncated into a platform-width
# Hashvalue on 32-bit ABIs) plus a handful of real -Wformat-security /
# -Wno-format-%n issues, enough to flood build logs and risk tripping
# F-Droid CI's 4 MB log cutoff. Those are now fixed via patches/gnugo-3.8
# (see engine/hash.h, patterns/owl_vital_apat.c, engine/readconnect.c,
# engine/reading.c, patterns/dfa.c), so warnings are left visible.
#
# What's left is one harmless, pristine-vendor pattern: utils/winsocket.h's
# USE_WINDOWS_SOCKET_CLUDGE macro expands to something containing `defined`,
# which is technically undefined behavior per the standard but handled
# identically by every real compiler. Suppressed narrowly rather than with
# a blanket -w, so a real new warning elsewhere won't go unnoticed again.
APP_CFLAGS += -Wno-expansion-to-defined

# Make the compiled output independent of where the project is checked out.
# GnuGo embeds __FILE__ (an absolute path) in assertion messages, so a build in
# /home/runner/... and one in /home/vagrant/build/... would otherwise differ
# byte for byte, and F-Droid could not verify our release APK against its own build.
GODROID_CPP_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
APP_CFLAGS += -ffile-prefix-map=$(GODROID_CPP_DIR)=.

# The linker's GNU build-id is a hash of the still-unstripped output, which still
# contains build-directory paths, so it differs between checkouts even though the
# code is identical. Dropping it keeps the libraries byte-identical everywhere.
APP_LDFLAGS += -Wl,--build-id=none
