import sys

input = sys.stdin.readline

t = int(input())

def binary_search(data, arr):
    start, end = 0, len(arr)-1
    res = -1
    while start <= end:
        mid = (start + end) // 2
        if data <= arr[mid]:
            end = mid - 1
        else:
            res = mid
            start = mid + 1

    return res


while t > 0:
    t -= 1
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    cnt = 0
    
    a.sort()
    b.sort()
    
    for i in a:
        cnt += (binary_search(i, b) + 1)
    print(cnt)
