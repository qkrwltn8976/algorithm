/**
 * 쉬운 계단 수
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, sum = 0;
    cin >> n;

    vector<vector<int> > dp(n);
    for (int i = 0; i < n; i++)
    {
        dp[i].resize(10);
        for (int j = 0; j <= 9; j++)
        {
            if (i == 0)
            {
                if (j == 0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = 1;
            }
            else
            {
                if (j == 0)
                    dp[i][j] = 0;
                if (j > 0 && j <= 8)
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << dp[n - 1][i] << endl;
        sum += dp[n - 1][i];
    }
    cout << sum;

    return 0;
}