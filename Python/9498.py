n = int(input())

if  90 <= n and n <= 100:
    result = 'A'
elif 80 <= n and n < 90:
    result = 'B'
elif 70 <= n and n < 80:
    result = 'C'
elif 60 <= n and n < 70:
    result = 'D'
else:
    result = 'F'

print(result)