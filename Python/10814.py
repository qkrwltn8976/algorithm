import sys
input = sys.stdin.readline

n = int(input())
arr = []

for i in range(n):
    age, name = map(str, input().split())
    age = int(age)
    arr.append((age, name))

arr.sort(key=lambda x:x[0]) ## (age, name)에서 age만 비교

for i in range(n):
    print(arr[i][0], arr[i][1])