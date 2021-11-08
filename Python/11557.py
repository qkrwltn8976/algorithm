T = int(input())
while T > 0:
    T = T-1
    n = int(input())
    arr = []
    for i in range(n): 
        name, num = input().split()
        num = int(num)
        arr.append((name, num))
    arr.sort(key=lambda x:-x[1])
    print(arr[0][0])