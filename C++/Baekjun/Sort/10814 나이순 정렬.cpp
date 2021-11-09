/**
 * 나이순 정렬
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    if (a.first == b.first)
    {
        return false;
    }
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    int n;
    vector<pair<int, string> > users;

    ios_base::sync_with_stdio(0);
    cin.tie(0); //cin 속도 향상 위해
    cin >> n;
    users.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> users[i].first >> users[i].second;
    }

    stable_sort(users.begin(), users.end(), compare);

    for (int i = 0; i < users.size(); i++)
    {
        cout << users[i].first << " " << users[i].second << "\n";
    }

    return 0;
}

/**
 * endl 사용으로 인한 시간초과
*/