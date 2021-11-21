# FBI요원은 요원의 첩보원명에 FBI
import re
cnt = 0
p = re.compile('FBI+')
li = []
for i in range(5):
    if len(p.findall(input())):
        li.append(i+1)

str = ' '.join(map(str, li))
print(str if str != '' else 'HE GOT AWAY!')