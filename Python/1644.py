n = int(input())
isprime = [False, False] + [True] * (n-1) # 1, 2는 소수 아님
li = []

for i in range(2, n+1):
    if isprime[i]:
        li.append(i)
    for j in range(i*i, n+1, i): # 4, 6, 8.. 9, 12, 15...
        isprime[j] = False

l, r, cnt = 0, 0, 0 # 총합을 구할 때에는 두 포인터가 시작점에서 시작

while l <= r and r <= n:
    tot = sum(li[l:r])

    if tot > n:
        l += 1
    elif tot < n:
        r += 1
    else:    
        cnt += 1
        l += 1
        r += 1

print(cnt)
    

