/**
 * 비어있는 공집합 S가 주어졌을 때, 아래 연산을 수행하는 프로그램을 작성하시오.
add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
all: S를 {1, 2, ..., 20} 으로 바꾼다.
empty: S를 공집합으로 바꾼다. 
*/

#include <cstdio>

string *cal = {"add", "remove", "check", "toggle", "all", "empty"};

bool exists(int input, int *n) = {
    bool exist = false;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == input)
        {
            exist = true;
        }
    }
    return exist;
}

int main()
{

    int n;
    scanf("%d", &n);

    int *num = new int[n];
    string s;
    bool result;
    int input;
    while (n--)
    {
        scanf("%s %d", &s, &input);
        result = cal(input, *n);

        switch (s)
        {
        case cal[0]:
            if(result==false)
                num[num.size() + 1] = input; 
            break;
        case cal[1] : 
            if(result==true)
            
        case cal[2] : 
            print(exists(input, &num)+"\n");
            break;
        case cal[3] : 
        case cal[4] : 
        case cal[5]:
        }
    }
    return 0;
}

/**
 * 비트연산 / 비트마스크
 * 
 * A << B == A * 2^B
 * A >> B == A / 2^B
 * (A+B) / 2 = (A+B) >> 1
 * 
 * 정수로 집합 표현
 * {1,3,4,5,9} = 570 = 2^1 + 2^3 + 2^4 + 2^5 + 2^9
 * 
 * 포함 검사
 * : 포함할 경우 자기 자신 반환
 * : 아닐 경우 0 반환
 * 3 포함 검사
 * 570 & 2^3
 * 
 * 추가하기
 * 2 추가하기
 * 570 | 2^2 = 570 | (1<<2) = 574
 * 
 * 제거하기
 * 3 제거하기
 * 570 | ~2^3
*/