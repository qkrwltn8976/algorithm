/**
 * 괄호
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    string s;
    while (T--)
    {
        stack<char> st;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (!st.empty())
            {
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
            {
                st.push(s[i]);
            }
        }
    st.
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}