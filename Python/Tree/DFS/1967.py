import sys
sys.setrecursionlimit(10**9)
input = sys.stdin.readline

n = int(input()) # 노드의 개수
tree = [[] for _ in range(n+1)] # 트리는 무방향 그래프 

def DFS(x, w):
    for a, b in tree[x]:
        if dist[a] == -1:
            dist[a] = w + b
            DFS(a, w + b)

for _ in range(n-1):
    a, b, w = map(int, input().split())
    tree[a].append((b, w))
    tree[b].append((a, w))

dist = [-1] * (n+1)
dist[1] = 0
DFS(1, dist[1])

mid = dist.index(max(dist))
dist = [-1] * (n+1)
dist[mid] = 0 
DFS(mid, 0)
print(max(dist))


