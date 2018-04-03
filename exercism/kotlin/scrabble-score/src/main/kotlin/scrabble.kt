object ScrabbleScore {
    fun scoreWord(input: String):Int? {
        val char_score = HashMap<String, Int>()
        char_score.put("A", 1)
        char_score.put("E", 1)
        char_score.put("I", 1)
        char_score.put("O", 1)
        char_score.put("U", 1)
        char_score.put("L", 1)
        char_score.put("N", 1)
        char_score.put("R", 1)
        char_score.put("S", 1)
        char_score.put("T", 1)
        char_score.put("D", 2)
        char_score.put("G", 2)
        char_score.put("B", 3)
        char_score.put("C", 3)
        char_score.put("M", 3)
        char_score.put("P", 3)
        char_score.put("F", 4)
        char_score.put("H", 4)
        char_score.put("V", 4)
        char_score.put("W", 4)
        char_score.put("Y", 4)
        char_score.put("K", 5)
        char_score.put("J", 8)
        char_score.put("X", 8)
        char_score.put("Q", 10)
        char_score.put("Z", 10)
        var user_score = 0
        for (item in input.toUpperCase().toCharArray())
            // This part here needs the damn Character.toString as it's Char but then the array is created as String
            user_score += char_score.getOrElse(Character.toString(item)) {0}
        return user_score
    }
}