import sys

min = sys.maxsize
sum = 0
for _ in range(7):
    n = int(input())
    if n%2==1:
        sum += n
        min = n if min > n else min

if sum == 0:
    print(-1)
else:
    print(sum)
    print(min)