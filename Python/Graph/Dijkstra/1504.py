import sys
import heapq

input = sys.stdin.readline
n, e = map(int, input().split())

graph = [[] for _ in range(n+1)]

# 방향성 없는 그래프
for _ in range(e):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

v1, v2 = map(int, input().split())

def dijkstra(start):
    q = []
    dp = [sys.maxsize for _ in range(n+1)]
    heapq.heappush(q, (start, 0))
    dp[start] = 0

    while q:
        now, dist = heapq.heappop(q)

        if dp[now] < dist:
            continue

        for next_node, w in graph[now]:
            cost = w + dp[now]
            if dp[next_node] > cost:
                dp[next_node] = cost
                heapq.heappush(q, (next_node, cost))

    return dp

# 1 => v1 => v2 => N
# 1 => v2 => v1 => N

one = dijkstra(1)
dp_v1 = dijkstra(v1)
dp_v2 = dijkstra(v2)
val = min(one[v1]+dp_v1[v2]+dp_v2[n], one[v2]+dp_v2[v1]+dp_v1[n])
print(val if val < sys.maxsize else -1)
