import sys

n, k = map(int, input().split())
arr = []
dp = [0] * (k+1)
for _ in range(n):
    i = int(input())
    arr.append(i)
dp[0] = 1 # dp[0] -> 동전 하나를 사용하는 경우 
          # (coin이 3일 때, dp[3 - 3] = 1로 맞춰줌으로써 0원에서 3원을 더해 3원을 만드는 경우라고 생각)
for i in arr:
    for j in range(i, k+1):
        if j-i >= 0:
            dp[j] += dp[j-i]

print(dp[k])