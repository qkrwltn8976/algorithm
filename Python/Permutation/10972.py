# next permutation 알고리즘
# 1. 해당 배열을 오름차순으로 정렬
# 2. 뒤쪽부터 탐색하여 교환위치(i-1) 찾기
#   - i 부터 탐색하여 i -1 < i 인 경우 찾기(가장 마지막 인덱스)
#   - 뒤에서부터 내림차순이다가 오름차순으로 바뀌는 지점 찾기
# 3. 뒤쪽부터 탐색하여 교환위치(i-1)와 교환할 교환 위치의 값 보다 큰 값 위치(j)
#   - 인덱스 가장 큰 값 선택
# 4. 두 위치 값(i - 1, j) 교환
# 5. j 이후로 오름차순 정렬
n = int(input())

li = list(map(int, input().split()))
x = 0
for i in range(n-1, 0, -1):
    if li[i-1] < li[i]: # 뒷값이 앞값보다 크다면 서로 위치를 swap
        x = i-1
        break
for i in range(n-1, 0, -1):
    if li[x] < li[i]:
        li[x], li[i] = li[i], li[x]
        ans = li[:x+1] + sorted(li[x+1:])
        print(*ans)
        exit(0)
print(-1)
