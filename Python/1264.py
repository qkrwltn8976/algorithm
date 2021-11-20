import re

p = re.compile('[aeiou]+')
while True:
    s = input().lower()
    if s == "#":
        exit(0)
    else:
        m = p.findall(s)
        sum = 0
        for i in m:
            sum += len(i)
        print(sum)
