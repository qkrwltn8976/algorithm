/**
 * 단어 수학
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<string> tmp(n);
    // vector<pair<string, int>> arr;
    map<char, int> hash;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp[i];

    }

    for (int i = 0; i < n; i++)
    {
        int num = 9;
        for (int j = 0; j < tmp[i].length(); j++)
        {
            cout << hash[tmp[i][j]] << endl;

            if (hash[tmp[i][j]] == 0)
            {
                hash[tmp[i][j]] = num;
            } 
            num--;

        }
=
    }

    for (auto i : hash)
        cout << i.first << ": " << i.second << " ";
}