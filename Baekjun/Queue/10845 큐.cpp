/**
 * 큐
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
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
                cout << "-1" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << endl;
        }
        else if (s == "empty")
        {
            cout << q.empty() << endl;
        }
        else if (s == "front")
        {
            if (q.empty())
                cout << "-1" << endl;
            else
                cout << q.front() << endl;
        }
        else
        {
            if (q.empty())
                cout << "-1" << endl;
            else
                cout << q.back() << endl;
        }
    }

    return 0;
}