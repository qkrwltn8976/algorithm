/**
 * 1로 만들기
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;
    int *dp = new int[n];

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + 1;
        if(i%2==0) dp[i] = min(dp[i/2]+1, dp[i]);
        if(i%3==0) dp[i] = min(dp[i/3]+1, dp[i]);
    }

    cout << dp[n];
}