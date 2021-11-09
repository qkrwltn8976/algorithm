/**
 * 스택 수열
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    vector<int> arr(T);
    vector<char> sol;
    stack<int> st;
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }

    bool answer = true;
    int value = 1;

    for (int i = 0; i < T; i++)
    {
        // cout << st.empty() << endl;
        if (st.empty() || arr[i] != st.top())
        {
            while (1)
            {
                if (arr[i] < value)
                {
                    printf("NO"); 
					return 0;
                    // break;
                }

                sol.push_back('+');
                st.push(value);
                value++;
                if (arr[i] == st.top())
                {
                    sol.push_back('-');
                    st.pop();
                    break;
                }
            }
        }
        else if (arr[i] == st.top())
        {
            sol.push_back('-');
            st.pop();
        }
    }

    for(int i=0; i<sol.size(); i++)
        printf("%c\n", sol[i]);

    return 0;
}