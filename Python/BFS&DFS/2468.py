# 물에 잠기지 않는 안전한 영역이 최대로 몇 개
# 일정한 높이 이하의 모든 지점은 물에 잠긴다
import sys
from collections import deque

input = sys.stdin.readline
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def bfs(x, y, h, visited):
    global cnt
    q = deque()
    if m[x][y] > h and not visited[x][y]:
        visited[x][y] = True
        q.append((x, y))

        while q:
            x, y = q.pop()
            
            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                
                if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny] and m[nx][ny] > h:       
                    visited[nx][ny] = True
                    q.append((nx, ny))  
        cnt += 1


n = int(input())
m = []
maxval = 0
for _ in range(n):
    li = list(map(int, input().split()))
    maxval = max(maxval, max(li))
    m.append(li)

maxnum = 0
for i in range(0, maxval): # 비가 안 올 경우
    cnt = 0
    visited = [[False] * n for _ in range(n)]
    for x in range(n):
        for y in range(n):
            bfs(x, y, i, visited)

    if maxnum < cnt:
        maxnum = cnt

print(maxnum)
