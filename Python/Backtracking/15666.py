# dfs backtracking
# 중복되는 수열을 여러 번 출력하면 안되
import sys

input = sys.stdin.readline
n, m = map(int, input().split())
li = list(map(int, input().split()))
li.sort()
tmp = []
ans = set()
def backtracking(idx):
    if len(tmp) == m:
        ans.add(tuple(tmp))
        return

    for i in range(idx, len(li)):
        if li[idx] <= li[i]:
            tmp.append(li[i])
            backtracking(i)
            tmp.pop()
    
for i in range(len(li)):
    tmp.append(li[i])
    backtracking(i)
    tmp.pop()
ans = sorted(ans)
for i in ans:
    print(*i)



