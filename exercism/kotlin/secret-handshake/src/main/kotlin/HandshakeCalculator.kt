object HandshakeCalculator {
    fun calculateHandshake(input: Int): List<Signal> {
        val list_of_signals = listOf(Signal.WINK, Signal.DOUBLE_BLINK, Signal.CLOSE_YOUR_EYES, Signal.JUMP)
        var input_number = input
        if (input <= 15) {
            input_number = input
        } else {
            input_number = 16 -input }

        val input_list = input_number.toString(2).toList().reversed()
        val zipped = input_list zip list_of_signals

        if (input > 15) {
            return zipped.filter {it.first.toString() == 1.toString()}.map {it.second}.reversed()
        }
        return zipped.filter {it.first.toString() == 1.toString()}.map {it.second}
}}