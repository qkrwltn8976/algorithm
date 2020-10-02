/**
 * 접미사 배열
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;

    vector<string> vec;
    for (int i = 0; i < s.length(); i++)
        vec.push_back(s.substr(i, s.length() - i));

    sort(vec.begin(), vec.end());

    for (auto &i : vec)
        cout << i << "\n";

    return 0;
}