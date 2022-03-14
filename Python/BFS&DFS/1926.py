# 첫째 줄에는 그림의 개수, 둘째 줄에는 그 중 가장 넓은 그림의 넓이
# 첫째 줄에는 그림의 개수, 둘째 줄에는 그 중 가장 넓은 그림의 넓이
import sys
from collections import deque

input = sys.stdin.readline
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def BFS(x, y):
    p[y][x] = 0
    q = deque()
    cnt = 1
    q.append((x, y))
    while q:
        x, y = q.pop()

        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            
            if 0 <= nx < m and 0 <= ny < n:
                if p[ny][nx] == 1:
                    cnt += 1
                    p[ny][nx] = 0
                    q.append((nx, ny))
    return cnt

n, m = map(int, input().split())

p = [list(map(int, input().split())) for _ in range(n)]
ans = []
for i in range(n):
    for j in range(m):
        if p[i][j] == 1:
            ans.append(BFS(j, i))

if len(ans) == 0:
    print(len(ans))
    print(0)
else:
    print(len(ans))
    print(max(ans))


