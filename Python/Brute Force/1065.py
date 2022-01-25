# 한수의 개수
n = int(input()) # 1,000보다 작거나 같은 자연수 N

def hansu():
    if n < 100:
        return n
    else:
        cnt = 99 # 한자리수, 두자리수
        for i in range(100, n+1):
            s = str(i)
            if int(s[2])-int(s[1]) == int(s[1])-int(s[0]):
                cnt += 1
        return cnt

print(hansu())


    