func containsDuplicate(nums []int) bool {
  encountered := map[int]int{}
  for _, v := range nums {
    encountered[v] += 1
  }
  
  for _,v := range encountered {
    if v > 1 {
      return true
    }
  }
  return false
}
