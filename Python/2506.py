n = int(input())
sum = 0
i = 0
prev = 0
li = list(map(int, input().split()))
for item in li:
    if item == 1:
        prev = 1
        if prev == 1:
            i += 1
        sum += i
    else:
        prev = 0
        i = 0
print(sum)

