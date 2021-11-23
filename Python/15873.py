# (0 < A, B ≤ 10)
s = input()
if len(s) == 2:
    print(int(s[:-1])+int(s[-1:]))
elif len(s) == 3:
    if s[1] == '0':
        print(10 + int(s[-1:]))
    else:
        print(10 + int(s[:1]))
else:
    print(20)