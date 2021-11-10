import sys
sys.setrecursionlimit(10 ** 9) # 재귀 함수의 최대깊이를 늘려주지 않으면 런타임 에러가 발생
                               # ** Exponent
n = int(input())
tree = [[] for _ in range(n+1)] # 변수 _는 실제 사용되지 않는 dummy variable
parents = [0 for _ in range(n+1)]

for i in range(n-1):
    x, y = map(int, input().split())
    tree[x].append(y)
    tree[y].append(x)

def DFS(start, tree, parents):
    for i in tree[start]: # 연결된 노드 모두 탐색
        if parents[i] == 0: # 부모가 없을 경우 부모 노드 저장
            parents[i] = start
            DFS(i, tree, parents)

DFS(1, tree, parents)

for i in range(2, n+1):
    print(parents[i])
