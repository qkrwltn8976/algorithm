import sys
import heapq # 최소힙 min heap

input = sys.stdin.readline
V, E = map(int, input().split())
k = int(input())
graph = [[] for _ in range(V+1)]
distance = [sys.maxsize for _ in range(V+1)]

def dijkstra(start):
    q = [] # q를 min heap으로 저장
    heapq.heappush(q, (0, start)) # 시작 노드로 가기 위한 최단 경로는 0으로 설정하여, 큐에 삽입
    distance[start] = 0

    while q:
        dist, now = heapq.heappop(q) # 가장 최단 거리가 짧은 노드에 대한 정보 꺼내기

        # 현재 노드가 이미 처리된 적이 있는 노드라면 무시
        if distance[now] < dist:
            continue
        # 현재 노드와 연결된 다른 인접한 노드들을 확인
        for w, next_node in graph[now]:
            cost = dist + w

            if cost < distance[next_node]:
                distance[next_node] = cost
                heapq.heappush(q, (cost, next_node))

for i in range(E):
    u, v, w = map(int, input().split())
    # (가중치, 목적지 노드) 형태로 저장
    graph[u].append((w, v))

dijkstra(k)


for i in range(1, V+1):
    print("INF" if distance[i] == sys.maxsize else distance[i])