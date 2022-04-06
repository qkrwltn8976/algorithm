import sys

input = sys.stdin.readline

n = int(input())
d = [list(map(int, input().rstrip())) for _ in range(n)]

def dnc(x, y, n):
    check = d[x][y]
    for i in range(x, x+n):
        for j in range(y, y+n):
            if check != d[i][j]:
                check = -1
                break
    if check == -1:
        print("(", end="")
        n = n // 2
        dnc(x, y, n) # 오른쪽 위
        dnc(x, y+n, n) # 왼쪽 위
        dnc(x+n, y, n) # 오른쪽 아래
        dnc(x+n, y+n, n) # 왼쪽 아래
        print(")", end="")
    else:
        print(check, end="")

dnc(0, 0, n)
