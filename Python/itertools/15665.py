import sys
from itertools import product
input = sys.stdin.readline

n, m = map(int, input().split())
li = list(map(int, input().split()))
li.sort()

prod = product(li, repeat=m)
prod = sorted(set(prod))

for i in prod:
    print(*i)



