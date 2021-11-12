import sys

n = int(input())
sum = 0
arr = []
for _ in range(n):
    start, end = map(int, sys.stdin.readline().split())
    arr.append((start, end))
    # arr.append(list(map(int, sys.stdin.readline().split()))) 시간 초과

arr.sort()
prevStart, prevEnd = arr[0][0], arr[0][1]

for i in range(1, n):
    start, end = arr[i][0], arr[i][1]
    if start <= prevEnd:
        prevEnd = max(prevEnd, end) # 2 4 / 3 5
    else: # 2 4 / 6 7
        sum += prevEnd-prevStart
        prevStart, prevEnd = start, end

sum += prevEnd-prevStart
print(sum)

