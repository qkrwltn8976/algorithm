import sys

input = sys.stdin.readline
print(max(sum(list(map(int, input().split()))), sum(list(map(int, input().split())))))