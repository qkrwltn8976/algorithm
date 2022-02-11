s = input()
ans = 0.0
if s[0] == 'A':
    if s[1] == '+':
        ans = 4.3
    elif s[1] == '0':
        ans = 4.0
    else:
        ans = 3.7
elif s[0] == 'B':
    if s[1] == '+':
        ans = 3.3
    elif s[1] == '0':
        ans = 3.0
    else:
        ans = 2.7
elif s[0] == 'C':
    if s[1] == '+':
        ans = 2.3
    elif s[1] == '0':
        ans = 2.0
    else:
        ans = 1.7
elif s[0] == 'D':
    if s[1] == '+':
        ans = 1.3
    elif s[1] == '0':
        ans = 1.0
    else:
        ans = 0.7
else:
    ans = 0.0

print(ans)      
