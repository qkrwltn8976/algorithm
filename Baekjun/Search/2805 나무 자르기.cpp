/**
 * 나무 자르기
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int *arr;
int n, m, ans;
void binarySearch(int left, int right)
{
    
    while (left <= right)
    {
        int result = 0, mid;
        mid = (left + right) / 2;
        // cout << "mid=" << mid << endl;
        // break;
        for (int i = 0; i <= mid; i++)
        {
            // if (arr[i] - mid < 0)
            //     break;
            if (arr[i] - mid >= 0)
                result += (arr[i] - mid);
        }
        // cout << "result=" << result << endl;

        if (result >= m)
        {
            ans = max(mid, ans);
            left = mid + 1;
            // cout << "answ" << ans << endl;
            // cout << "m " << m << endl;
            // cout << "=----------";
            // binarySearch(mid + 1, right);
        }
        else {
            right = mid - 1;
            break;
        }
            
        mid = left + right / 2;
        // binarySearch(left, mid - 1);
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);
    // reverse(arr, arr + n);

    binarySearch(0, arr[n - 1]);

    printf("%d\n", ans);
    return 0;
}