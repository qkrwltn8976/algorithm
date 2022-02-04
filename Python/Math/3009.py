x_li = []
y_li = []
for _ in range(3):
    x, y = map(int, input().split())
    x_li.append(x)
    y_li.append(y)
ans = [0, 0]
a, b = 0, 0
for i in range(3):
    if x_li.count(x_li[i]) == 1:
        a = x_li[i]
    if y_li.count(y_li[i]) == 1:
        b = y_li[i]
print(a, b)
