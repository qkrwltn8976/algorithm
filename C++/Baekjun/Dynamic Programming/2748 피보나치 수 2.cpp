/**
 * 피보나치 수 2
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    long long fibo[100] = {0, 1};
    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    printf("%lld", fibo[n]);

    return 0;
}

/**
 * n이 90일 때, int형의 저장범위를 벗어나기 때문에 정답의 자료형을 long long 형으로 저장해야 한다.
*/