sum = 0
for i in range(5):
    n = int(input())
    sum += n if n > 40 else 40
print(int(sum/5))