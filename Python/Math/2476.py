n = int(input())
ans = 0

for i in range(n):
    li = list(map(int, input().split()))
    
    if li[0] == li[1] == li[2]:
        ans = max(ans, (10000 + li[0] * 1000))
    elif li[0] == li[1]:
        ans = max(ans, (1000 + li[0] * 100))
    elif li[1] == li[2]:
        ans = max(ans, (1000 + li[1] * 100))
    elif li[2] == li[0]:
        ans = max(ans, (1000 + li[2] * 100))
    else:
        ans = max(ans, (max(li) * 100))

print(ans)
