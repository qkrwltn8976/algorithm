s = input()
ans = ""
for c in s:
    if ord(c) >= 68 and ord(c) <= 90:
        ans += chr(ord(c)-3) # 문자를 int(아스키코드값)으로 변환
    else:
        ans += chr(ord(c)+23)
print(ans)