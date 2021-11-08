str = input()
bomb = input()
stack = []
len = len(bomb)
last = bomb[len-1]

for c in str:
    stack.append(c)
    if last == c: # 현재 글자가 폭발 문자열의 마지막 글자와 일치하면 스택의 top부터 폭발문자열의 길이까지 확인
        if ''.join(stack[-len:]) == bomb: # ''.join -> 배열을 문자열로 저장
            del stack[-len:] # 시간초과 stack = stack[:-len]
                             # del stack[?] 해당 인덱스에 있는 값을 지움

print("FRULA" if not stack else ''.join(stack)) # not stack ->list 비어있음을 확인 