/**
 * 다이얼
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

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
            num = ceil((s[i] - 65) / 3) + 2;
        } 

        cout << num << " ";
        answer += ceil(num);
    }

    cout << answer << "\n";
    return 0;
}