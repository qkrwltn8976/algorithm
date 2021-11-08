arr = list(map(int, input().split()))
arr.sort(reverse=True)
result = 0
if arr[0] == arr[1] and arr[1] == arr[2]:
    result = 10000 + 1000 * arr[0]
elif arr[0] == arr[1] or arr[1] == arr[2]:
    result = 1000 + 100 * arr[1]
else:
    result = 100 * arr[0]
print(result)
