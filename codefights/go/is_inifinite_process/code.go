func isInfiniteProcess(a int, b int) bool {
    return_string := true
    switch {
        case a == b:
            return_string = false
        case (b - a) < 0:
            return_string = true
        case (b -a) % 2 == 0:
            return_string = false
    }
    return return_string
}
