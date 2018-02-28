#!/bin/python

import sys

def staircase(total, number):
    # Complete this function
    hash_number = ""
    for space in range(0, total - number):
        hash_number += " "
    for hash in range(0, number):
        hash_number = hash_number + "#"
    return hash_number

if __name__ == "__main__":
    n = int(raw_input().strip())
    for number in range(1, n+1):
        print staircase(n, number)

