/**
 * 나머지
*/

#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int a, b, c;

    cin >> a >> b >> c;

    cout << (a + b) % c << "\n";
    cout << ((a % c) + (b % c)) % c << "\n";
    cout << (a * b) % c << "\n";
    cout << ((a % c) * (b % c)) % c;
    return 0;
}