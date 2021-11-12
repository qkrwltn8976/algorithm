n = int(input())
for _ in range(n):
    s = input()
    if s.find("+") > -1:
        a, b = map(int, s.split("+"))
        print(a+b)
    else:
        print("skipped")