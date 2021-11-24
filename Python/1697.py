# 수빈이가 동생을 찾는 가장 빠른 시간
# 어떻게 이동해야 하는지 공백으로 구분해 출력
from collections import deque

def BFS():
    q = deque() # deque는 양쪽에서 입출력 가능
    q.append(n)

    while q:
        x = q.popleft()

        if x == k:
            print(dist[x])
            break
        
        for nx in (x-1, x+1, x*2):
            if 0 <= nx <= MAX and not dist[nx]:
                dist[nx] = dist[x] + 1
                q.append(nx)

MAX = 10**5 # 100000
n, k = map(int, input().split()) # n 수빈이가 있는 위치 N과 동생이 있는 위치 K
dist = [0] * (MAX+1)
BFS()