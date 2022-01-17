import sys

input = sys.stdin.readline

while True:
    n = int(input())
    if n == -1:
        exit(0)
    arr = []
    for i in range(1, n):
        if n % i == 0:
            arr.append(i)
    sum = 0
    for i in arr:
        sum += i

    if sum == n:
        print(str(n) + " = ", end="")
        print(*arr, sep=" + ")
    else:
        print(str(n) + " is NOT perfect.")
    
    