/**
 * 찾기
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getPartialMatch(const string &T)
{
    int m = T.size(), begin = 1, matched = 0;
    vector<int> pi(m, 0);

    while (begin + matched < m)
    {
        if (T[begin + matched] == T[matched])
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

vector<int> kmpSearch(const string &T, const string &P)
{
    int n = T.size(), m = P.size();
    int begin = 1, matched = 0;
    vector<int> ret;
    vector<int> pi = getPartialMatch(P);

    while (begin <= n - m)
    {
        if (matched < m && T[begin + matched] == P[matched])
        {
            ++matched;
            if (matched == m)
                ret.push_back(begin);
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
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string T, P;

    getline(cin, T);
    getline(cin, P);

    vector<int> ret = kmpSearch(T, P);
    cout << ret.size() << "\n";

    for (int i = 0; i < ret.size(); i++)
        cout << ret[i]+1 << " ";

    return 0;
}