import sys

input = sys.stdin.readline
INF = sys.maxsize

t = int(input())
for _ in range(t):
    n = int(input()) # 편의점의 개수
    graph = []
    d = [[INF]*(n+2) for _ in range(n+2)]
    for i in range(n+2): # 집 -> 편의점 n -> 락페
        graph.append(list(map(int, input().split())))
    
    for i in range(n+2):
        for j in range(n+2):
            if j == i:
                continue
            if abs(graph[i][0]-graph[j][0])+abs(graph[i][1]-graph[j][1]) <= 1000:
                d[i][j] = 1

    for k in range(n+2):
        for i in range(n+2):
            for j in range(n+2):
                if d[i][j] > d[i][k]+d[k][j]:
                    d[i][j] = d[i][k]+d[k][j] # min 함수를 쓸 경우 시간초과

    print("happy" if 0 <= d[0][n+1] < INF else "sad")

