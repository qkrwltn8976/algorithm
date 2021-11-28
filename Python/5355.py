# @는 3을 곱하고, %는 5를 더하며, #는 7을 빼는 연산자
t = int(input())

for _ in range(t):
    li = list(input().split())
    result = li[0] = float(li[0])
    
    for i in range(1, len(li)):
        if li[i] == '@':
            result *= 3
        elif li[i] == '%':
            result += 5
        else:
            result -= 7
    print('%.2f' %(result))

