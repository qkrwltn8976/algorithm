/**
 * 균형잡힌 세상
*/

#include <iostream>
#include <stack>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int deli[5] = {'(', ')', '[', ']', '.'};

    while (true)
    {
        string s;

        getline(cin, s);
        stack<char> st;
        if (s == ".")
            break;

        for (int i = 0; i < s.length(); i++)
        {
            if (!st.empty())
            {
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
                else if (s[i] == ']' && st.top() == '[')
                    st.pop();
                else if (find(begin(deli), end(deli), s[i]) != end(deli))
                    st.push(s[i]);
            }
            else
            {
                if (find(begin(deli), end(deli), s[i]) != end(deli))
                    st.push(s[i]);
            }

        }

        if (st.top() == '.' && st.size() == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }
    return 0;
}

/**
 * 균형잡힌 세상
*/

// #include <iostream>
// #include <stack>
// #include <cstring>

// using namespace std;

// int main()
// {
//     while (true)
//     {
//         string s;
//         bool balance = true;
//         // cin.getline(s);
//         getline(cin, s);
//         stack<char> st;
//         if (s == ".")
//             break;
//         // cout << s.length() << endl;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == '[' || s[i] == '(')
//                 st.push(s[i]);
//             else if (s[i] == ')')
//             {
//                 if (!st.empty() && st.top() == '(')
//                     st.pop();
//                 else
//                 {
//                     balance = false;
//                     break;
//                 }
//             }
//             else if (s[i] == ']')
//             {
//                 if (!st.empty() && st.top() == '[')
//                     st.pop();
//                 else
//                 {
//                     balance = false;
//                     break;
//                 }
//             }
//         }

//         if (st.empty() && balance)
//             cout << "yes" << endl;
//         else
//             cout << "no" << endl;
//     }
//     return 0;
// }