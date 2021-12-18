import sys
import heapq

INF = int(1e9)
input = sys.stdin.readline
n, m, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
graph_r = [[] for _ in range(n+1)]

for _ in range(m):
    start, end, t = map(int, input().split())
    graph[start].append((end, t))
    graph_r[end].append((start, t))

def dijkstra(start, graph):
    q = []
    dp = [INF]*(n+1)
    dp[start] = 0
    heapq.heappush(q, (start, 0))
    
    while q:
        now, dist = heapq.heappop(q)
        
        if dp[now] < dist:
            continue
        
        # 그래프에서 현재 노드와 인접한 다른 노드들 확인
        for next_node, w in graph[now]:
            cost = w + dist
            if dp[next_node] > cost:
                dp[next_node] = cost
                heapq.heappush(q, (next_node, cost))
    return dp



ans = 0
go = dijkstra(x, graph)
back = dijkstra(x, graph_r)
for i in range(1, n+1):
    ans = max(ans, go[i] + back[i])
 
print(ans)
