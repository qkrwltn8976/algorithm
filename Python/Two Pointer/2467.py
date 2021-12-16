import sys
n = int(input())
li = list(map(int, input().split()))
li.sort()

l, r, min = 0, n-1, sys.maxsize
ans = []
while l < r and r < n:  
    if min > abs(li[l] + li[r]):
        min = abs(li[l] + li[r])
        ans = (li[l], li[r])
    
    if li[l] + li[r] > 0:
        r -= 1
    else:
        l += 1
    
print(ans[0], ans[1])

