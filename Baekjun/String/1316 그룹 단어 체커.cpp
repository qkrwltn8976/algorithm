/**
 * 그룹 단어 체커
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isGroupWord(string s)
{
    vector<int> alpha(26, 0);

    if (s.length() == 1)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (alpha[s[i]-97] == 0)
            {
                alpha[s[i]-97]++;
            }
            else
            {
                if (s[i - 1] == s[i])
                    alpha[s[i]-97]++;
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    int cnt = 0;

    while (T--)
    {
        string s;
        cin >> s;

        if (isGroupWord(s))
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}

/**
 * 오류 해결
 * alpha 벡터에 할당할 때 인덱스 - 97을 하지 않아 값이 제대로 저장되지 않음
*/