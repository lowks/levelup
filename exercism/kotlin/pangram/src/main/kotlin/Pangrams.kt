object Pangram {
	fun isPangram(input: String): Boolean {
		return (Regex("[^A-Za-z]").replace(input, "")
		        .toLowerCase()
			.toCharArray()
			.distinct().size == 26)
	}
}
