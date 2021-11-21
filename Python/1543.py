import re
str = input()
s = input()
p = re.compile(s)
print(len(p.findall(str)))
