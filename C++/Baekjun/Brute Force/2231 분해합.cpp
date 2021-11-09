/**
 * 분해합
*/

#include <iostream>

using namespace std;
int sol(int n)
{
    for (int i = 0; i <= 1000000; i++)
    {
        int answer = i;
        int idx = i;
        while (idx > 0)
        {
            answer += idx % 10;
            idx /= 10;
        }
        if (answer == n)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n, answer = 0, cnt = 0;
    scanf("%d", &n);
    printf("%d\n", sol(n));
    return 0;
}