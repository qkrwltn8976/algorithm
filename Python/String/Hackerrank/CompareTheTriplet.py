#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    ans = []
    score_a = 0
    score_b = 0
    for i in range(0, 3):
        if a[i] > b[i]:
            score_a+=1
        elif a[i] < b[i]:
            score_b+=1

    ans.append(score_a)
    ans.append(score_b)
    return ans

    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
