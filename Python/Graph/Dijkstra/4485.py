import sys
import heapq

INF = int(1e9)
input = sys.stdin.readline
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
cnt = 0
def dijkstra(cnt):
    q = []
    dp = [[INF]*(n+1) for _ in range(n)]
    dp[0][0] = 0
    heapq.heappush(q, (arr[0][0], 0, 0))
    while q:
        dist, x, y = heapq.heappop(q)
        if x == n-1 and y == n-1:
            print(f'Problem {cnt}: {dp[x][y]}')
            break
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx <n and 0<= ny <n:
                if dp[nx][ny] > arr[nx][ny] + dist:
                    dp[nx][ny] = arr[nx][ny] + dist
                    heapq.heappush(q, (dp[nx][ny], nx, ny))

while True:
    n = int(input())
    cnt+=1
    if n == 0:
        break
    arr = []
    for _ in range(n):
        arr.append(list(map(int, input().split())))
    dijkstra(cnt)


