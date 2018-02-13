fun circleOfNumbers(n: Int, firstNumber: Int): Int {
    return when {
        (firstNumber >= 0.5*n) -> (firstNumber - 0.5*n).toInt()
        else -> (firstNumber + 0.5*n).toInt()
    }
}
