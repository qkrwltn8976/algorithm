# Rev(Rev(X) + Rev(Y))
x, y = input().split()

sum = int(x[::-1]) + int(y[::-1])
print(int(str(sum)[::-1]))

# python 문자열 reverse -> [::-1]