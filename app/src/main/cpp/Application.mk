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
