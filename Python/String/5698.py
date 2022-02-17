from sys import breakpointhook


while True:
    s = input()
    if s == "*":
        exit(0)
    li = s.split()
    w = li[0][0].lower()
    ans = True
    for i in range(1, len(li)):
        if li[i][0].lower() != w:
            ans = False
            break
    print("Y" if ans else "N")