import sys

input = sys.stdin.readline

li = [int(input()) for _ in range(10)]
sum = 0

for i in range(10):
    sum += li[i]
    if sum >= 100:
        if sum-100 > 100-sum+li[i]:
            sum-=li[i]
        break
print(sum)
