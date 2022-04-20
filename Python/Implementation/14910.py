import sys

input = sys.stdin.readline

li = list(map(int, input().split()))
print("Good" if li == sorted(li) else "Bad")