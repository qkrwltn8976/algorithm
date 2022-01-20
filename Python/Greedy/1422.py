import sys
from functools import cmp_to_key
# cmp_to_key 함수
# 양수면 앞으로 가고, 0이면 그대로, 음수면 뒤로 보내는 것

def cmp(x, y):
    if str(x) + str(y) > str(y) + str(x):
        return -1
    else:
        return 1

input = sys.stdin.readline
k, n = map(int, input().split())
li = [int(input()) for _ in range(k)]

# 가장 큰 수를 여러번 쓰는게 유리, k가 n보다 작으면 큰 수를 배열에 채워넣음
li.sort()
for _ in range(k, n):
    li.append(li[-1])

li = sorted(li, key=cmp_to_key(cmp))

print(*li, sep="")
