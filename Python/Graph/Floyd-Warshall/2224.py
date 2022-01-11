import sys

input = sys.stdin.readline
n = int(input())

graph = [[0] * (123) for _ in range(123)] # 대소문자 알파벳 개수는 52개

for _ in range(n):
    a, b = input().split(" => ")
    b = b.strip()
    graph[ord(a)][ord(b)] = 1

for k in range(123):
    for i in range(123):
        for j in range(123):
            if graph[i][k] and graph[k][j]:
                graph[i][j]=1

arr = []

for i in range(123):
    for j in range(123):
        if graph[i][j] and i != j:
            #arr.append(chr(i)+" => "+chr(j))
            arr.append(chr(i)+ " => "+chr[j])
            
print(len(arr))

for i in arr:
    print(i)
    