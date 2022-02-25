# 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것
# 문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자
import sys

input = sys.stdin.readline
s1 = input().strip().upper()
s2 = input().strip().upper()

dp = [[0 for _ in range(len(s2)+1)] for _ in range(len(s1)+1)]
for i in range(1, len(s1)+1): 
    for j in range(1, len(s2)+1):
        if s1[i-1] == s2[j-1]:
            dp[i][j] = dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])                

print(dp[-1][-1])

