import sys

input = sys.stdin.readline
n = int(input())
cnt = [0] * 27
ans = []
for _ in range(n):
    s = input()
    i = ord(s[:1])-97
    cnt[i] += 1
    if cnt[i] == 5:
        ans.append(chr(i+97))

ans.sort()
if len(ans) > 0:
    print(*ans, sep='')
else:
    print('PREDAJA')