import sys
from collections import deque

input = sys.stdin.readline
n, k = map(int, input().split())
visited = [-1 for _ in range(100001)]

def BFS():
    q = deque()
    visited[n] = 0
    q.append(n)
    
    while q:
        s = q.popleft()
        if s == k:
            return visited[s]
        
        if 0 <= s * 2 <= 100000 and visited[s * 2] == -1:
            visited[s * 2] = visited[s] # 순간이동을 하는 경우에는 0초 후에 2*X의 위치로 이동
            q.appendleft(s * 2) # 큐의 앞부분에 삽입하여 우선순위를 갖도록 함

        if 0 <= s - 1 <= 100000 and visited[s - 1] == -1:
            visited[s - 1] = visited[s] + 1
            q.append(s - 1)

        if 0 <= s + 1 <= 100000 and visited[s + 1] == -1:
            visited[s + 1] = visited[s] + 1
            q.append(s + 1)


print(BFS())


