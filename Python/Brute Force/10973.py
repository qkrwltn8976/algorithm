import sys
input = sys.stdin.readline

n = int(input())
li = list(map(int, input().split()))
# 인덱스 k 이후의 값들 중 a[k] > a[m]이 성립하는 m의 최대를 찾는다.
# k와 m 자리의 값을 서로 바꿔준다.
# 인덱스 k 이후의 값들을 내림차순으로 정렬한다.

k = -1
for i in range(len(li)-1):
    if li[i] > li[i+1]:
        k = i

if k == -1:
    print(k)
else:
    for i in range(k+1, len(li)):
        if li[i] < li[k]:
            m = i
    li[k], li[m] = li[m], li[k]
    tmp = li[k+1:]
    tmp.sort(reverse=True)
    ans = li[:k+1] + tmp
    print(*ans, sep=" ")
