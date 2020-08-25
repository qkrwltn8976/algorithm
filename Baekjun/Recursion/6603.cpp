/**
 * 로또
*/

#include <iostream>
#define MAX_SIZE 13
#define SIZE 6
using namespace std;

int n; // 각 배열의 길이 저장
int lotto[MAX_SIZE];
int tmp[MAX_SIZE];

void searchLotto(int start, int depth)
{
    if (depth == SIZE)
    { // 6개의 로또 숫자를 모두 뽑았을 경우(깊이가 6에 도달) 숫자 출력
        for (int i = 0; i < SIZE; i++)
        {
            cout << lotto[i] << " ";
        }

        cout << endl;
        return;
    }

    for (int i = start; i < n; i++)
    { // 모든 후보숫자를 반복문을 통해 탐색
        lotto[depth] = tmp[i];
        searchLotto(i + 1, depth + 1);
    }
}

int main()
{
    while (cin >> n && n) // 0이 아닐때 까지 무한 루프
    {
        for (int i = 0; i < n; i++)
        {
            cin >> tmp[i];
        }
        searchLotto(0, 0);
        cout << endl;
    }
    return 0;
}

/**
 * recursion에서는 암묵적인 표현 대신 명시적인 표현 사용
*/