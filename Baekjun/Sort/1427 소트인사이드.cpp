/**
 * 소트인사이드
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;

bool compare(char a, char b)
{
    return a > b;
}

int main()
{
    string s;
    vector<char> arr;

    cin >> s;
    arr.resize(s.length());

    for (int i = 0; i < s.length(); i++)
    {
        arr[i] = (s[i]);
    }

    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << "\n";
    return 0;
}