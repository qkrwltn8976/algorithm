from collections import defaultdict
import sys

input = sys.stdin.readline
dict = defaultdict(int)
tot = 0
while True:
    s = input().rstrip() # sys.stdin.readline을 추가할 경우 입력값에 공백이 추가됨
    if s == "": # if not s와 동일
        break
    if s in dict:
        dict[s] += 1
    else:
        dict[s] = 1
    tot += 1

trees = sorted(dict.keys())
for key in trees:
    print('%s %.4f' %(key, dict[key] / tot * 100))

