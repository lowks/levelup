func singleNumber(nums []int) int {
    	counter := make( map[int]int )
	for _, value := range nums {
		counter[value]++
	}
	return_int := 0
	for k, v := range counter {
		if (v == 1) {
			return_int = k
		}
	}
	return return_int
}
