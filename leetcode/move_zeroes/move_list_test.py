from move_list import Solution
import unittest

class TestMoveZeroes(unittest.TestCase):

    def setUp(self):
        self.input = [0,0,1]
        self.solution = Solution()

    def test_move_zeroes_normal_case(self):
        self.solution.moveZeroes(self.input)
        self.assertEquals(self.input, [1,0,0])

if __name__ == '__main__':
    unittest.main()
    