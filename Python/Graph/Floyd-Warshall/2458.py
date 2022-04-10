import sys

input = sys.stdin.readline

n, m = map(int, input().split())
graph = [[0] * (n+1) for _ in range(n+1)]

for _ in range(m):
    a, b = map(int, input().split())
    graph[a][b] = 1 # a < b

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            if graph[i][j] == 1 or (graph[i][k] == 1 and graph[k][j] == 1):
                graph[i][j] = 1 # 자신보다 작은 경우

cnt = 0
for i in range(1, n+1):
    check = 0
    for j in range(1, n+1):
        check += graph[i][j] + graph[j][i] # 자신보다 작은사람과 큰사람의 합
    if check == n-1:
        cnt += 1

print(cnt)