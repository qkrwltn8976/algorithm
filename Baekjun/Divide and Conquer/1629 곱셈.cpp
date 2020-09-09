/**
 * 곱셈
*/

#include <iostream>
#include <cmath>

using namespace std;

long long Pow(int a, int b, int c)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else if (b % 2 == 0)
        return Pow(a, b / 2, c);

    long long answer = 1;
    answer = pow(a, b);
    answer %= c;
    return answer;
}
int main()
{
    int a, b, c;
    long long answer = 1;
    scanf("%d %d %d", &a, &b, &c);

    answer = Pow(a, b, c);

    printf("%lld", answer);

    return 0;
}

/**
 * 하나하나 곱하면은 시간초과
 * 2로 나누어 떨어질 경우 그 수로 곱한 후 승수를 2로 나눈 만큼 제곱
*/