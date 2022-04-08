import sys

input = sys.stdin.readline

n = int(input())
d = [list(map(int, input().split())) for _ in range(n)]
ans = [0, 0, 0]
def dnc(x, y, n):
    check = d[x][y]
    for i in range(x, x+n):
        for j in range(y, y+n):
            if check != d[i][j]:
                check = -2
                break
    if check == -2:
        n = n // 3
        dnc(x, y, n)
        dnc(x+n, y, n)
        dnc(x+2*n, y, n)
        dnc(x, y+n, n)
        dnc(x, y+2*n, n)
        dnc(x+n, y+2*n, n)
        dnc(x+n, y+n, n)
        dnc(x+2*n, y+n, n)
        dnc(x+2*n, y+2*n, n)
        
    else:
        ans[check + 1] += 1

dnc(0, 0, n)
print(*ans)

