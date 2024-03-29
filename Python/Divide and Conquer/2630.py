import sys

input = sys.stdin.readline

n = int(input())
d = [list(map(int, input().split())) for _ in range(n)]
white = 0
blue = 0

def dnc(x, y, n):
    global white
    global blue
    check = d[x][y]
    
    for i in range(x, x+n):
        for j in range(y, y+n):
            if check != d[i][j]:
                check = -1
                break
            
    if check == -1:
        n = n // 2
        dnc(x, y, n)
        dnc(x, y + n, n)
        dnc(x + n, y, n)
        dnc(x+n, y+n, n)
    elif check == 1:
        blue += 1
    else:
        white += 1

dnc(0, 0, n)
print(white, blue)