# 가장 강렬한 빛의 광고판만이 눈에 들어온다.
# 2M-1개 보면서 뛰고 싶기 때문에(중심으로) M번째 칸에서 뛰기 시작해서 N-M+1번째 칸에서 멈춘다
n, m = map(int, input().split())
li = list(map(int, input().split()))

val = max(li[:m-1])
ans = [val]
temp = li[m]
for i in range(m+1, n-m+2):
    # 윈도우 앞 값
    if li[i] > val:
        val = li[i]
    elif temp == val:
        val = max(li[i-m+1:i])
    ans.append(val)

print(ans)

# n-m+2 - m-1
# n-2m+1