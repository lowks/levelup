class Solution {
    fun missingNumber(nums: IntArray): Int {
          val difference = (0..nums.max()!!).minus(nums.toList())
          if (difference.isEmpty() != true) {
            return difference.first()
          } else { return nums.max()!! + 1 }
    }
}
