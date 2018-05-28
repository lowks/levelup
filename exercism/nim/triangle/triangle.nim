import sets, sequtils

proc TriangleEquality(input_list: array[0..2, int]):bool =
    if input_list[0] + input_list[1] <= input_list[2]:
        return false
    if input_list[1] + input_list[2] <= input_list[0]:
        return false
    return true

proc is_equilateral*(input_list: array[0..2, int]):bool =
    if toSet(input_list).len == 1:
        if input_list.contains(0):
            return false
        return true
    return false

proc is_isosceles*(input_list: array[0..2, int]):bool =
    if not TriangleEquality(input_list) or toSet(input_list).len == 3:
        return false
    if is_equilateral(input_list) or toSet(input_list).len == 2:
        return true
    

proc is_scalene*(input_list: array[0..2, int]):bool =
    if is_isosceles(input_list) or not TriangleEquality(input_list) or toSet(input_list).len == 2:
        return false
    return not(is_equilateral(input_list))