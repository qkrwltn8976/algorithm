import sys
import heapq
# 단방향 도로
INF = int(1e9)
input = sys.stdin.readline
n, m, k, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
dp = [INF for _ in range(n+1)]
ans = []

def dijkstra(start):
    q = []
    heapq.heappush(q, (start, 0))
    dp[start] = 0
    while q:
        now, dist = heapq.heappop(q)
        
        if dp[now] < dist:
            continue
        
        for x, w in graph[now]:
            if dp[x] > dp[now] + w:
                dp[x] = dp[now] + w
                heapq.heappush(q, (x, dp[now]+w))

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append((b, 1))

dijkstra(x)

for i in range(1, n+1):
    if dp[i] == k:
        ans.append(i)

ans.sort()

if len(ans) == 0:
    print(-1)
else:
    print(*ans, sep="\n")