import sys
import math

s = input()
li = [0] * 10

for i in s:
    li[int(i)] += 1

ans = max(li)
if ans == li[6] or ans == li[9]:
    tmp = (li[6] + li[9]) / 2
    li[6] = math.ceil(tmp)
    li[9] = math.floor(tmp)

print(max(li))