/**
 * 숫자 카드 2
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> arr, arr2, cnt;

void binarySearch(int first, int last, int k)
{
    int mid = 1;

    mid = (first + last) / 2;

    if (first <= last)
    {
        if (arr[mid] == arr2[k])
        {
            cnt[k]++;
        }
        binarySearch(mid + 1, last, k);
        binarySearch(first, mid - 1, k);
    }

    return;
}

int main()
{
    cin.tie(0);
    cin >> n;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cin >> m;
    arr2.resize(m);
    cnt.resize(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < m; i++)
    {
        binarySearch(0, n - 1, i);
    }

    for (int i = 0; i < m; i++)
    {
        cout << cnt[i] << " ";
    }

    return 0;
}