# 모든 정점 (i, j)에 대해서, i에서 j로 가는 경로
import sys

input = sys.stdin.readline

INF = int(1e9)
n = int(input())
graph = [[INF]*(n+1) for _ in range(n)]

for i in range(n):
    graph[i] = list(map(int, input().split()))
  
for k in range(n):
    for i in range(n):
        for j in range(n):
            if graph[i][k] and graph[k][j]:
                graph[i][j] = 1

for i in range(n):
    for j in range(n):
        print(graph[i][j], end=" ")
    print()