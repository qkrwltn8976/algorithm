n, k = map(int, input().split()) # 국가의 수 N, 등수를 알고 싶은 국가 K
arr = []

for i in range(n):
    arr.append(list(map(int, input().split()))) # list(map(함수, 리스트))    # 인덱스로 요소 하나 하나에 접근한 뒤 int로 변환하여 다시 저장

arr.sort(key=lambda x : (-x[1], -x[2], -x[3])) # 다중 조건 정렬

for i in range(n):
    if arr[i][0] == k:
        idx = i
# -는 역순, : 문자는 slice operation이라고 부르는데 리스트를 slice할 때 사용
for i in range(n):
    if arr[idx][1:] == arr[i][1:]:
        print(i+1) #  정렬된 배열을 검사하며 국가번호 index의 금메달, 은메달, 동메달의 수와 같다면 i에 1을 더한 값을 출력
        break
