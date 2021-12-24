import sys
sys.setrecursionlimit(10 ** 6) # recursion error
preOrder = []

while True:
    try:
        preOrder.append(int(input()))
    except:
        break

def postOrder(start, end):
    if start > end:
        return
    root = preOrder[start]
    idx = start + 1
    
    while idx <= end:
        # 전위순회에서 처음으로 루트보다 커지는 시점
        if preOrder[idx] > root:
            break
        idx += 1
    
    postOrder(start+1, idx-1)
    postOrder(idx, end)
    print(root)

postOrder(0, len(preOrder)-1)


# 이진탐색트리
# 노드의 왼쪽 하위 트리에는 노드의 키보다 작은 키가 있는 노드만 포함
# 노드의 오른쪽 하위 트리에는 노드의 키보다 큰 키가 잇는 노드만 포함
# 왼쪽 및 오른쪽 하위 트리도 각각 이진탐색트리여야 함
# 중복된 키를 허용하지 않음