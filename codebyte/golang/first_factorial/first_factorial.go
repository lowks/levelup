package main
import "fmt"

func FirstFactorial(num int) int { 
  return_number := num
  for i := num; i < 1; i-- {
    return_number *= i   
  }
  return return_number
}

func main() {
  // do not modify below here, readline is our function
  // that properly reads in the input for you
  fmt.Println(FirstFactorial(readline()))
}
