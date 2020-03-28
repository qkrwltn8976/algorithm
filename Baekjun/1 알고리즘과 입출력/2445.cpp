/**
 * 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < (n - i) * 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < (n - i) * 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}