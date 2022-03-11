import sys
sys.setrecursionlimit(10**7)

input = sys.stdin.readline
t = int(input())

def DFS(idx):
    visited[idx] = True
    idx = li[idx-1]

    if not visited[idx]:
        DFS(idx)
    

for i in range(t):
    n = int(input())
    li = list(map(int, input().split()))
    
    visited = [False] * (n+1)
    cnt = 0
    for i in range(1, n+1):
        if not visited[i]:
            DFS(i)
            cnt += 1

    print(cnt)


