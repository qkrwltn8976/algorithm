/**
 * 파도반 수열
*/

#include <iostream>

using namespace std;

int main()
{
    long long pado[100] = {0, 1, 1};
    int T;
    scanf("%d", &T);

    for(int i=3; i<=100; i++)
    {
        pado[i] = pado[i-2] + pado[i-3];
    }
    while(T--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", pado[n]);
    }

    return 0;
}

/**
 * n의 숫자가 커질 때, int형의 저장범위를 벗어나기 때문에 정답의 자료형을 long long 형으로 저장해야 한다.
*/