import sys

input = sys.stdin.readline

n = int(input())
for _ in range(n):
    li = list(map(int, input().split()))
    li.sort()
    li = li[1:-1]
    if li[-1] - li[0] >= 4:
        print("KIN")
    else:
        print(sum(li))