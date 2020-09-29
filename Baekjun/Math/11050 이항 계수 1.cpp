/**
 * 이항 계수 1
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

    for (int i = 0; i < k; i++)
    {
        ans *= (n - i);
        ans /= (k - i);
    }

    cout << ans;

    return 0;
}