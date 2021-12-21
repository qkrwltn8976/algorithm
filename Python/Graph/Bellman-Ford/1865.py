import sys

# 도로는 방향이 없으며 웜홀은 방향이 있다.
INF = int(1e9)
input = sys.stdin.readline
tc = int(input())

def bf():
    for repeat in range(n):
        for i in range(1, n+1): # 기준 dist[i]
            for next_node, w in graph[i]:
                if dist[next_node] > w + dist[i]:
                    dist[next_node] = w + dist[i]
                    if repeat == n-1: # 음의 순환
                        return True
    return False

for _ in range(tc):
    n, m, w = map(int, input().split()) # 지점의 수 N(1 ≤ N ≤ 500), 도로의 개수 M(1 ≤ M ≤ 2500), 웜홀의 개수 W(1 ≤ W ≤ 200)
    graph = [[] for _ in range(n+1)]
    dist = [INF] * (n+1)
    for _ in range(m): # 도로
        s, e, t = map(int, input().split())
        graph[s].append((e, t))
        graph[e].append((s, t))

    for _ in range(w): # 웜홀
        s, e, t = map(int, input().split())
        graph[s].append((e, -t))

    print("YES" if bf() else "NO")
    
    
    
