class Squares(val input: Int) {

    fun squareOfSum(): Int {
        return (input downTo 1).fold(0) { sum, element -> sum + element } * (input downTo 1).fold(0) { sum, element -> sum + element }
    }

    fun sumOfSquares(): Int {
        return (input downTo 1).fold(0) { sum, element -> sum + element*element }
    }

    fun difference(): Int {
        return squareOfSum() - sumOfSquares()
    }
}