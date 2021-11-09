/**
 * 설탕 배달
*/

#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n;
    int cnt = 0;
    cin >> n;

    while (1)
    {
        if (n % 5 == 0)
        {
            cnt += n / 5;
            break;
        }

        n -= 3;
        cnt++;
        // n이 5로 나눠떨어질 때까지 3키로를 사용한다.
        if (n < 0)
        {
            cnt = -1;
            break;
        }
    }

    cout << cnt;
    return 0;
}

/**
 * n을 입력받았을 때 5로 나눠떨어지면 그게 가장 적은 봉지 수다.
즉, n이 5로 나눠떨어질 때까지 3키로를 사용한다.
*/