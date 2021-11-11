n = int(input())
dict = {}
for _ in range(n):
    s, ext = input().split(".")
    if ext in dict.keys():
        tmp = dict.get(ext)
        dict[ext] = tmp+1
    else:
        dict[ext] = 1

# 확장자 이름의 사전순으로 출력
dict = sorted(dict.items())

for key, value in dict:
    print(key, value)