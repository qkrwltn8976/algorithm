import sys

input = sys.stdin.readline

n = int(input())
li = list(map(int, input().split()))
m = int(input())

dp = [0 for _ in range(n)]
dp[0] = li[0]
for i in range(1, n):
    dp[i] += li[i] + dp[i-1]

for _ in range(m):
    i, j = map(int, input().split())
    if i == 1:
        print(dp[j-1])
    else:
        print(dp[j-1]-dp[i-2])