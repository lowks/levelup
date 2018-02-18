package reverse

func String(input string) string {
	var return_string = ""
	for _, v := range input {
		return_string = string(v) + return_string
	}
	return return_string
}
