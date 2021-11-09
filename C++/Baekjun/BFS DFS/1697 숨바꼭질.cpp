/**
 * 숨바꼭질
*/

#include <iostream>
#include <queue>
#include <algorithm>

#define MAX_SIZE 100000

using namespace std;

int n, k;
queue<int> q;
int arr[MAX_SIZE];
int dist[MAX_SIZE];

void BFS(int idx)
{
    q.push(idx);

    while (!q.empty())
    {
        idx = q.front();
        q.pop();
        if (idx == k)
        {
            return;
        }

        // int nidx = idx + dx[i];

        if (idx + 1 <= MAX_SIZE && idx + 1 >= 0 && !dist[idx + 1])
        {
            dist[idx + 1] = dist[idx] + 1;
            q.push(idx + 1);
        }

        if (idx - 1 <= MAX_SIZE && idx - 1 >= 0 && !dist[idx - 1])
        {
            dist[idx - 1] = dist[idx] + 1;
            q.push(idx - 1);
        }

        if (idx * 2 <= MAX_SIZE && idx * 2 >= 0 && !dist[idx * 2])
        {
            dist[idx * 2] = dist[idx] + 1;
            q.push(idx * 2);
        }
    }
}

int main()
{
    scanf("%d %d", &n, &k);
    dist[n] = 0;
    BFS(n);

    printf("%d\n", dist[k]);

    return 0;
}