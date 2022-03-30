import sys

input = sys.stdin.readline

s = input().rstrip()
l, r = 0, 0

for i in range(len(s)):
    if i < len(s)/2:
        l += int(s[i])
    else:
        r += int(s[i])
print("LUCKY" if l == r else "READY")