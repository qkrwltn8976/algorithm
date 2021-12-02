# A[i] + A[i+1] + … + A[j-1] + A[j]가 M이 되는 경우의 수
n, m = map(int, input().split())
li = list(map(int, input().split()))

l, r, cnt = 0, 1, 0

while l <= r and r <= n:
    tot = sum(li[l:r])
    
    if tot > m:
        l += 1
    elif tot < m:
        r += 1
    else:
        r += 1
        l += 1
        cnt += 1

print(cnt)
