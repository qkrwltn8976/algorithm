T = int(input())
for _ in range(T):
    li = []
    n = int(input())
    for i in range(n):
        n, s = input().split()
        li.append([int(n), s])
        
    li.sort(key=lambda x:-x[0])
    print(li[0][1])