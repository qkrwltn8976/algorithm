/**
 * NAMING
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getPartialMatch(const string &s)
{
    int m = s.size();
    int begin = 1, matched = 0;
    vector<int> pi(m, 0);

    while (begin + matched < m)
    {
        if (matched < m && s[begin + matched] == s[matched])
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

vector<int> kmpSearch(const string &s)
{
    vector<int> pi = getPartialMatch(s);
    vector<int> ret;
    int k = s.size();

    while (k > 0)
    {
        ret.push_back(k);
        k = pi[k - 1];
    }

    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string dad, mom;
    cin >> dad >> mom;

    vector<int> ret;
    ret = kmpSearch(dad + mom);

    sort(ret.begin(), ret.end());

    for (int i = 0; i < ret.size(); i++)
        cout << ret[i] << " ";
}