/**
 * 숫자 카드 2
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int *arr;

int binarySearch(int first, int last, int sum, int k)
{
    int mid = 1, result;

    mid = (first + last) / 2;

    if (first <= last)
    {
        if (arr[mid] < k)
            result = binarySearch(mid + 1, last, sum,k);
        else if (arr[mid] > k)
            result = binarySearch(first, mid - 1, sum, k);
        else
        {
            result = binarySearch(mid + 1, last, sum, k);
            result += binarySearch(first, mid - 1, sum, k);
            result++;
        }
        return result;
    } else 
        return sum;
}

int main()
{
    cin.tie(0);
    scanf("%d", &n);

    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr+n);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int k;
        scanf("%d", &k);
        int result = binarySearch(0, n - 1, 0, k);
        printf("%d ", result);
    }

    return 0;
}

/**
 * 시간 초과
 * 1) c++ 함수 사용x
 * 2) vector -> array
 * 
 * 해결 X
*/

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int n, m;
// int *arr, *arr2, *cnt;

// void search(int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr2[k])
//         {
//             cnt[k]++;
//         }
//         else
//         {
//             if (cnt[k] != 0)
//             {

//                 break;
//             }
//         }
//     }
//     printf("%d ", cnt[k]);
//     return;
// }

// int main()
// {
//     scanf("%d", &n);

//     arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     sort(arr, arr+n);

//     cin >> m;
//     arr2 = new int[m];
//     cnt = new int[m];
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &arr2[i]);
//         search(i);
//     }

//     return 0;
// }
