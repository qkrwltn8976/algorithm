import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
n = int(input())
tree = [[] for _ in range(n+1)]
parent = [0] * (n+1) # 부모 노드 정보
d = [0] * (n+1) # 각 노드까지의 깊이
c = [0] * (n+1) # 노드의 깊이가 계산되었는지 여부

for _ in range(n-1):
    a, b = map(int, input().split())
    tree[a].append(b)
    tree[b].append(a)

# 루트 노드부터 시작해 깊이를 구하는 함수
def DFS(x, depth):
    c[x] = True
    d[x] = depth
    for y in tree[x]:
        if c[y]:
            continue
        parent[y] = x
        DFS(y, depth+1)

# A, B의 최소 공통 조상을 찾는 함수
# 깊이가 같게 만든 뒤 공통 조상 찾음
def LCA(a, b):
    while d[a] != d[b]: # 깊이가 다르다면 더 깊이가 큰 쪽이 부모쪽으로 이동
        if d[a] > d[b]:
            a = parent[a]
        else:
            b = parent[b]
    while a != b:
        a = parent[a]
        b = parent[b]
        
    
    return a


DFS(1, 0)

m = int(input())
for _ in range(m):
    a, b = map(int, input().split())
    print(LCA(a, b))