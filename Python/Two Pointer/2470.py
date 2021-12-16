# 두 합의 절댓값 제일 작은 한 쌍
import sys
n = int(input())
li = list(map(int, input().split()))
li.sort()
l, r = 0, n-1
min = sys.maxsize
ans = []

while l < r:
    tot = li[l]+li[r]
    if abs(tot) < min:
        min = abs(tot)
        ans = [li[l], li[r]]

    if tot < 0:
        l += 1
    else:
        r -= 1

print(ans[0], ans[1])