# 한 번에 가장 많은 컴퓨터를 해킹할 수 있는 컴퓨터의 번호를 오름차순으로 출력
import sys
from collections import deque

input = sys.stdin.readline

def BFS(idx):
    visited = [False] * (n+1)
    q = deque()
    q.append(idx)
    visited[idx] = True
    cnt = 1
    while q:
        x = q.popleft()
        for i in graph[x]:
            if not visited[i]:
                visited[i] = True
                q.append(i)
                cnt += 1

    return cnt

n, m = map(int, input().split())
graph = [[] for _ in range(n+1)]

for _ in range(m):
    a, b = map(int, input().split())
    # A가 B를 신뢰하는 경우에는 B를 해킹하면, A도 해킹할 수 있다
    graph[b].append(a)

maxcnt = 0
result = []
for i in range(1, n+1):
    cnt = BFS(i)
    if maxcnt < cnt:
        maxcnt = cnt
    result.append([i, cnt])

for idx, cnt in result:
    if cnt == maxcnt:
        print(idx, end=" ") 

