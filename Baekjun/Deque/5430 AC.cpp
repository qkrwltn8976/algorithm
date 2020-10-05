/**
 * AC
*/
#include <iostream>
#include <string>
#include <cstring>
#include <deque>

using namespace std;

void AC(deque<int> dq, string funcs, int cnt, char *data) // 버리기
{
    bool isReverse = false;
    for (int i = 0; i < funcs.length(); i++)
    {
        if (funcs[i] == 'R')
        {
            isReverse = !isReverse;
        }
        else if (funcs[i] == 'D')
        {
            if (dq.size() < 1)
            {
                cout << "error\n";
                return;
            }
            if (isReverse)
                dq.pop_back();
            else
                dq.pop_front();
        }
    }

    cout << "[";
    if (isReverse)
    {
        for (int i = dq.size()-1; i >= 0; i--)
        {
            cout << dq[i];
            if (i != 0)
                cout << ',';
        }
    }
    else
    {
        for (int i = 0; i < dq.size(); i++)
        {
            cout << dq[i];
            if (i != dq.size() - 1)
                cout << ',';
        }
    }

    cout << "]\n";
}

int main()
{
    int t;
    char *delim = "[,]";
    cin >> t;
    while (t--)
    {
        deque<int> dq;
        string funcs;
        char input[4000001];
        int cnt;
        int *arr;
        char *data;

        cin >> funcs >> cnt >> input;

        data = strtok(input, delim);

        while (data)
        {
            dq.push_back(atoi(data));
            data = strtok(NULL, delim);
        }

        AC(dq, funcs, cnt, data);
    }
    return 0;
}