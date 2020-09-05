/**
 * 제로
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    int T;
    cin >> T;
    while (T--)
    {
        int data;
        cin >> data;
        if (data == 0)
        {
            if (!st.empty())
                st.pop();
        }
        else
        {
            st.push(data);
        }
    }

    int sum=0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }

    cout << sum << endl;

    return 0;
}