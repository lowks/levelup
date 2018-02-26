#!/bin/python

import sys

def miniMaxSum(arr):
    # Complete this function
    sums = []
    for i, v in enumerate(arr):
        sums.append(sum(arr) - arr[i])
    print "%s %s" %(min(sums), max(sums))
        

if __name__ == "__main__":
    arr = map(int, raw_input().strip().split(' '))
    miniMaxSum(arr)
