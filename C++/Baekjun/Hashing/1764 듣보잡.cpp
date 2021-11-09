/**
 * 듣보잡
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    map<string, int> hash;
    vector<string> arr;

    for (int i = 0; i < n+m; i++)
    {
        string tmp;
        cin >> tmp;
        hash[tmp]++;
    }

    for (auto i : hash)
    {
        if (i.second == 2)
            arr.push_back(i.first);
    }
    sort(arr.begin(), arr.end());
    cout << arr.size() << "\n";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}