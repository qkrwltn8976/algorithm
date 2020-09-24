/**
 * 팰린드롬
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s;
        getline(cin, s);
        bool palin = false;

        for (int i = 0; i < s.length() / 2; i++)
        {
            if (tolower(s[i]) == tolower(s[s.length() - i - 1]))
            {
                palin = true;
            }
            else
            {
                palin = false;
                break;
            }
        }

        if (palin)
            cout << "Yes\n";
        else
            cout << "No\n";

    }

    return 0;
}