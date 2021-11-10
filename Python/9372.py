import sys
input = sys.stdin.readline
T = int(input())

def DFS(idx, cnt):
    visited[idx] = 1
    for i in tree[idx]:
        if visited[i] == 0:
            cnt = DFS(i, cnt+1)
    return cnt

for _ in range(T):
    n, m = map(int, input().split()) # 국가의 수 N, 비행기의 종류 M
    tree = [[] for _ in range(n+1)]
    visited = [0 for _ in range(n+1)]
    
    for _ in range(m):
        a, b = map(int, input().split()) 
        tree[a].append(b)
        tree[b].append(a)
    
    print(DFS(1, 0))

