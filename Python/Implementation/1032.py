import sys
input = sys.stdin.readline

n = int(input())

s = list(input())

for _ in range(n-1):
    for index, value in enumerate(input()):
        if value != s[index]:
            s[index] = "?"

print("".join(s))