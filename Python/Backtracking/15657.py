import sys

input = sys.stdin.readline
n, m = map(int, input().split())
li = list(map(int, input().split()))
li.sort()
ans=[]

def dfs(depth):
    if depth == m:
        print(" ".join(map(str, ans)))
        return
    for i in range(n):
        if depth == 0 or li[i] >= ans[depth-1]:
            ans.append(li[i])
            dfs(depth+1)
            ans.pop()


dfs(0)