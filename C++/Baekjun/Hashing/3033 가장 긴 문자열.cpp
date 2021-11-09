/**
 * 가장 긴 문자열
*/

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;
    map<char, int> hash;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        hash[c]++;
    }

    vector<pair<char, int> > vec(hash.begin(), hash.end());

    sort(vec.begin(), vec.end(), compare);

    if(vec.front().second!=0)
        cout << vec.front().second;

    return 0;
}