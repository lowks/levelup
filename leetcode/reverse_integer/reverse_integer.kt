import java.math.BigInteger

class Solution {
    fun reverse(x: Int): Int {
        if (x > 0) {
            return x.toString().reversed().toLong().toInt()
        } else {
            return -(BigInteger.valueOf(x.toLong()).unaryMinus().toString().reversed().toLong().toInt())
        }
    }
}
