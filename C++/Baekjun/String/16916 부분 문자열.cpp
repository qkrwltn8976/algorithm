/**
 * 부분 문자열
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getPartialTable(const string &T)
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

bool kmpSearch(string &H, string &N)
{
    int n = H.size(), m = N.size();
    int matched = 0;
    vector<int> pi = getPartialTable(N);
    vector<int> ret;

    for (int i = 0; i < n; ++i)
    {
        while (matched > 0 && H[i] != N[matched])
            matched = pi[matched - 1];

        if (H[i] == N[matched])
        {
            ++matched;
            if (matched == m)
            {
                ret.push_back(i - m + 1);
                matched = pi[matched - 1];
                return true;
            }
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, p;
    cin >> s >> p;

    cout << kmpSearch(s, p);
}

/**
 * 시간초과 find()
 * 
 * kmp 알고리즘
 * 인덱스를 1만 옮기지 말고, 일치한 부분은 옮겨도 된다고 말한다. 즉, 이미 얻은 정보를 활용하여 문자열 S를 빠르게 옮기는 것이다.
*/