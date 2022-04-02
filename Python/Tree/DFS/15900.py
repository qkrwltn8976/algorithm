# 각각의 리프노드의 깊이를 구해 그 합이 홀수인지 짝수인지 확인
# 1번 정점은 '루트 노드'
# 루트 노드에서 각각의 리프노드까지의 depth
# 성원이가 항상 선이기 때문에 움직일 수 있는 말의 총 횟수가 홀수여야 성원이 이김

import sys
sys.setrecursionlimit(10**5)

input = sys.stdin.readline

n = int(input())
graph = [[] for _ in range(n+1)]
visited = [False for _ in range(n+1)]
dist = [0 for _ in range(n+1)]

def dfs(idx):
    visited[idx] = True
    for item in graph[idx]:
        if not visited[item]:
            visited[item] = True
            dist[item] = dist[idx] + 1
            dfs(item)

for _ in range(n-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

dfs(1)

ans = 0
for i in range(2, n+1):
    if len(graph[i]) == 1:
        ans += dist[i]
print("No" if ans % 2 == 0 else "Yes")
