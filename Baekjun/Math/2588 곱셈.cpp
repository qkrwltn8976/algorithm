/**
 * 곱셈
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, m, ans = 0;
    cin >> n >> m;

    for (int i = 0; i < 3; i++)
    {
        ans += n * pow(10, i) * (m % 10);
        cout << n * (m % 10) << endl;
        m /= 10;
    }

    cout << ans;

    return 0;
}