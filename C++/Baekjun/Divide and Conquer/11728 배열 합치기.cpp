/**
 * 배열 합치기
*/

#include <iostream>
#include <algorithm>
#define MAX_SIZE 1000000

using namespace std;

int n, m;
int arr1[MAX_SIZE];
int arr2[MAX_SIZE];
int *tmp;

void merge(int left, int right)
{
    int i = left, j = left, k = left;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            tmp[k++] = arr1[i++];
        }
        else
        {
            tmp[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        tmp[k++] = arr1[i++];
    }

    while (j < m)
    {
        tmp[k++] = arr2[j++];
    }
}

int main()
{
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    tmp = new int[n + m];
    merge(0, n + m);

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", tmp[i]);
    }
    return 0;
}