def sol(start, end, level):
    if start == end:
        ans[level].append(tree[start])
        return
    center = (start+end) // 2 # // 연산자 -> 나누기 연산 후 소수점 이하의 수를 버리고 정수 부분의 수만 구함
    ans[level].append(tree[center]) # 순회한 순서에서 가장 가운데의 수가 트리의 루트
    sol(start, center-1, level+1)
    sol(center+1, end, level+1)

k = int(input())
tree = list(map(int, input().split()))
ans = [[] for _ in range(k)] # [[], [], []]
sol(0, len(tree)-1, 0)

for list in ans:
    print(*list) # * for a text is equal as printing print(text[0], text[1], ..., text[n])