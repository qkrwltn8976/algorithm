T = int(input())

for i in range(T):
    li = input().split(" ")
    li.reverse()
    print(f"Case #{i+1}:", *li, sep=" ")