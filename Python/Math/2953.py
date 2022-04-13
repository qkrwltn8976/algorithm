import sys

ans = [0, 0]
for i in range(5):
    su = sum(list(map(int, input().split())))
    if ans[1] < su:
        ans = [i+1, su]

print(*ans)
