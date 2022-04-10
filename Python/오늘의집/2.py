import re

call = "ABCabcA"

ans = call.lower()

substrings = set()

for i in range(0, len(ans) - 2 + 1):
    for j in range(1, len(ans) - i + 1):
        substrings.add(ans[i:i+j])

arr = []

maxcnt, maxlen = 0, 0
for i in substrings:
    if ans.count(i) > maxcnt:
        maxcnt = ans.count(i) 
    arr.append([ans.count(i), i])

arr.sort(key=lambda x: (-x[0], -len(x[1])))

for i in arr:
    if maxcnt == i[0] and maxlen <= len(i[1]):
        print(i)
        maxlen = len(i[1])
        idx = ans.find(i[1])
        while idx > -1:
            call = call[:idx] + call[idx+maxlen:]
            ans = ans[:idx] + ans[idx+maxlen:]
            idx = ans.find(i[1])
            print(idx, call, i[1])
    else:
        break
print(call)