import sys

input = sys.stdin.readline

ans = set()
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def DFS(x, y, s):
    if len(s) == 6:
        ans.add(s)
        return
    else:
        for i in range(4):
            nx = dx[i] + x       
            ny = dy[i] + y
            if 0 <= nx < 5 and 0 <= ny < 5:
                DFS(nx, ny, s+m[nx][ny])

m = [input().rstrip().split(" ") for _ in range(5)]
for i in range(5):
    for j in range(5):
        DFS(i, j, m[i][j])
        
print(len(ans))