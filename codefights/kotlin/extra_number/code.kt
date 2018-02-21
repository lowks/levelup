fun extraNumber(a: Int, b: Int, c: Int): Int {
    val grouping = intArrayOf(a, b, c)
                   .groupBy {it} // group into frequency 
                   .filter { it.value.count() == 1 } // get the one which frequency of 1
    return grouping.keys.first()
}

fun extraNumber2(a: Int, b: Int, c: Int): Int {
    var return_number = 0
    return_number = when {
        (b == c) -> a
        (a == c) -> b
        else -> c
    }
    return return_number
}
