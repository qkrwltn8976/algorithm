import sys
sys.setrecursionlimit(10**7)

input = sys.stdin.readline

m, n = map(int, input().split())

dx = [1, -1, 0, 0, 1, -1, -1, 1]
dy = [0, 0 , 1, -1, 1, 1, -1, -1]
d = [list(map(int, input().split())) for _ in range(m)]

def DFS(x, y):
    d[x][y] = 0

    for i in range(8):
        nx = dx[i] + x
        ny = dy[i] + y

        if 0 <= nx < m and 0 <= ny < n and d[nx][ny]:
            d[nx][ny] = 0
            DFS(nx, ny)
cnt = 0
for i in range(m):
    for j in range(n):
        if d[i][j] == 1:
            cnt += 1
            DFS(i, j)
print(cnt)