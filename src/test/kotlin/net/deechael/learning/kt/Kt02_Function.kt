package net.deechael.learning.kt

import org.junit.jupiter.api.Test

class Kt02_Function {

    @Test
    fun sumMain1() {
        println(sum1(4, 123))
    }

    @Test
    fun sumMain2(): Unit {
        println(sum2(1341, 12314))
    }

    fun sum1(a: Int, b: Int): Int {
        return a + b
    }

    fun sum2(a: Int, b: Int) = a + b

}
