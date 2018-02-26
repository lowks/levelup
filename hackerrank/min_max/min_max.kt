import java.io.*
import java.util.*

fun main(args: Array<String>) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    val input_string = readLine()!!
    // toLong - read question nicely. Related to overflow in the description. If not it won't pass all cases
    var input_array_sum = input_string.split(" ").map { it.toLong()}.sum()
    var sums = input_string.split(" ").map { input_array_sum - it.toLong() }
    val print_string = String.format("%s %s", sums.min(), sums.max())
    println(print_string)
}
