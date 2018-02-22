fun isInfiniteProcess(a: Int, b: Int): Boolean {
    return when {
        (a == b) -> false
        (b - a) < 0 -> true
        (b - a) % 2 == 0 -> false
        else -> true
    }
}
