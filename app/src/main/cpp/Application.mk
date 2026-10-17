#APP_MODULES      := gnuGo-3.8
APP_OPTIM		 := release
APP_ABI := armeabi-v7a arm64-v8a
APP_PLATFORM := android-21
APP_STL := c++_static
APP_OPTIM := release

# The vendored GnuGo sources produce tens of thousands of warnings (e.g. 64-bit
# pattern constants converted to the 32-bit Hashvalue). They flood build logs, and
# F-Droid's CI cuts a log off at 4 MB, hiding the real result. We do not edit
# GnuGo, so the warnings are not actionable here.
APP_CFLAGS += -w

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
