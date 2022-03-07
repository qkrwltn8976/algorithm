# 스타트 팀의 능력치와 링크 팀의 능력치의 차이를 최소
import sys
from itertools import combinations

input = sys.stdin.readline
n = int(input())
team = [list(map(int, input().split())) for _ in range(n)]

# n명의 인원 중에서 n/2의 인원을 뽑고 나머지 인원은 set으로 차집합시켜서 뺌
# set에서만 차집합 가능
li = range(n)
combi = combinations(li, n//2)
ans = sys.maxsize
for r1 in combi:
    r2 = list(set(li) - set(r1))

    start, link = 0, 0
    for r in combinations(r1, 2):
        start += team[r[0]][r[1]]
        start += team[r[1]][r[0]]
    for r in combinations(r2, 2):
        link += team[r[0]][r[1]]
        link += team[r[1]][r[0]]
    ans = min(ans, abs(start-link))
print(ans)