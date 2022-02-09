n = int(input())

for _ in range(n):
    m = int(input())
    mon = [25, 10, 5, 1]
    li = [0, 0, 0, 0]

    for i in range(4):
        li[i] = m // mon[i]
        m -= (li[i] * mon[i])
    
    print(*li, sep=" ")
