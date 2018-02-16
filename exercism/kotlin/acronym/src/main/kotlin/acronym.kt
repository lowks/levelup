object Acronym {

    fun generate(phrase: String): String {
        var return_string = ""
        var input_string = Regex("[^A-Za-z0-9 ]").replace(phrase, " ")
        input_string.toUpperCase().split(" ").forEach {
            if (it.length > 0) return_string += it[0]
        }
        return return_string
    }
}
