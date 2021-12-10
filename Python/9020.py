# 4 ≤ n ≤ 10,000
T = int(input())
isPrime = [False, False] + [True] * (10000-1)
li = []
for i in range(2, 10000+1):
    for j in range(i*i, 10000+1, i):
        isPrime[j] = False
        
for _ in range(T):
    n = int(input())

    l, r = n//2, n//2
    for i in range(10000):
        if isPrime[l] and isPrime[r]:
            break
        else:
            l -= 1
            r += 1

    print(l, r)

