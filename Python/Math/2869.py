import math
a, b, v = map(int, input().split())
sum, cnt = 0, 0

print(math.ceil((v-a) / (a-b)) + 1)