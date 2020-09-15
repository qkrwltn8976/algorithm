/**
 * 다이얼
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int dial[26] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };

int main()
{
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int answer = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int num = 0;
        if (s[i] >= 65 && s[i] <= 90)
        {
            num = dial[s[i] - 65] + 1;
        } 
        else 
        {
            num = 11;
        }

        // cout << num << " ";
        answer += num;
    }

    cout << answer << "\n";
    return 0;
}