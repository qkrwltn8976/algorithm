# 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지
import sys

input = sys.stdin.readline
n = int(input())
dp = [0, 1, 3]
# 3 - 5, 4 - 11

for i in range(3, n+1):
    dp.append(dp[i-2] * 2 + dp[i-1])
print(dp[n] % 10007)
