# 이친수는 0으로 시작하지 않는다.
# 이친수에서는 1이 두 번 연속으로 나타나지 않는다. 즉, 11을 부분 문자열로 갖지 않는다.
import sys

input = sys.stdin.readline
n = int(input())
dp = [0, 1, 1]
# 2, 3, 5
# 4 -> 1000, 1001, 1010 (10 + 00, 01, 10)
# 5 -> 10000, 10        (10 + 000, 001, 010, 100, 101)

for i in range(3, n+1):
    dp.append(dp[i-2]+dp[i-1])
print(dp[n])