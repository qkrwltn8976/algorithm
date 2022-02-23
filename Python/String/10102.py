n = int(input())
s = input()
a, b = 0, 0
for i in s:
    if i == 'A':
        a += 1
    elif i == 'B':
        b += 1

if a > b:
    print('A')
elif a < b:
    print('B')
else:
    print('Tie')
