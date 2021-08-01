/**
 * 프린터 큐
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n, m, pr, cnt = 0;
        queue<pair<int, int> > q;
        priority_queue<int> pq;

        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> pr;
            q.push(make_pair(i, pr));
            pq.push(pr);
        }

        while (!q.empty())
        {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (value == pq.top())
            {
                pq.pop();
                cnt++;
                if (index == m) {
                    cout << cnt << endl;
                    break;
                }

            }
            else
            {
                q.push(make_pair(index, value));
            }
            
        }
    }
}