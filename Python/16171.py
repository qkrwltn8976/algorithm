import sys

input = sys.stdin.readline
str = input()
find = input().strip()
s = ""
for c in str:
    if c.isalpha():
        s += c

print(1 if s.find(find) > -1 else 0)
