/**
 * 블랙잭
*/

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int answer = 0, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < n; k++)
            {
                if (j == k || i == k)
                    continue;
                tmp = arr[i] + arr[j] + arr[k];
                if (answer < tmp && tmp <= m)
                {
                    answer = tmp;
                }
            }
        }
    }

    printf("%d\n", answer);
    return 0;
}