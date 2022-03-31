import sys

input = sys.stdin.readline
INF = 1e10
n = int(input())

graph = [[INF]*(n+1) for _ in range(n+1)]
for i in range(1, n+1):
    graph[i][i] = 0

while True:
    i, j = map(int, input().split())
    if i == -1 and j == -1:
        break
    else:
        graph[i][j] = 1
        graph[j][i] = 1

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j])

min_score = INF

for i in range(1, n+1):
    min_score = min(min_score, max(graph[i][1:]))

candidate = []
for i in range(1, n+1):
    if min_score == max(graph[i][1:]):
        candidate.append(i)
print(min_score, len(candidate))
print(*candidate)


