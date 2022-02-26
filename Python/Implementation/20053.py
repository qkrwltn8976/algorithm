import sys

input = sys.stdin.readline
T = int(input())

while T > 0:
    T -= 1
    n = int(input())
    li = list(map(int, input().split()))
    li.sort()
    print(li[0], li[-1])