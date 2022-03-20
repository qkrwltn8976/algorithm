import sys
input = sys.stdin.readline

n, m = map(int, input().split())
li = list(map(int, input().split()))
acc = [0 for _ in range(n)]

for i in range(n):
    if i == 0:
        acc[i] = li[0]
    else:
        acc[i] = acc[i-1] + li[i]

for _ in range(m):
    i, j = map(int, input().split())
    if i == 1:
        print(acc[j-1])
    else:
        print(acc[j-1]-acc[i-2])