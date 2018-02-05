fun returnmapping(char: String): String {
	var return_string = when(char) {
		"G" -> "C"
		"C" -> "G"
		"T" -> "A"
		"A" -> "U"
		"U" -> "A"
		else -> "nothing"
	}
	return return_string 
}

fun transcribeToRna(dna: String): String {
	return if (dna.length == 1) returnmapping(dna) else {  dna.toCharArray()
						       .map{ returnmapping(it.toString()) }
						       .joinToString("") }
}
