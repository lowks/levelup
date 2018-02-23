fun main(args: Array<String>) {

var number = readLine()!!
var result = 1L
    for (i in 2..number.toInt()) result *= i
println(result)
}
