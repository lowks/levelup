package main
import (
    "fmt"
)

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var times, input_array, result int
    
    _, err := fmt.Scan(&times)
    
    if err != nil {
        panic(err)
    }

    for i := 0; i < times; i++ {
        input_array = read()
        result += input_array
    }

    fmt.Println(result)

}

func read() int {
    var n int
    _, err := fmt.Scan(&n)

    if err != nil {
        panic(err)
    }

    return n
}
