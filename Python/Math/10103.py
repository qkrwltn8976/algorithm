import sys

input = sys.stdin.readline
n = int(input())
y, d = 100, 100
for i in range(n):
    a, b = map(int, input().split())
    if a > b:
        d -= a 
    elif a < b:
        y -= b

print(y, d, sep="\n")