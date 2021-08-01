/**
 * 이항 계수 2
*/

#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, k;
    double ans = 1;

    cin >> n >> k;

    k = (n-k > k) ? k : n-k;

    for (int i = 0; i < k; i++)
    {
        ans *= (n - i);
        ans /= (k - i);
    }

    ans = (int)ans % 10007;
    cout << ans;
    return 0;
}