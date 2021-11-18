# 총 입력 받을 걸그룹의 수 N, 맞혀야 할 문제의 수 M
# 팀의 이름, 걸그룹의 인원 수, 멤버의 이름
n, m = map(int, input().split())
dict = {}
for _ in range(n):
    teamname = input()
    num = int(input())
    dict[teamname] = [input() for _ in range(num)]

for _ in range(m):
    name = input()
    type = int(input())
    if type == 1:
        for team, mem in dict.items():
            if name in mem:
                print(team)
    else:
        print('\n'.join(sorted(dict[name])))
    