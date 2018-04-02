object Raindrops {
    fun convert(input: Int): String {
        var output_string = ""
        if (input.rem(3) == 0) {
            output_string += "Pling"
        }

        if (input.rem(5) == 0) {
            output_string += "Plang"
        }

        if (input.rem(7) == 0) {
            output_string += "Plong"
        }

        if (output_string.length == 0) {
            output_string += input.toString()
        }
        return output_string
    }
}