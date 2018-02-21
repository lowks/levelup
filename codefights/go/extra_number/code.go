func extraNumber(a int, b int, c int) int {
	return_number := 0
	switch {
		case (b == c):
			return_number += a
			break
		case (a == c):
			return_number += b
			break
		case (a == b):
			return_number += c
			break
	}
	return return_number
}
