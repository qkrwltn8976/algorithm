import sys

input = sys.stdin.readline

n, k = map(int, input().split())
li = list(map(int, input().split()))
ans = []
for i in range(n-k+1):
    tot = 0
    for j in range(i, i+k):
        tot += li[j]
    ans.append(tot)
print(max(ans))