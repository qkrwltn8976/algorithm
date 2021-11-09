/**
 * 팰린드롬
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

vector<int> palindrome(const string &s)
{
    int m = s.size();
    vector<int> pi = makePartialMatch(s);
    return pi;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    vector<int> ret = palindrome(s);
    for(auto &i:ret)
        cout << i << " ";
    return 0;
}