import sys
from collections import deque
from typing import ContextManager
# 0은 빈 칸, 1은 벽, 2는 바이러스
# 세로 크기 N과 가로 크기 M
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [[] for _ in range(n)]

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
cntMax = 0

for i in range(n):
    arr[i] = list(map(int, input().split()))

def BFS():
    global cntMax
    visited = [[False] * m for _ in range(n)]
    q = deque()
    
    ## 바이러스를 모두 돌아주기 위해서 큐에 모든 바이러스를 넣어줌
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 2:
                q.append((i, j))
                visited[i][j] = True

    while q:
        x, y = q.pop()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < n and 0 <= ny < m:
                if arr[nx][ny] == 0 and visited[nx][ny] == False:
                    visited[nx][ny] = True
                    q.append((nx, ny))

    cnt = 0

    for i in range(n):
        for j in range(m):
            if arr[i][j] == 0 and visited[i][j] == False:
                cnt += 1

    cntMax = max(cntMax, cnt)

def make_wall(index):
    if index == 3:
        BFS()
        return

    for i in range(n):
        for j in range(m):
            if arr[i][j] == 0:
                arr[i][j] = 1
                make_wall(index+1)
                arr[i][j] = 0


make_wall(0)
print(cntMax)
