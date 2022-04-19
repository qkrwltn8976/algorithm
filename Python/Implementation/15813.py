import sys

input = sys.stdin.readline

n = int(input())
s = input().rstrip()
ans = 0
for c in s:
    ans += (ord(c) - 64)
print(ans)