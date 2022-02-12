s = input()
ans = []

for i in range(len(s)):
    for j in range(len(s)):
        if j+i+1 > len(s):
            continue
        ans.append(s[j:j+i+1])
print(len(set(ans)))
