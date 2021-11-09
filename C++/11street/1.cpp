#include <iostream>
#include <string>
using namespace std;

int solution(string &S)
{
    int cnt = 0;
    bool conse = false;
    for (int i = 0; i <= S.size(); i++)
    {
        if (S[i] == 'a')
        {
            if (S[i + 1] == 'a')
                if (S[i + 2] == 'a')
                    return -1;
                else
                    i += 2;
            else
                cnt++;
        }
        else
        {
            if (S[i-1] != 'a' && S[i] != 'a')
                cnt += 2;
            else
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    string s = "aabab";

    int cnt = solution(s);
    cout << cnt;
    return 0;
}