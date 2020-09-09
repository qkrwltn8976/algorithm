/**
 * 피보나치 함수
*/

#include <iostream>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);
    long long fibo[42] = {1};
    for (int i = 2; i <= 41; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    while (T--)
    {
        int n;
        scanf("%d", &n);

        printf("%lld %lld\n", fibo[n], fibo[n + 1]);
    }

    return 0;
}

/**
 * 시간 초과
 * 
 * 각각의 개수를 나열하여 규칙 찾기
 * 피보나치 수열과 유사
 */

// int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         zero++;
//         return 0;
//     }
//     else if (n == 1)
//     {
//         one++;
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }