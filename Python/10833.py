n = int(input())
sum = 0
for _ in range(n):
    a, b = map(int, input().split())
    sum += b - (a * (b//a))
print(sum)