/**
 * 대칭 차집합
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<int, int> hash;
    map<int, int> hash2;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        hash[num]++;
    }

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;

        if (hash.find(num) != hash.end())
        {
            hash.erase(num);
        }
        else
        {
            hash2[num]++;
        }
    }

    cout << hash.size() + hash2.size();

    return 0;
}