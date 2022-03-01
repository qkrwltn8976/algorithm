# 모든 사람들은 최대 6단계 이내에서 서로 아는 사람으로 연결될 수 있다
# 케빈 베이컨의 수가 가장 작은 사람을 구하는 프로그램
# 유저의 수 N (2 ≤ N ≤ 100)과 친구 관계의 수 M (1 ≤ M ≤ 5,000)
# 그런 사람이 여러 명일 경우에는 번호가 가장 작은 사람을 출력
import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
graph = [[] for _ in range(n+1)] 

def BFS(idx):
    num = [0] * (n+1)
    visited = [False] * (n+1)
    q = deque()
    q.append(idx)
    while q:
        a = q.popleft()
        for i in graph[a]:
            if not visited[i]:
                visited[i] = True
                num[i] = num[a] + 1
                q.append(i)

    num[idx] = 0
    return sum(num)



for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

dic = {}
for i in range(1, n+1):
    dic[i] = BFS(i)
dic = sorted(dic.items(), key=lambda x:x[1])
print(dic[0][0])
