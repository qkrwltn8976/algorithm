/**
 * RGB거리
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    vector<vector<int> > arr;
    vector<vector<int> > dp;
    arr.resize(T);
    dp.resize(T);

    for (int i = 0; i < T; i++)
    {
        arr[i].resize(3);
        dp[i].resize(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int answer = 9999;
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                dp[i][j] = arr[i][j];
            }
            else
            {
                dp[i][j] = arr[i][j] + min(dp[i - 1][(j + 2) % 3], dp[i - 1][(j + 1) % 3]);
            }   
        }
    }

    sort(dp[T - 1].begin(), dp[T - 1].end());
    cout << dp[T - 1].front();

    return 0;
}