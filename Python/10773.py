n = int(input())
stack = []
for i in range(n):
    a = int(input())
    if a == 0:
        stack.pop()
    else:
        stack.append(a)

sum = 0
while len(stack) > 0:
    sum = sum + stack.pop()

print(sum)
