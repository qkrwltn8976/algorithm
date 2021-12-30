import sys
sys.setrecursionlimit(int(1e5))
input = sys.stdin.readline

n, m = map(int, input().split())
parent = [i for i in range(n+1)]

def getParent(x):
    if x == parent[x]:
        return x
    parent[x] = getParent(parent[x])
    return parent[x]

def union(a, b):
    a = getParent(a)
    b = getParent(b)

    if a < b:
        parent[b] = a
    else:
        parent[a] = b

def find(a, b):
    a = getParent(a)
    b = getParent(b)

    if a == b:
        return 1
    else:
        return 0

for _ in range(m):
    val, a, b = map(int, input().split())
    if val == 0: # union
        union(a, b)
    elif val == 1: # find a와 b가 같은 집합에 포함되어 있는지를 확인
        print("YES" if find(a, b) else "NO")
        

