fun phoneCall(min1: Int, min2_10: Int, min11: Int, s: Int): Int {
    return when {
        (s == min1) -> 1
        (s < min1) -> 0
        ((s - min1) - min2_10*9) > 0 -> 10 + ((s - min1) - min2_10*9)/min11
        ((s - min1) - min2_10*9) < 0 -> 1 + (s - min1)/min2_10
        else -> 0
    }
}

