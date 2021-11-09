/**
 * 비밀번호 찾기
*/

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, m;
    map<string, string> hash;

    cin >> n >> m;

    while(n--)
    {
        string site, pw;
        cin >> site >> pw;
        hash[site] = pw;
    }

    while(m--)
    {
        string site;
        cin >> site;
        cout << hash.find(site)->second << "\n";
    }

    return 0;
}