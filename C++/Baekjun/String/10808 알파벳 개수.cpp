/**
 * 알파벳 개수
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;

    vector<int> vec(26, 0);
    for(int i=0; i<s.length(); i++)
        vec[s[i]-97]++;

    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << " ";

    return 0;
}