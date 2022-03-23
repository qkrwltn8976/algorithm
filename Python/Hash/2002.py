import sys

input = sys.stdin.readline

n = int(input())
enter = {}
for i in range(n):
    enter[input().strip()] = i  
end = [input().strip() for _ in range(n)]
cnt = 0
for i in range(n-1):
    for j in range(i+1, n):
        if enter[end[i]] > enter[end[j]]:
            cnt += 1
            break
print(cnt)