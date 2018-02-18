package isogram

import (
	"strings"
	"regexp"
)

func IsIsogram(input_string string) bool {
	reg := regexp.MustCompile("[^a-zA-Z0-9]+")
	var m = make(map[string]int)
	var input_string_upper = strings.ToUpper(reg.ReplaceAllString(input_string, ""))
	for _, value1 := range strings.Split(input_string_upper, "") {
		m[value1] = strings.Count(input_string_upper, value1)
	}
	var return_bool = true
	for _, v := range m {
		if v > 1 {
			return_bool = false
		}
	}
	return return_bool
}
