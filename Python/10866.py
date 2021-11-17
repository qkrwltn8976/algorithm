n = int(input())
yes, no = 0, 0
for _ in range(n):
    n = int(input())
    if n == 1:
        yes += 1
    else:
        no += 1

if yes >= no:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")