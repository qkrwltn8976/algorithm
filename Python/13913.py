from collections import deque

def BFS():
    q = deque()
    q.append(n)
    while q:
        x = q.popleft()
        p = []
        if x==k:
            print(dist[x])
            while x != n:
                p.append(x)
                x = path[x]
            p.append(n)
            p.reverse()
            print(' '.join(map(str, p)))
            break
        
        for dx in (x-1, x+1, x*2):
            if 0 <= dx <= MAX and not dist[dx]:
                dist[dx] = dist[x] + 1
                q.append(dx)
                path[dx] = x # path[다음좌표] = 현재좌표


MAX = 10**5
n, k = map(int, input().split())
dist = [0] * (MAX+1)
path = [0] * (MAX+1)
BFS()