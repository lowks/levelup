#!/bin/python

import sys
from collections import Counter

def hackerrankInString(s):
    # Complete this function
#    counter_correct = Counter("hackerrank")
#    counter_input = Counter(s)
    
#    if set(counter_correct.keys()).issubset(counter_input.keys()):
#        if all(counter_input[k] >= v for k, v in counter_correct.items()):
#            return "YES"
#        else:
#            return "NO"
#    else:
#        return "NO"
    list_hrank = list("hackerrank")
    for letter in s:
        if list_hrank and list_hrank[0] == letter:
            list_hrank.pop(0)
    if not list_hrank:
        return "YES"
    return "NO"

if __name__ == "__main__":
    q = int(raw_input().strip())
    for a0 in xrange(q):
        s = raw_input().strip()
        result = hackerrankInString(s)
        print result
