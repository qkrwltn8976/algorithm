/**
 * 단어 공부
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    string s;
    vector<pair<int, int> > alpha(26, make_pair(0,0));

    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90) 
        {
            alpha[s[i]-65].first = s[i];
            alpha[s[i]-65].second++;
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            alpha[s[i]-97].first = s[i]-32;
            alpha[s[i]-97].second++;
        }
    }

    sort(alpha.begin(), alpha.end(), compare);

    char answer;
    if(alpha[0].second == alpha[1].second)
        answer = '?';
    else
        answer = alpha[0].first;
    
    cout << answer << "\n";

    return 0;
}