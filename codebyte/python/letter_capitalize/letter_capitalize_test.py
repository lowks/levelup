import unittest
from letter_capitalize import LetterCapitalize

class TestWordCapitalize(unittest.TestCase):

    def test_word_capitalize(self):
        self.assertEqual(LetterCapitalize("hello world"), "Hello World")

if __name__ == '__main__':
    unittest.main()