from itertools import combinations

while True:
    li = list(map(int, input().split()))
    if li[0] == 0:
        break
    combi = list(combinations(li[1:], 6))
    
    for i in range(len(combi)):
        print(" ".join(map(str, combi[i])))
    print("")