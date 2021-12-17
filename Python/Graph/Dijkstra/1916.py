import sys
import heapq

input = sys.stdin.readline

n = int(input())
m = int(input())

distance = [sys.maxsize for _ in range(n+1)]
graph = [[] for _ in range(n+1)]

def dijkstra(start):
    q = []
    distance[start] = 0
    heapq.heappush(q, (start, 0))
    while q:
        now, dist = heapq.heappop(q)

        if distance[now] < dist:
            continue

        # dist가 더 작을 때
        for next_node, w in graph[now]:
            cost = dist + w
            if distance[next_node] > cost:
                distance[next_node] = cost
                heapq.heappush(q, (next_node, cost))

for i in range(0, m):
    start, end, w = map(int, input().split())
    graph[start].append((end, w))

start, end = map(int, input().split())
dijkstra(start)

print(distance[end])
