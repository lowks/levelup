import sys

def reverse_sentence(sentence):
    return ' '.join(reversed(sentence.split()))

with open(sys.argv[1], 'r') as test_cases:
    result = ""
    for test in test_cases:
        result += reverse_sentence(test).strip() + "\n"
print result
