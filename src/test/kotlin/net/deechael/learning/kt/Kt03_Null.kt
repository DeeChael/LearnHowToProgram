package net.deechael.learning.kt

fun notNull(name: String): Int {
    if (name == "kotlin")
        return 1
    else if (name == "java")
        return 2
    return 0
}

fun nullable(name: String): Int? {
    if (name == "kotlin")
        return 1
    else if (name == "java")
        return 2
    return null
}