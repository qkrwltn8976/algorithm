/**
 * 상태계
*/

#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

map<string, int> mp;
int main()
{
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int cnt = 0;
    string str;
    while (!cin.eof())
    {
        getline(cin, str);
        if (str == "")
            break;
        mp[str]++;
        cnt++;
    }
    cout << fixed; // 소수점을 고정시켜 표현을 하겠다는 뜻
    cout.precision(4); // 소수점 4자리까지
    map<string, int>::iterator itr;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << (*itr).first << " " << ((double)(*itr).second / cnt) * 100 << endl;
    }

    return 0;
}
