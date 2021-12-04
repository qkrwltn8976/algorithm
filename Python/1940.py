# 갑옷은 두 개의 재료로 만드는데 두 재료의 고유한 번호를 합쳐서 M
n = int(input())
m = int(input())
li = list(map(int, input().split()))

li.sort()

l, r, cnt = 0, n-1, 0

while l < r:
    if li[l] + li[r] < m:
        l += 1
    elif li[l] + li[r] > m:
        r -= 1
    else:
        l += 1
        r -= 1
        cnt += 1

print(cnt)
