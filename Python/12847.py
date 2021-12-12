n, m = map(int, input().split())
li = list(map(int, input().split()))
val = sum(li[:m])
tot = val
for i in range(1, n-m+1):
    val -= li[i-1]
    val += li[i+m-1]
    
    if val > tot:
        tot = val

print(tot)
    
