import sys
input = sys.stdin.readline

cnt = 0
for i in range(8):
    for j, value in enumerate(input()):
        if ((j % 2 == 0 and i % 2 == 0) or (j % 2 == 1 and i % 2 == 1)) and value == 'F':
            cnt += 1
print(cnt)
