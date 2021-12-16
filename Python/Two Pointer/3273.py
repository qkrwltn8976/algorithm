# ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의 수
n = int(input())
li = list(map(int, input().split()))
x = int(input())
li.sort()

l, r, ans = 0, n-1, 0

while l<r:
    if li[l] + li[r] > x:
        r -= 1
    elif li[l] + li[r] < x:
        l += 1
    else:
        l += 1
        r -= 1
        ans += 1

print(ans)