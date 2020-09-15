/**
 * 상수
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    string a, b;
    string a2, b2;

    cin >> a >> b;

    for (int i = a.length() - 1; i >= 0; i--)
    {
        a2 += a[i];
    }

    for (int i = b.length() - 1; i >= 0; i--)
    {
        b2 += b[i];
    }

    int flip_a = stoi(a2);
    int flip_b = stoi(b2);
    int answer = flip_a > flip_b ? flip_a : flip_b;

    cout << answer << "\n";

    return 0;
}