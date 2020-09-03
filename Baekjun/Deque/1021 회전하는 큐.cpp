/**
 * 회전하는 큐
*/

#include <iostream>
#include <deque>
#include <queue>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    deque<int> dq;

    int i = 1;

    while (n--)
    {
        q.push(i);
        dq.push_back(i++);
    }

    int cnt = 0;
    while (m--)
    {
        int target, index = 0;
        scanf("%d", &target);

        for (auto e : dq)
        {
            index++;
            if (e == target)
                break;
        }
        while (!dq.empty())
        {
            int size = dq.size() / 2;
            if (dq.size() % 2 == 1)
            {
                size += 1;
            }

            if (dq.front() == target)
            {
                dq.pop_front();
                break;
            }
            else if (size >= index)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
