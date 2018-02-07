import unittest


def searchInsert(nums, target):
	try:
		return nums.index(target)
	except ValueError:
		for i,v in enumerate(nums):
			try:
				if (target > v) and (target < nums[i+1]):
					return i + 1
				elif (target < v):
					return 0
			except IndexError:
				return len(nums)


class TestSearchInsert(unittest.TestCase):

	def test_index_found(self):

		assert searchInsert([1, 2, 3, 4, 5], 5) == 4

	def test_index_not_found_insert(self):

		assert searchInsert([1, 3, 4, 5], 2) == 1

	def test_negative_number(self):

		assert searchInsert([1, 2, 3, 4, 5], -2) == 0

if __name__ == '__main__':
	unittest.main()