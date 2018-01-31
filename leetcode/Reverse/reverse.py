#!/usr/bin/python

import unittest


def reverse(x):
    neg_limit = -0x80000000
    pos_limit = 0x7fffffff
    str_x = str(x)
    if x < 0:
        str_x = '-' + str_x[::-1][:-1]
        x = int(str_x)
    elif x > 0:
        str_x = str(x)[::-1]
        x = int(str_x)
    if x < 0:
        if (x & neg_limit) == neg_limit:
            return x
        else:
            return 0
    if x > 0:
        if (x & pos_limit) == x:
            return x
        else:
            return 0
    if x == 0: return x


class TestReverse(unittest.TestCase):

    def test_123(self):
        assert reverse(123) == 321

    def test_negative_123(self):
        assert reverse(-123) == -321

    def test_number_too_large(self):
        assert reverse(17121271267127612127612) == 0

    def test_negative_number_too_large(self):
        assert reverse(-17121271267127612127612) == 0

if __name__ == '__main__':
    unittest.main()
