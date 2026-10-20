# Add project specific ProGuard rules here.
# You can control the set of applied configuration files using the
# proguardFiles setting in build.gradle.
#
# For more details, see
#   http://developer.android.com/guide/developing/tools/proguard.html

# If your project uses WebView with JS, uncomment the following
# and specify the fully qualified class name to the JavaScript interface
# class:
#-keepclassmembers class fqcn.of.javascript.interface.for.webview {
#   public *;
#}

# Uncomment this to preserve the line number information for
# debugging stack traces.
-keepattributes SourceFile,LineNumberTable

# If you keep the line number information, uncomment this to
# hide the original source file name.
#-renamesourcefileattribute SourceFile

# MainActivity declares `native` methods (the GnuGo JNI bridge). The native
# side looks these up by exact name, so R8 must never rename or strip them -
# the Android default rules already cover this generically, but it's made
# explicit here since getting it wrong only shows up as a release-build-only
# crash (debug builds don't run R8 and would never catch the breakage).
-keepclasseswithmembernames class * {
    native <methods>;
}