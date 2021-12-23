import sys

input = sys.stdin.readline

n = int(input())
tree = [[] for _ in range(n+1)]
dist = [-1] * (n+1)
def DFS(start, w):
    dist[start] = w

    for node, wei in tree[start]:
        if dist[node] == -1 and dist[start] + wei > dist[node]:
            dist[node] = dist[start] + wei
            DFS(node, dist[start] + wei)

for _ in range(n):
    li = list(map(int, input().split()))

    for i in range(1, len(li[1:-1]), 2):
        tree[li[0]].append((li[i], li[i+1]))
        tree[li[i]].append((li[0], li[i+1]))


DFS(1, 0)
start = dist.index(max(dist))
dist = [-1] * (n+1)
DFS(start, 0)
print(max(dist))