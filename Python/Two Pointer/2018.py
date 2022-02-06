import sys

input = sys.stdin.readline
n = int(input())

l, r = 0, 0
sum, cnt = 0, 0
while l <= r and r <= n:
    if sum <= n:
        r += 1
        sum += r
    else:
        l += 1
        sum -= l
    if sum == n:
        cnt += 1

print(cnt)