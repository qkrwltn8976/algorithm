n, m = map(int, input().split())
s = set([input() for _ in range(n)]) # 집합 S에 같은 문자열이 여러 번 주어지는 경우는 없다 -> set으로 저장
cnt = 0
for _ in range(m):
    if input() in s:
        cnt += 1
print(cnt)
