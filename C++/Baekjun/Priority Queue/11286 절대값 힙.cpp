/**
 * 절대값 힙
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct compare
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

int main()
{
    int n;
    scanf("%d", &n);

    int data;
    priority_queue<int, vector<int>, compare> pq;
    while (n--)
    {
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
