import sys

n, x = map(int, sys.stdin.readline().split())
li = list(map(int, sys.stdin.readline().split()))
for i in li:
    if i < x:
        print(i, end=' ')