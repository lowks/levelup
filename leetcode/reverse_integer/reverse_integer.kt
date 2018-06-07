class Solution {
    fun reverse(x: Int): Int {
        if (x == 0) {
            return 0
        }
        var anotherX = x

        var result: Long = 0
        while (anotherX != 0) {
            result = result * 10 + anotherX % 10
            anotherX /= 10
        }

        return if (result > 0 && result - Integer.MAX_VALUE > 0
                || result < 0 && result - Integer.MIN_VALUE < 0) {
            0
        } else result.toInt()
    }
}
