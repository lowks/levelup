import unittest

def strStr(haystack, needle):
    """
    :type haystack: str
    :type needle: str
    :rtype: int
    """
    return haystack.find(needle)

class TestStrStr(unittest.TestCase):

    def test_with_valid_input(self):
        assert strStr("hello", "ll") == 2

    def test_with_empty_haystack(self):
        assert strStr("", "a") == -1

if __name__ == '__main__':
    unittest.main()