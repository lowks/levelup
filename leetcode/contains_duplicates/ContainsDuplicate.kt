class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val map = mutableMapOf<Int, Int>()
        nums.forEach {
          map[it] = 1 + map.getOrElse(it) { 0 }
        }
        return map.values.filter { it > 1 }.size >= 1
    }
}
