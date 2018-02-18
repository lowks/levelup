package diffsquares

func SquareOfSums(input int) int {
	var return_int = 0
	for i:= 1; i <= input; i ++ {
		return_int += i
	}
	return return_int*return_int
}

func SumOfSquares(input int) int {
	var return_int = 0
	for i := 1; i <= input; i ++ {
		return_int += i*i
	}
	return return_int
}

func Difference(input int) int {
	return SquareOfSums(input) - SumOfSquares(input)
}

