# 좌우 0.5만큼 간격
import sys

input = sys.stdin.readline

n, l = map(int, input().split())
li = list(map(int, input().split()))
li.sort()
a = li[0]
cnt = 1
for i in range(1, n):
    if a + l > li[i]:
        continue
    cnt += 1
    a = li[i]
print(cnt)