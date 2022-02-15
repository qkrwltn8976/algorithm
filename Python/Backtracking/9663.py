# n-queens
# 백트레킹 -> decision space
# 하나의 행에는 무조건 하나의 퀸이 존재해야 함
# 같은 열이나 대각선에 퀸이 있다면 가지치기
# 맨 밑의 행까지 퀸을 위치할 수 있다면 +1
import sys
input = sys.stdin.readline

def backtracking(rowPos): # rowPos는 이전 열
    # 퀸을 모두 배치
    global ans
    if rowPos == n:
        ans += 1
        return

    for col in range(n): # 행
        flag = True
        for row in range(rowPos): # 열
            # 같은 열이나 대각선에 퀸이 있다면 가지치기
            if queenLocation[row] == col or abs(rowPos - row) == abs(col - queenLocation[row]):
                flag = False
                break
        if flag:
            queenLocation[rowPos] = col
            backtracking(rowPos + 1)

n = int(input())
ans =  0
queenLocation = [0] * n # 각 행마다 퀸이 위치를 저장하는 배열
backtracking(0)
print(ans)

