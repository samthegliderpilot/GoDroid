import java.io.FileInputStream
import java.util.Properties

// Same pattern as buildGnugoExecutable.gradle.kts - see that file's comment
// for why ndk-build is invoked directly rather than through AGP's
// externalNativeBuild integration, and why the output gets renamed to a
// libpachi.so under jniLibs/<abi>/.

val pachiCppDir = "$projectDir/src/main/cpp"
val pachiNativeOutDir = layout.buildDirectory.dir("pachiNative").get().asFile.path
val jniLibsDir = "$projectDir/src/main/jniLibs"
val pachiAbis = listOf("armeabi-v7a", "arm64-v8a")

// Kept in sync with android.ndkVersion in build.gradle.kts by hand - same
// reasoning as buildGnugoExecutable.gradle.kts's own copy of this constant.
val pachiNdkVersion = "27.0.12077973"

val pachiLocalProperties = Properties().apply {
    val f = rootProject.file("local.properties")
    if (f.exists()) FileInputStream(f).use { load(it) }
}
val pachiSdkDir = pachiLocalProperties.getProperty("sdk.dir") ?: System.getenv("ANDROID_HOME")

val pachiNdkBuildExecutable = run {
    requireNotNull(pachiSdkDir) {
        "Android SDK location not found (set sdk.dir in local.properties or ANDROID_HOME)"
    }
    val suffix = if (org.gradle.internal.os.OperatingSystem.current().isWindows) ".cmd" else ""
    "$pachiSdkDir/ndk/$pachiNdkVersion/ndk-build$suffix"
}

tasks.register<Exec>("buildPachiExecutable") {
    dependsOn("copyPachiPatches")
    workingDir = file(pachiCppDir)
    outputs.dir(pachiNativeOutDir)
    commandLine(
        pachiNdkBuildExecutable,
        "NDK_PROJECT_PATH=.",
        "APP_BUILD_SCRIPT=./Android.mk",
        "NDK_APPLICATION_MK=./Application.mk",
        "NDK_OUT=$pachiNativeOutDir/obj",
        "NDK_LIBS_OUT=$pachiNativeOutDir/libs"
    )
}

val packagePachiExecutable = tasks.register("packagePachiExecutable") {
    dependsOn("buildPachiExecutable")
}

for (abi in pachiAbis) {
    val abiTask = tasks.register<Copy>("packagePachiExecutable_$abi") {
        dependsOn("buildPachiExecutable")
        from("$pachiNativeOutDir/libs/$abi/libpachi") {
            rename { "libpachi.so" }
        }
        into("$jniLibsDir/$abi")
    }
    packagePachiExecutable.configure { dependsOn(abiTask) }
}

tasks.named("preBuild") {
    dependsOn(packagePachiExecutable)
}

tasks.register<Delete>("cleanPachiNative") {
    delete(pachiNativeOutDir)
    for (abi in pachiAbis) {
        delete("$jniLibsDir/$abi/libpachi.so")
    }
}
tasks.named("clean") {
    dependsOn("cleanPachiNative")
}
