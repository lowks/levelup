import java.io.*
import java.util.*

fun is_pangram(input_string: String): Boolean {
    var count = 0
    for (char in ('a'..'z')) {
        if (input_string.toLowerCase().indexOf(char) != -1) {
            count++
        }
    }
    return count == 26
}

fun main(args: Array<String>) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    val input_string = readLine()!!
        if (is_pangram(input_string)) {
            println("pangram")
        } else { println ("not pangram")}
}
