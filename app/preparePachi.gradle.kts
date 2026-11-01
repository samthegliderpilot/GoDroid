import org.gradle.api.tasks.Copy
import org.gradle.api.tasks.Delete

// Same pattern as prepareGnugo.gradle.kts - see that file's comment.
val pachiSourceDir = "$rootDir/third_party/pachi"
val pachiPatchDir = "$rootDir/patches/pachi"
val pachiTargetDir = "$projectDir/src/main/cpp/pachi"

tasks.register<Delete>("cleanPachi") {
    delete(pachiTargetDir)
}

tasks.register<Copy>("copyPachiSources") {
    from(pachiSourceDir)
    into(pachiTargetDir)
}

tasks.register<Copy>("copyPachiPatches") {
    from(pachiPatchDir)
    into(pachiTargetDir)
    duplicatesStrategy = DuplicatesStrategy.INCLUDE
    dependsOn("copyPachiSources")
}

tasks.named("clean") {
    dependsOn("cleanPachi")
}

tasks.named("preBuild") {
    dependsOn("copyPachiPatches")
}
