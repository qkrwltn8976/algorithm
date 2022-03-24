# 중복되는 경우를 고려
import sys

input = sys.stdin.readline

n = int(input())
dict = {}
for _ in range(n):
    name = input().rstrip()
    if name in dict:
        dict[name] += 1
    else:
        dict[name] = 1

for _ in range(n-1):
    name = input().rstrip()
    if dict[name] == 1:
        del dict[name]
    elif name in dict:
        dict[name] -= 1

print(*dict)