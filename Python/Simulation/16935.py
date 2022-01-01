import sys

input = sys.stdin.readline
n, m, r = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

def op1():
    return arr[::-1] # 처음부터 끝까지 -1칸 간격으로 ( == 역순으로)

def op2():
    for i in range(len(arr)):
        arr[i] = arr[i][::-1]
    return arr

def op3():
    global n, m # n, m = m, n을 선언해줘서 가로, 세로가 바뀌지 않게 선언
    n, m = m, n
    li = list(zip(*arr))
    for i in range(len(li)):
        li[i] = li[i][::-1]
    return li # zip -> 병렬 처리

def op4():
    global n, m # n, m = m, n을 선언해줘서 가로, 세로가 바뀌지 않게 선언
    n, m = m, n
    li = list(zip(*arr))
    return li[::-1]

def op5():
    li = [[0]*m for _ in range(n)]
    for i in range(int(n/2)): # 1->2 y축
        for j in range(int(m/2)): # x축
            li[i][j+int(m/2)] = arr[i][j]
    for i in range(0, int(n/2)):
        for j in range(int(m/2), m):
            li[i+int(n/2)][j] = arr[i][j]
    for i in range(int(n/2), n):
        for j in range(int(m/2), m):
            li[i][j-int(m/2)]=arr[i][j]
    for i in range(int(n/2), n):
        for j in range(int(m/2)):
            li[i-int(n/2)][j] = arr[i][j]
    return li

def op6():
    li = [[0]*m for _ in range(n)]
    for i in range(int(n/2)): # 1->2 y축
        for j in range(int(m/2)): # x축
            li[i+int(n/2)][j] = arr[i][j]
    for i in range(0, int(n/2)):
        for j in range(int(m/2), m):
            li[i][j-int(m/2)] = arr[i][j]
    for i in range(int(n/2), n):
        for j in range(int(m/2), m):
            li[i-int(n/2)][j]=arr[i][j]
    for i in range(int(n/2), n):
        for j in range(int(m/2)):
            li[i][j+int(m/2)] = arr[i][j]
    return li
    
for op in input().split():
    if op == '1':
        arr = op1()
    elif op == '2':
        arr = op2()
    elif op == '3':
        arr = op3()
    elif op == '4':
        arr = op4()
    elif op == '5':
        arr = op5()
    elif op == '6':
        arr = op6()

for i in arr:
    print(*i)