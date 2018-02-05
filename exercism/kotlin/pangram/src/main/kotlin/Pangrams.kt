object Pangram {
	fun isPangram(input: String): Boolean {
		val re = Regex("[^A-Za-z]")
		// return if (re.replace(input, "").distinct().size == 26) true else false
		var length = re.replace(input, "")
			     .toLowerCase()
			     .toCharArray().distinct().size
		if (length == 26) { 
			return true } else { return false }
	}
}
