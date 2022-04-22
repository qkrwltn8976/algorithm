import sys

input = sys.stdin.readline
n, m = map(int, input().split())
li = []
for _ in range(n):
    li.append(input().rstrip())

for i in range(n):
    print(li[i][::-1])