/**
 * 알파벳 찾기
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char c;
    cin >> s;
    for (int i = 0; i < 26; i++)
    {
        int found = s.find(i+97);
        cout << found <<endl;
    }

    return 0;
}