import sys
from itertools import permutations
input = sys.stdin.readline

n, m = map(int, input().split())
li = list(map(int, input().split()))

perm = permutations(li, m)
perm = set(perm)
for i in sorted(perm):
    print(*i)

