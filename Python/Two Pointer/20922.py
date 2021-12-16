n, k = map(int, input().split())
li = list(map(int, input().split()))
arr = [0] * (max(li)+1)
l, r, len = 0, 0, 0

while r<n:
    if arr[li[r]] < k:
        arr[li[r]] += 1
        r+=1
    else:
        arr[li[l]] -= 1
        l+=1
    len = max(r-l, len)

print(len)

