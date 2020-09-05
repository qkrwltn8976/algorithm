/**
 * 스택
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int T;
    cin >> T;

    stack<int> st;
    while (T--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int data;
            cin >> data;
            st.push(data);
        }
        else if (s == "pop")
        {
            if (st.empty())
                cout << "-1" << endl;
            else
            {
                int top = st.top();
                st.pop();
                cout << top << endl;
            }
        }
        else if (s == "size")
        {
            cout << st.size() << endl;
        }
        else if (s == "empty")
        {
            if (st.empty())
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if (s == "top")
        {
            if (st.empty())
                cout << "-1" << endl;
            else
            {
                int top = st.top();
                cout << top << endl;
            }
        }
    }
    return 0;
}