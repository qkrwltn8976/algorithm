# 강의 서쪽에는 N개의 사이트가 있고 동쪽에는 M개의 사이트가 있다 (N ≤ M)
# 서쪽의 사이트와 동쪽의 사이트를 다리로 연결
# 다리를 최대한 많이 지으려고 하기 때문에 서쪽의 사이트 개수만큼 (N개) 다리를 지으려고 한다
# 다리끼리는 서로 겹쳐질 수 없다고 할 때 다리를 지을 수 있는 경우의 수
# nCr = n-1Cr-1 + n-1Cr
# (0 < N ≤ M < 30) 
import sys

input = sys.stdin.readline
T = int(input())
dp = [[0 * j for j in range(i+1)] for i in range(30)]
dp[1][0] = 1
dp[1][1] = 1

for i in range(2, 30):
    for j in range(i+1):
        if j == 0 or j == i:
            dp[i][j] = 1
        elif j == 1 or j == i:
            dp[i][j] = i
        else:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j]

while T > 0:
    T -= 1
    n, m = map(int, input().split())

    print(dp[m][n])
