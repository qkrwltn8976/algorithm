import heapq

n = int(input()) # 노드의 개수
graph = [[] for _ in range(n+1)] # 트리는 무방향 그래프 

for _ in range(1, n):
    a, b, w = map(int, input().split())
    graph[a].append((b, w))
    graph[b].append((a, w))

def dijkstra(start):
    q = []
    dp = [1e9] * (n+1)
    dp[start] = 0
    heapq.heappush(q, (start, 0))
    while q:
        now, dist = heapq.heappop(q)
        if dp[now] < dist:
            continue

        for next_node, w in graph[now]:
            cost = dp[now] + w
            if dp[next_node] > cost:
                dp[next_node] = cost
                heapq.heappush(q, (next_node, cost))
    return dp

dp1 = dijkstra(1) # 루트 노드의 번호는 항상 1
mid = dp1.index(max(dp1[1:]))
dp2 = dijkstra(mid)
print(max(dp2[1:]))
