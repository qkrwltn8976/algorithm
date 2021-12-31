import sys

def op1():
    return arr[::-1] # 처음부터 끝까지 -1칸 간격으로 ( == 역순으로)

def op2():
    for i in range(len(arr)):
        arr[i] = arr[i][::-1]
    return arr

def op3():
    m, n = n, m
input = sys.stdin.readline
n, m, r = map(int, input().split())
arr = []
for _ in range(n):
    arr.append(list(map(int, input().split())))
print(arr)

for op in input().split():
    if op == '1':
        print(op1())
    elif op == '2':
        print(op2())