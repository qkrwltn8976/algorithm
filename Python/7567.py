s = input()
sum = 10
ch = s[0]
for i in range(1, len(s)):
    if s[i] != ch:
        sum += 10
    else:
        sum += 5
    ch = s[i]
print(sum)