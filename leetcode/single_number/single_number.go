class Solution {
    fun singleNumber(nums: IntArray): Int = nums.groupBy { it }.filter { it.value.count() == 1 }.keys.first()
}
