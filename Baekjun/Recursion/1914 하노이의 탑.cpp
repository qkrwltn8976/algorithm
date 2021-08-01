/**
 * 하노이의 탑
*/

#include <iostream>

using namespace std;

void Hanoi(int n, int from, int by, int to)
{
    if (n == 1)
        cout << from << ' ' << to;
    else
    {
        Hanoi(n--, to, by, from);
        cout
            << from << ' ' << to;
    }
}

int main()
{
    cin.tie(0);
    int n;
    cin >> n;

    Hanoi(n, 1, 2, 3);

    return 0;
}