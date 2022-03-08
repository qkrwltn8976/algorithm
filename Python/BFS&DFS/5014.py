# 총 f층, 명호 s->g층 가기 위해 눌러야 하는 버튼의 수의 최솟값
# U버튼은 위로 U층을 가는 버튼, D버튼은 아래로 D층을 가는 버튼
import sys
from collections import deque
input = sys.stdin.readline

def bfs(idx):
    visited[idx] = True
    q = deque()
    q.append((idx, 0))

    while q:
        idx, cnt = q.popleft()
        if idx == g:
            return cnt

        if 0 < idx + u < f+1 and not visited[idx + u]:
            visited[idx + u] = True
            q.append((idx+u, cnt+1))
        if 0 < idx - d < f+1 and not visited[idx - d]:
            visited[idx - d] = True
            q.append((idx-d, cnt+1))

f, s, g, u, d = map(int, input().split())
visited = [False for _ in range(f+1)]
cnt = 0
ans = bfs(s)
print("use the stairs" if ans == None else ans)