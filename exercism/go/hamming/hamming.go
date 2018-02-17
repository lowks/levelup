package hamming

import "errors"

func Distance(a, b string) (int, error) {
	rune_a := []rune(a)
	rune_b := []rune(b)

	count := 0

	switch {
	case (len(rune_a) != len(rune_b)):
		return -1, errors.New("Must be of same length")
	default:
		for i, _ := range rune_a {
			if rune_a[i] != rune_b[i] {
				count++
			}
		}
		return count, nil

	}
}
