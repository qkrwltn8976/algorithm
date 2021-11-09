/**
 * 나는야 포켓몬 마스터 이다솜
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> poket;
map<int, string> poket2;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string name;
        cin >> name;
        poket[name] = i;
        poket2[i] = name;
    }

    while (m--)
    {
        string q;
        cin >> q;

        if (48 <= q[0] && q[0] <= 57)
        {
            cout << poket2[stoi(q)] << "\n";
        }
        else
        {
            cout << poket[q] << "\n";
        }
    }

    return 0;
}

/**
 * 시간초과
 * value로 key를 찾을 때 key, value 순서 바뀐 또 다른 map 사용
 * 
 * regex -> 시간초과 
 * regex integer("(\\+|-)?[[:digit:]]+");
 * regex_match(q, integer)

*/
