/**
 * 카드 2
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (q.size() > 1)
    {
        q.pop();
        if (q.size() > 1)
        {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }

    cout << q.front() << endl;
    return 0;
}