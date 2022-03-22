import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
    idx, s = input().split()
    idx = int(idx)
    print(s[:idx-1], s[idx:], sep="")