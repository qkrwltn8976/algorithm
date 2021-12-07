# 정규식 활용
import re
n = int(input())
s = input()
li = re.findall('\d+', s) # /d : 숫자, + : 앞의 표현식이 1회 이상 연속으로 반복되는 부분과 대응
print(sum(map(int, li)))