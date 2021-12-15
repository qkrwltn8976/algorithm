n = int(input())
s = input()

l, r, cnt, ans = 0, 0, 0, 0
dict = {}
while l <= r and r < len(s): 
    if len(dict) <= n:    
        if s[r] not in dict.keys():
            dict[s[r]] = 1
        else:
            dict[s[r]] += 1
        r += 1
    else:      
        if s[l] in dict.keys():
            if dict[s[l]] == 1:
                dict.pop(s[l])
            else:
                dict[s[l]] -= 1
        l += 1

    if len(dict) <= n:
        ans = max(ans, r-l)
    
print(ans)

