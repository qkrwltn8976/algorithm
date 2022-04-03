import sys

input = sys.stdin.readline
s = input()
a, b = 0, 0
for i in range(len(s)-3):
    str = (s[i:i+3])
    if str == "JOI":
        a += 1
    if str == "IOI":
        b += 1

print(a)
print(b)