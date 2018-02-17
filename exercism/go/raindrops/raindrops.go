package raindrops

import (
	"strconv"
)

func Convert(input int) string {
	return_string := ""
	if input%3 == 0 {
		return_string += "Pling"
	}

	if input%5 == 0 {
		return_string += "Plang"
	}

	if input%7 == 0 {
		return_string += "Plong"
	}

	if (input%3 != 0) && (input%5 != 0) && (input%7 != 0) {
		return strconv.Itoa(int(input))
	}
	return return_string
}