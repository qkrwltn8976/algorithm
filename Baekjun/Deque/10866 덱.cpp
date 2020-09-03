/**
 * 덱 (양방향 순환 큐)
*/

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int data;
            cin >> data;
            d.push_back(data);
        }
        else if (s == "push_front")
        {
            int data;
            cin >> data;
            d.push_front(data);
        }
        else if (s == "pop_front")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
            {
                cout << d.front() << endl;
                d.pop_front();
            }
        }
        else if (s == "pop_back")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
            {
                cout << d.back() << endl;
                d.pop_back();
            }
        }
        else if (s == "size")
        {
            cout << d.size() << endl;
        }
        else if (s == "empty")
        {
            if (d.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (s == "front")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
                printf("%d\n", d.front());
        }
        else if (s == "back")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
                cout << d.back() << endl;
        }
    }
    return 0;
}
