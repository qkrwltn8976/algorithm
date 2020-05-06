/**
 * 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요
 * 
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/

#include <cstdio>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a * 2 - 1; i++)
    {
        for (int j = 0; j < 2 * a - 1; j++)
        {
            if ((i < a && (j < i || j > 2 * a - 2 - i)) || (i >= a && (2 * a - i - 2 > j || j > i)))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j < 2 * (n - i) - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("\n");
    // }
    // for (int i = n - 1; i > 0; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j < (n - i) * 2 + 1; j++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("\n");
    // }
    return 0;
}