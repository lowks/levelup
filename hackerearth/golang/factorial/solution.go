package main

import "fmt"

func main() {
	var num int
	fmt.Scanf("%d", &num)
	return_number := num
	for i := num - 1; i >= 1; i -= 1 {
		return_number *= i
	}
	fmt.Println(return_number)
}
