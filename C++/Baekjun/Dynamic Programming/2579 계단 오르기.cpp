/**
 * 계단 오르기
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

    vector<int> dp(T);
    vector<int> arr(T);
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }

    dp[0] = arr[0];
    dp[1] = max(arr[1], arr[0] + arr[1]);
    dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
    for (int i = 3; i < T; i++)
    {
        // 연속적인 세개의 계단 밟는 것 방지
        dp[i] = max(arr[i] + dp[i - 2], arr[i] + arr[i-1] + dp[i - 3]);
    }

    cout << dp[T-1] << endl;

    return 0;
}