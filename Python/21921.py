# X일 동안 가장 많이 들어온 방문자 수와 그 기간
# 슬라이딩 윈도우
# Window를 한 칸 옮기면 (W-1) 칸은 겹친다 ! 즉, 중복된 항목이 W-1 이므로 이전의 결과를 최대한 응용!
n, x = map(int, input().split())
li = list(map(int, input().split()))

if max(li) == 0:
    print("SAD")
else:
    tot = sum(li[0:x])
    val = tot
    cnt = 1
    for i in range(x, n):
        tot += li[i] # 슬라이딩 윈도우 앞의 값
        tot -= li[i-x] # 슬라이딩 윈도우 뒤의 값

        if tot == val:
            cnt += 1
        elif tot > val:
            val = tot
            cnt = 1

    print(val)
    print(cnt)

