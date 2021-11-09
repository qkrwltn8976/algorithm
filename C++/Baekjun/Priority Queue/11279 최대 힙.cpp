/**
 * 최대 힙
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    priority_queue<int> pq;

    while (n--)
    {
        int data;
        scanf("%d", &data);

        if (data == 0)
        {
            if (pq.empty())
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else
        {
            pq.push(data);
        }
    }

    return 0;
}