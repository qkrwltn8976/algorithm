# 가장 강렬한 빛의 광고판만이 눈에 들어온다.
# 시야가 M이라고 하면 현재 위치에서 앞뒤로 M-1칸
# 2M-1개 보면서 뛰고 싶기 때문에(중심으로) M번째 칸에서 뛰기 시작해서 N-M+1번째 칸에서 멈춘다
n, m = map(int, input().split())
li = list(map(int, input().split()))

val = max(li[:2*m-1])
ans = [val]

for i in range(m, n-m+1):
    # 윈도우 앞 값
    if li[i+m-1] > val:
        val = li[i+m-1] # 앞뒤로 M-1칸
    elif li[i-m] == val:
        val = max(li[i-m+1:i+m])
    ans.append(val)

print(' '.join(map(str, ans)))
