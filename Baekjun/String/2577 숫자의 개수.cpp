/**
 * 숫자의 개수
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int total = 1;
    for(int i=0; i<3; i++)
    {
        int num;
        cin >> num;
        total *= num;
    }

    string str;
    int cnt = 0;
    str = to_string(total);
    vector<int> vec(10, 0);

    for(int i=0; i<str.length(); i++)
    {
        vec[str[i] - '0']++;
    }

    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << "\n";
    }

    return 0;
}