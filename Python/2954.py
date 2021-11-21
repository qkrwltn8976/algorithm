str = input()
s = ''
i = 0
while i < len(str):
    s += str[i]
    if str[i] in 'aeiou':
        i += 2
    i += 1

print(s)