import sys
input = sys.stdin.readline
num = [i for i in range(1, 31)]

for i in range(28):
    n = int(input())
    if n in num:
        num.remove(n)

print('\n'.join(map(str, num)))
