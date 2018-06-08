class Solution {
    fun findComplement(num: Int): Int {
        var binary = Integer.toString(num, 2)
        var full = Math.pow(2.toDouble(), binary.length.toDouble()).toInt()
        var result = if (binary.length == 31) { num.xor(full).toInt() } else { num.xor(full - 1).toInt() }
      
        return if (result > 0 && result - Integer.MAX_VALUE > 0
                || result < 0 && result - Integer.MIN_VALUE < 0) {
            0
        } else result
    }
}