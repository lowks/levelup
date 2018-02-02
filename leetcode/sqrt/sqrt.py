import unittest

def mySqrt(x):
    """
    :type x: int
    :rtype: int
    """
    return int(x**0.5)

class TestMySqrt(unittest.TestCase):

    def test_sqrt_normal(self):
        assert mySqrt(64) == 8

if __name__ == '__main__':
    unittest.main()