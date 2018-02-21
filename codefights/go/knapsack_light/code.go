func knapsackLight(value1 int, weight1 int, value2 int, weight2 int, maxW int) int {
    return_value := 0
	if (weight1 <= maxW) && (weight2 <= maxW) {
		if (weight1 + weight2) <= maxW {
			return_value += (value1 + value2)
		} else {
			switch {
			case (value2 > value1):
				return_value += value2
				break
			case (value1 > value2) || (value1 == value2):
				return_value += value1
				break
			}
		}
	} else if weight1 > maxW {
		switch {
		case (weight1 <= maxW):
			return_value += value2
			break
		case (weight2 == maxW):
			return_value += value2
			break
		}
	} else if weight2 > maxW {
		if weight1 <= maxW {
			return_value += value1
		}
	}
	return return_value
}
