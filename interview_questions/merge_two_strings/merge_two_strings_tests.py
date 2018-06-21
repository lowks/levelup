import unittest
from merge_two_strings import merge_string

class MergeTwoStringsTests(unittest.TestCase):

    def test_same_string_length(self):
        assert merge_string('ABC', 'DEF') == 'ADBECF'
    
    def test_first_string_longer(self):
        assert merge_string('ABC', 'DE') == 'ADBEC'

    def test_second_string_longer(self):
        assert merge_string('AB', 'CDE') == 'ACBDE'

if __name__ == '__main__':
    unittest.main()

