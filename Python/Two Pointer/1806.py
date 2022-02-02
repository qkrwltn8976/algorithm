import sys

input = sys.stdin.readline
n, s = map(int, input().split())
li = list(map(int, input().split()))

l, r, ans = 0, 0, sys.maxsize
tot = li[l]  # 5 1 3 5
while l <= r and r < n:
    # tot = sum(li[l:r]) # 일반 sum들을 모두 구하는 과정은 시간초과
    if tot >= s:
        tot -= li[l]
        ans = min(ans, r-l+1)    
        l += 1  
    else:   
        r += 1
        if r == n: break
        tot += li[r] 

print(0 if ans == sys.maxsize else ans)
