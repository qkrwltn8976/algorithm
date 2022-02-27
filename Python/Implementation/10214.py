T = int(input())
while T > 0:
    T -= 1
    kcnt, ycnt = 0, 0
    for _ in range(9):
        y, k = map(int, input().split())
        ycnt += y
        kcnt += k
        
    if kcnt > ycnt:
        print("Korea")
    elif kcnt < ycnt:
        print("Yonsei")
    else:
        print("Draw")