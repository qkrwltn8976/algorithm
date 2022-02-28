# 방향 없는 그래프
import sys
sys.setrecursionlimit(10000)

input = sys.stdin.readline
n, m = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [False for _ in range(n+1)]
cnt = 0

def dfs(idx):
    visited[idx] = True
    for i in graph[idx]:
        if not visited[i]:
            dfs(i)

    
for _ in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

for i in range(1, n+1):
    if not visited[i]:
        dfs(i)
        cnt += 1

print(cnt)
