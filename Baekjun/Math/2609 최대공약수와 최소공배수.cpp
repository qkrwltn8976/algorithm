/**
 * 최대공약수와 최소공배수
*/

#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, m;

    cin >> n >> m;
    int gdc = n > m ? m : n;
    while (1)
    {
        if (n % gdc == 0 && m % gdc == 0)
            break;
        else
            gdc--;
    }

    int lcm = gdc * (n / gdc) * (m / gdc);
    cout << gdc << "\n";
    cout << lcm;
    return 0;
}