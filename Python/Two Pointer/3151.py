import sys

input = sys.stdin.readline
n = int(input())

li = sorted(list(map(int, input().split())))
# 한 개의 수 선택 후 투 포인터를 통해 나머지 두개의 수 구하기
# 세 수의 합이 0이 되려면 나머지 두 수의 합이 선택한 원소(arr[i])의 음수값
cnt = 0
ans = []
for i in range(n-2):
    l, r = i+1, n-1
    while l < r:
        tmp = li[l] + li[r]
        if tmp < -li[i]:
            l += 1
        elif tmp > -li[i]:
            r -= 1
        else:
            # 두 수가 같은 수라면 그 수들로부터 2개를 뽑는 경우의 수만큼 팀 구성 가능(정렬되어 있어 그 사이의 수는 두 수와 동일)
            if li[l] == li[r]:
                # 조합 계산식
                cnt += (r-l+1)*(r-l)//2
                break
            # 두 수가 다른 수라면, 왼쪽 포인터가 가리키는 수의 갯수 * 오른쪽 포인터가 가리키는 수의 갯수(각각 왼쪽 수와 오른쪽 수와 동일한 사이값 존재)
            else:
                cnt_l, cnt_r = 0, 0
                left, right = li[l], li[r]
                while li[l] == left:
                    cnt_l +=1
                    l += 1
                while li[r] == right:
                    cnt_r += 1
                    r -= 1
                cnt += cnt_l * cnt_r
print(cnt)


##### 시간초과
# import sys
# from itertools import combinations

# input = sys.stdin.readline

# n = int(input())

# li = list(map(int, input().split()))
# combi = combinations(li, 3)
# ans = []

# for i in combi:
#     if sum(i) == 0:
#         ans.append(i)

# print(len(ans))