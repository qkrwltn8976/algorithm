/**
 * OX 퀴즈
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, m;
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        bool flag = false;
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'O')
            {
                flag = true;
                cnt++;
                sum += cnt;
            }
            else
            {
                flag = false;
                cnt = 0;
            }
        }

        cout << sum << "\n";
    }

    return 0;
}