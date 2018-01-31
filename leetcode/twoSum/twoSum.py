#!/usr/bin/python
import unittest


def twoSum(nums, target):

    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """

    enumerated = list(enumerate(nums))
    for index, number in enumerated:
        if target >= number:
            num_to_look_for = target - number
        elif target < 0:
            num_to_look_for = target + abs(number)
        elif target == 0:
            num_to_look_for = 0
        result = [x[0] for x in enumerated if x[1] == num_to_look_for and x[0] != index]
        if len(result) > 0:
            return [index] + result
        else:
            continue


class TestTwoSum(unittest.TestCase):

    def test_same_figure(self):
        assert twoSum([3, 3], 6) == [0, 1]

    def test_negative_target(self):
        assert twoSum([-1, -2, -3, -4, -5], -8) == [2, 4]

    def test_normal_case(self):
        assert twoSum([3, 2, 4], 6) == [1, 2]


if __name__ == '__main__':
    unittest.main()
