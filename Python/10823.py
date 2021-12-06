s = ""
while True:
    try:
        s += input()    
    except EOFError:
        break

li = list(map(int, s.split(',')))
print(sum(li[0:]))