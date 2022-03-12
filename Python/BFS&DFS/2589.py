# 육지(L)나 바다(W)
# 상하좌우로 이웃한 육지로만 가능
# 보물은 서로 간에 최단 거리로 이동하는데 있어 가장 긴 시간이 걸리는 육지 두 곳
import sys
from collections import deque
input = sys.stdin.readline

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def BFS(x, y):
    visited = [[False] * (w) for _ in range(l)]
    q = deque()
    q.append((x, y, 0))
    visited[x][y] = True

    while q:
        x, y, cnt = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx < l and 0 <= ny < w:
                if m[nx][ny] == 'L' and not visited[nx][ny]:
                    visited[nx][ny] = True
                    q.append((nx, ny, cnt+1))
    return cnt

l, w = map(int, input().split())
m = [input().strip() for _ in range(l)]

ans = -1
for i in range(l):
    for j in range(w):
        if m[i][j] == 'L':
            ans = max(ans, BFS(i, j))
print(ans)