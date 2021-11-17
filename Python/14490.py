def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

# 유클리드 호제법
# a = bq + r
# gcd(a, b) == gcd(b, r)

a, b = map(int, input().split(":"))
n = gcd(a, b)
print("{}:{}".format(a//n, b//n))
#print(a%n+" "+b%n)