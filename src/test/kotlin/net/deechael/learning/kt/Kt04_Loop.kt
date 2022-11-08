package net.deechael.learning.kt

import org.junit.jupiter.api.Test

class Kt04_Loop {

    @Test
    fun forLoop1() {
        for (i in 0..10) {
            println(i)
        }
        println("====")
    }

    @Test
    fun forLoop2() {
        for (i in 10 downTo 1) {
            println(i)
        }
        println("====")
    }

    @Test
    fun forLoop3() {
        for (i in 1..10 step 2) {
            println(i)
        }
    }

}