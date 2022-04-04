import sys

input = sys.stdin.readline

n = int(input())

for _ in range(n):
    s = input().rstrip()
    print(s[0:1], s[-1:], sep="")
