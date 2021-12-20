import sys

input = sys.stdin.readline
n, m = map(int, input().split())
INF = int(1e9)
graph = [[] for _ in range(n+1)]
dist = [INF for _ in range(n+1)]

for _ in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

def bf(start):
    dist[start] = 0
    for repeat in range(n): # n번의 라운드 반복
        for i in range(1, n+1): # 모든 간선 확인
            #next_node, cost = graph[j][0]
            for next_node, w in graph[i]:
                if dist[i] != INF and dist[next_node] > dist[i]+w:
                    dist[next_node] = dist[i]+w
                    if repeat == n-1: # n-1라운드에서도 업데이트 되면 음수순환 존재
                        return True
    return False

negative_cycle = bf(1)

if negative_cycle:
    print(-1)
else:
    for i in range(2, n+1): # 1번 도시에서 출발해 2번 도시, 3번 도시, ..., N번 도시로 
        if dist[i] == INF:
            print(-1)
        else:
            print(dist[i])