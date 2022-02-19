import sys
from itertools import product
input = sys.stdin.readline

n, m = map(int, input().split())
li = list(map(int, input().split()))
li.sort()
combi = product(li, repeat = m)
for i in combi:
    print(*i)
