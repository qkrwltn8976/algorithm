/**
 * 문자열 반복
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string s;
        string output;
        cin >> n >> s;

        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                output += s[i];
            }
        }
        cout << output << endl;
    }
    return 0;
}