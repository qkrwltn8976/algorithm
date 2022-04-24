import sys

input = sys.stdin.readline

n, m = map(int, input().split())

h = list(map(int, input().split()))
j = list(map(int, input().split()))

print(max(h)+max(j))