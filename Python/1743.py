# 세로 길이 N, 가로 길이 M, 음식물 쓰레기의 개수 K
# K개의 줄에 음식물이 떨어진 좌표 (r, c)
from collections import deque

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
ans = 0

n, m, k = map(int, input().split())
board = [[0]*m for _ in range(n)]
visited = [[0]*m for _ in range(n)]

for _ in range(k):
    r, c = map(int, input().split())
    board[r-1][c-1] = 1

def bfs(x, y):
    q = deque()
    q.append((x, y))
    visited[x][y] = 1
    ans = 1
    while q:
        x, y = q.popleft()

        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            
            if 0 <= nx < n and 0 <= ny < m:
                if board[nx][ny] == 1 and not visited[nx][ny]:
                    q.append((nx, n))
                    visited[nx][ny] = 1
                    ans += 1
    return ans+1

val = 0
for i in range(n):
    for j in range(m):
        if board[i][j] == 1:
            val = max(bfs(i, j), val)

print(val)

