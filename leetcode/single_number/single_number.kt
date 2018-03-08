class Solution {
    fun singleNumber(nums: IntArray): Int {
        var frequency_array = nums.groupBy { it }
        var return_number = 0
        frequency_array.forEach {
          if (it.value.count() == 1) {
            return_number = it.key
          }
        }
      return return_number
    }
}
