func reverseString(s string) string {
  reversed := ""
  for _, v := range s {
		reversed = string(v) + reversed
	}
  return reversed
}
