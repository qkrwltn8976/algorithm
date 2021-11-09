/**
 * 큐 2
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);

    int n;
    cin >> n;
    queue<int> q;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "push")
        {
            int data;
            cin >> data;
            q.push(data);
        }
        else if (s == "pop")
        {
            if (q.empty())
                cout << "-1" << "\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if (s == "front")
        {
            if (q.empty())
                cout << "-1" << "\n";
            else
                cout << q.front() << "\n";
        }
        else
        {
            if (q.empty())
                cout << "-1" << "\n";
            else
                cout << q.back() << "\n";
        }
    }

    return 0;
}

/**
 * 시간초과
 * cin.tie(0)
 * cin.sync_with_stdio(0)
 * endl -> "\n"
*/