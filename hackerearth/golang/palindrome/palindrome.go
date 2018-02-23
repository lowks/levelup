package main

import "fmt"

func main() {
	input_string := "ama"
	result := ""
	for _, v := range input_string {
		result = string(v) + result
	}
	if result == input_string {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
