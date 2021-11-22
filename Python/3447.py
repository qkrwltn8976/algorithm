import re

p = re.compile('BUG*')

while True:
    try:
        s = input()
        print(p.sub('', s))
    except: # EOF 에러 처리(파일입력)
        break