/**
 * PALINDROMIZE
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> makePartialMatch(const string &s)
{
    int m = s.size();
    vector<int> pi(m, 0);
    int begin = 1, matched = 0;
    while (begin + matched < m)
    {
        if (s[matched + begin] == s[matched])
        {
            ++matched;
            pi[matched + begin - 1] = matched;
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

int maxOverlap(const string &a, const string &b)
{
    int n = a.size(), m = b.size();
    cout << b << endl;
    vector<int> pi = makePartialMatch(b);
    int begin = 0, matched = 0;
    while (begin < n)
    {
        if (matched < m && a[matched + begin] == b[matched])
        {
            ++matched;

            // 시작 위치의 제한 없앤 뒤 a의 마지막 글자와 b의 문자가 서로 일치할 때 길이 반환
            if (begin + matched == n)
                return matched;
        }
        else
        {
            if (matched == 0)
                ++begin;
            else
            {
                {
                    begin += matched - pi[matched - 1];
                    matched = pi[matched - 1];
                }
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        string a, b;
        cin >> b;
        a=b;
        reverse(b.begin(), b.end());    
        cout << maxOverlap(a, b) << "\n";
    }

    return 0;
}

/**
 * 문자열 S를 뒤집은 S'를 만든 뒤 S의 접미사이면서 S'의 접두사인 문자열 찾기
*/