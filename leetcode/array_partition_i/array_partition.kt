class Solution {
    fun arrayPairSum(nums: IntArray): Int {
        var idiot = nums.sorted().toList().chunked(nums.size/2).map { it.min() }
        return idiot.map { it?.toInt()!! }.toList().sum()!!
    }
}