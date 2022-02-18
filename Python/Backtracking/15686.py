# 치킨 거리는 집과 가장 가까운 치킨집 사이의 거리
# 도시의 치킨 거리는 모든 집의 치킨 거리의 합
# 수익을 증가시키기 위해 일부 치킨집을 폐업
# 가장 수익을 많이 낼 수 있는  치킨집의 개수는 최대 M개
# 폐업시키지 않을 치킨집을 최대 M개를 골랐을 때, 도시의 치킨 거리의 최솟값
# 0은 빈 칸, 1은 집, 2는 치킨집
# m개의 치킨집 선택
import sys
from itertools import combinations

input = sys.stdin.readline
ans = sys.maxsize 
n, m = map(int, input().split())
house = []
chicken = [] 
li = list(list(map(int, input().split())) for _ in range(n))

for i in range(n):
    for j in range(n):
        if li[i][j] == 1:
            house.append([i, j])
        elif li[i][j] == 2:
            chicken.append([i, j])

for combi in combinations(chicken, m):
    tmp = 0
    for home in house:
        chi_len = sys.maxsize
        for chick in combi:
            chi_len = min(chi_len, abs(home[0]-chick[0]) + abs(home[1]-chick[1]))
        tmp += chi_len
    ans = min(tmp, ans)
print(ans)
