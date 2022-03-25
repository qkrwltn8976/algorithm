import sys

input = sys.stdin.readline

str = input().rstrip()
li = []
dict = {} 
dict["P"] = 13
dict["K"] = 13
dict["H"] = 13
dict["T"] = 13

for i in range(0, len(str), 3):
    li.append(str[i:i+3])

if len(li) != len(set(li)):
    print("GRESKA")
    exit(0)
else:
    for i in li:
        dict[i[0]] -= 1
print(*dict.values())
    
