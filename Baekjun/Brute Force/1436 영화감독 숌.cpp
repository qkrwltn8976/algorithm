/**
 * 영화감독 숌
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int title = 665;
    string s;
    int cnt = 0;
    while (title++)
    {
        s = to_string(title);
        if (s.find("666") != string::npos)
        {
            cnt++;
        }
        if (cnt == n)
        {
            break;
        }
    }

    cout << title << "\n";

    return 0;
}