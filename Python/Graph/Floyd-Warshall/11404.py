# 모든 도시의 쌍 (A, B)에 대해서 도시 A에서 B로 가는데 필요한 비용의 최솟값
import sys
input = sys.stdin.readline
INF = int(1e9)
n = int(input())
m = int(input())

d = [[INF] * (n) for _ in range(n)]

for _ in range(m):
    a, b, c = map(int, input().split())
    d[a-1][b-1] = min(c, d[a-1][b-1])

for k in range(n):
    d[k][k] = 0
    for i in range(n):
        for j in range(n):
            d[i][j] = min(d[i][k] + d[k][j], d[i][j])

for i in range(n):
    for j in range(n):
        if d[i][j] == INF:
            print(0, end=" ")
        else:
            print(d[i][j], end=" ")
    print()
