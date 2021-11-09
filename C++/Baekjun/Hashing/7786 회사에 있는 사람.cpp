/**
 * 회사에 있는 사람
*/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<string, int, greater<string> > hash;

    while(n--)
    {
        string name, ent;
        cin >> name >> ent;
        if(ent=="enter")
            hash[name]++;
        else if(ent=="leave")
            hash.erase(name);
    }

    for(auto i:hash)
        cout << i.first << "\n";

    return 0;
}

/**
 * 회사에는 동명이인이 없으며, 대소문자가 다른 경우에는 다른 이름이다 => hash
*/