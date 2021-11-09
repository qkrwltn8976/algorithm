/**
 * 광고
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> getPartialMatch(string &s)
{
    int n = s.size();
    int begin = 1, matched = 0;
    vector<int> pi(n, 0);

    while (begin + matched < n)
    {
        if (s[begin + matched] == s[matched])
        {
            ++matched;
            pi[begin + matched - 1] = matched;
        }
        else
        {
            if (matched == 0)
                ++begin;
            else
            {
                begin += matched - pi[matched - 1];
                matched = pi[matched - 1];
            }
        }
    }

    return pi;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> pi = getPartialMatch(s);
    cout << n - pi[n - 1];
    return 0;
}

// 전광판의 길이에서 접두사도 되면서 접미사도 되는 문자열의 최대 길이를 빼면 됨
