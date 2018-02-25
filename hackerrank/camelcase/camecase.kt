import java.io.*
import java.util.*



fun main(args: Array<String>) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    val input_string = readLine()!! //Have to do this here since nullable
    var count = 1
    for (ch in 'A' .. 'Z') {
	 // do not use contains here as it's the wrong logic. It won't work with input like cccCCCcccCCCC. Will count it as one C only
         for (i in 0..input_string.length - 1) {
            if (ch == input_string[i]) {
                ++count
            }
        }
    }
    println(count)
}
