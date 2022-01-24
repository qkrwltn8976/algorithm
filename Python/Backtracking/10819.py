import sys
from itertools import permutations
input = sys.stdin.readline
n = int(input())

li = list(map(int, input().split()))
perm = list(permutations(li, n))
maxval = 0
for i in perm:
    sum = 0
    for j in range(n-1):
        sum += abs(i[j]-i[j+1])
    if sum > maxval:
        maxval = sum
print(maxval)