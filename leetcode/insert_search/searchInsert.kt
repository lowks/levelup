class Solution {
    fun searchInsert(nums: IntArray, target: Int): Int {
        if(nums.indexOf(target) == -1){
          var nums2 = nums.plus(target)
          nums2.sort()
          return nums2.indexOf(target)
        }
        return nums.indexOf(target)
    }
}
