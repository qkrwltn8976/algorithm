import sys
from math import log2

sys.setrecursionlimit(100000)
input = sys.stdin.readline

n = int(input())
LOG = int(log2(n) + 1)
tree = [[] for _ in range(n+1)]
parent = [[0] * LOG for _ in range(n+1)] # 부모 노드 정보
d = [0] * (n+1)
visited = [False] * (n+1)

for _ in range(n - 1):
    a, b = map(int, input().split())
    tree[a].append(b)
    tree[b].append(a)

def dfs(x, depth):
    visited[x] = True
    d[x] = depth
    
    for y in tree[x]:
        if visited[y]:
            continue
        parent[y][0] = x # 2의 0 제곱
        dfs(y, depth+1)


def set_parent():
    dfs(1, 0)
    # 모든 노드의 전체 부모 관계 갱신
    for i in range(1, LOG):
        # 각 노드에 대해 2^i번째 부모 정보 갱신
        for j in range(1, n+1):
            parent[j][i] = parent[parent[j][i-1]][i-1]
            # ex) j의 1승 = j의 0승의 부모의 0승


def lca(a, b):
    # b가 더 깊도록 설정
    if d[a] > d[b]:
        a, b = b, a # swap
    
    for i in range(LOG-1, -1, -1):
        if d[a] <= d[parent[b][i]]:
            b = parent[b][i]

    if a == b:
        return a
    
    for i in range(LOG-1, -1, -1):
        if parent[a][i] != parent[b][i]:
            a = parent[a][i]
            b = parent[b][i]
    
    return parent[a][0]

set_parent()
m = int(input())

for _ in range(m):
    a, b = map(int, input().split())
    print(lca(a, b))
