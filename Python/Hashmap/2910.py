# 자주 등장하는 빈도순대로 정렬
n, c = map(int, input().split())

li = list(map(int, input().split()))
ans = {}
for i in range(n):
    if li[i] in ans:
        ans[li[i]] += 1
    else:
        ans[li[i]] = 1

ans = sorted(ans.items(), key=lambda x:x[1], reverse=True)

for key, value in ans:
    for _ in range(value):
        print(key, end=" ")
