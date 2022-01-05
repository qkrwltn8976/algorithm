import sys

input = sys.stdin.readline

n = int(input())
li = [] 
for _ in range(n):
    op = input().split()
    if op[0] == 'add':
        if int(op[1]) not in li:
            li.append(int(op[1]))
    elif op[0] == 'remove':
        if int(op[1]) in li:
            li.remove(int(op[1]))
    elif op[0] == 'check':
        if int(op[1]) in li:
            print(1)
        else:
            print(0)
    elif op[0] == 'toggle':
        if int(op[1]) in li:
            li.remove(int(op[1]))
        else:
            li.append(int(op[1]))
    elif op[0] == 'all':
        li = [i for i in range(1, 21)]
    elif op[0] == 'empty':
        li = []
