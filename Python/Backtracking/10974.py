import sys
input = sys.stdin.readline

n = int(input())
li = []

def backtracking(idx):
    if idx == n:
        print(*li)
        return
    for i in range(1, n+1):
        if i not in li:
            li.append(i)
            backtracking(idx+1)
            li.pop()

backtracking(0)
