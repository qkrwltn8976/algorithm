n = int(input())
graph = [[] for _ in range(n)]
ans = [[] for _ in range(n)]

for i in range(n):
    graph[i] = list(map(int, input().split()))
    
for i in range(n):
    for j in range(n):
        if map[i][j] == 1:
            ans[i][j] = 1