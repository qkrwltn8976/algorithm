n = input()
cnt = 0
for item in input().split():
    if n == item[:1]:
        cnt += 1

print(cnt)
