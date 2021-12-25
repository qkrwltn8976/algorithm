t = int(input())

def solve(preOrder, inOrder):
    # 전위 순위에서 발견한 루트 값을 중위 순위에서 찾아보니 루트 값을 기준으로 왼쪽 서브 트리, 오른쪽 서브 트리로 분리
    if len(preOrder) == 0:
        return
    if len(preOrder) == 1:
        result.append(preOrder[0])
        return
    
    root = preOrder[0]
    idx = inOrder.index(root)

    solve(preOrder[1:idx+1], inOrder[:idx])
    solve(preOrder[idx+1:], inOrder[idx+1:])
    result.append(root)
    #print(root, end=" ")

for _ in range(t):
    n = int(input())
    # 전위순회
    # 루트 먼저
    preOrder = list(map(int, input().split()))
    inOrder = list(map(int, input().split()))
    result = []
    solve(preOrder, inOrder)
    print(*result)
    # 중위순회 : 전위순회의 root값을 기준으로 왼쪽, 오른쪽 서브트리로 분할
    # 루트 중간
