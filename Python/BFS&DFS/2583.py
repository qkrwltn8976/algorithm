# DFS
# 영역의 넓이를 오름차순으로 정렬
import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

m, n, k = map(int, input().split())
squ = [[0] * (n) for _ in range(m)]
visited = [[False] * (n) for _ in range(m)]
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def DFS(y, x):
    visited[y][x] = True
    global cnt

    for i in range(4):
        nx = dx[i] + x
        ny = dy[i] + y

        if 0 <= nx < n and 0 <= ny < m:
            if not visited[ny][nx] and squ[ny][nx] == 0:
                visited[ny][nx] = True
                cnt += 1
                DFS(ny, nx)

for _ in range(k):
    x1, y1, x2, y2 = map(int, input().strip().split())
    for y in range(y1, y2):
        for x in range(x1, x2):
            squ[y][x] = 1

ans = []
for i in range(m):
    for j in range(n):
        if not visited[i][j] and squ[i][j] == 0:
            cnt = 1
            DFS(i, j)
            ans.append(cnt)
ans.sort()
print(len(ans))
print(*ans, sep=" ")
