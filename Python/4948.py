import sys
input = sys.stdin.readline
# 소수를 모두 구해 놓아서 계산 1 ≤ n ≤ 123,456
li = [False, False] + [True] * (2*123456-1)
for i in range(2, 2*123456+1):
    for j in range(i*i, 2*123456+1, i):
        li[j] = False

while True:
    n = int(input())
    if n == 0:
        break

    cnt = 0
    for i in range(2, 2*n+1):
        if li[i] == True and i > n:
            cnt += 1

    print(cnt)