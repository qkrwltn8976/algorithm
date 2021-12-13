n = int(input())
li = list(sorted(input()) for _ in range(n))
li = sorted(li)
cnt = 1
for i in range(1, n):
    if li[i] != li[i-1]:
        cnt += 1
print(cnt)