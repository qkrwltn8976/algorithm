/**
 * 숫자 카드
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> arr, arr2;

void binarySearch(int k)
{
    int first = 0, mid = 1, last = n - 1;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == k)
        {
            cout << "1"
                 << "\n";
            return;
        }
        else
        {
            if (arr[mid] < k)
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }
    }
    cout << "0" << "\n";
    return;
}

int main()
{

    cin >> n;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cin >> m;
    arr2.resize(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < m; i++)
    {
        binarySearch(arr2[i]);
    }

    return 0;
}