/**
 * 하노이 탑 이동 순서
*/

#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int mid, int end)
{
    if (n == 1)
    {
        cout << start << " " << end << "\n";
    }
    else
    {
        hanoi(n-1, start, end, mid); // #1 (DFS)
        cout << start << " " << end << "\n";
        hanoi(n-1, mid, start, end); // #3 (DFS)
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, cnt;
    cin >> n;
    cnt = pow(2, n)-1; // pow는 실수로 계산되기 때문에 int 형에 담아서 출력
    cout << cnt << "\n";
    hanoi(n, 1, 2, 3);

    return 0;
}

/**
 * #1 n-1개의 원판을 3번 장대를 거쳐 2번 장대로 옮기고
 * #2 1번 장대에 있는 가장 큰 크기의 원판을 3번 장대로 옮긴 후
 * #3 2번 장대에 있는 n-1개의 원판을 1번 장대를 거쳐 3번 장대로 올려 놓는 과정
*/