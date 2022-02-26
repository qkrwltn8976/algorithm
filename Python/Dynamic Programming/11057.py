import sys

input = sys.stdin.readline
n = int(input())

dp = [[0] * 10 for _ in range(n+1)]
for i in range(10):
    dp[1][i] = 1
    
for j in range(1, n+1):
    for i in range(0, 10):
        for col in range(i+1):
            dp[j][i] += dp[j-1][col]
           
print(sum(dp[n]) % 10007)
