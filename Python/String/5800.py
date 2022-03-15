import sys

input = sys.stdin.readline
t = int(input())

for j in range(t):
    li = list(map(int, input().split()))
    n = li[0]
    li = li[1:n+1]
    li.sort()
    gap = 0
    
    for i in range(n-1):
        gap = max(li[i+1]-li[i], gap)
    print("Class", j+1)
    print("Max " + str(li[-1]) + ", Min " + str(li[0]) + ", Largest gap " + str(gap))