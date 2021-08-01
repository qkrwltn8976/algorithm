/**
 * 공유기 설치
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, c;
vector<int> arr;
void binarySearch(int left, int right)
{
    int result = 0, mid = (right - left) / 2;

    while (left <= right)
    {
        cout << mid << endl;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] >= mid) {
                result++;
            }
        }
    }
}

// 가장 인접한 공유기 사이 거리 최대

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> n >> c;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    binarySearch(0, arr[n - 1]);

    return 0;
}