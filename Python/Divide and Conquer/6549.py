import sys

input = sys.stdin.readline

while True:
    h = list(map(int, input().split()))
    if h[0] == 0:
        break
    n = h[0]
    # 마지막에 stack에 있는 값을들 다 꺼내기 위해 마지막 h값은 0
    h = h[1:] + [0]
    stack = [(0, h[0])]
    cnt, ans, check = 1, h[0], h[0]
    for i in range(1, n+1):
        w = i
        # 나보다 stack에 있는 h가 더 높으면 꺼내서 (나의 높이 * 너비)
        while stack and stack[-1][1] > h[i]:
            w, hi = stack.pop()
            ans = max(ans, (i-w)*hi)
        stack.append([w, h[i]])
    print(ans)
