/**
 * 통계학
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, sum=0;
    vector<int> arr;

    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i]
    }

    sort(arr.begin(), arr.end());


    return 0;
}