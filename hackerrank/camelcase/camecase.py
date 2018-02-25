#!/bin/python

import sys
import string

def camelcase(s):
    count = 1
    for char in s:
        if char in string.ascii_uppercase:
            count += 1
    return count

if __name__ == "__main__":
    s = raw_input().strip()
    result = camelcase(s)
    print result
