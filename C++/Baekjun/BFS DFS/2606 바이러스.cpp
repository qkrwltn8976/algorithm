/**
 * 바이러스
*/

#include <iostream>
#include <queue>
#define MAX_SIZE 1000

using namespace std;

int adjacents[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
queue<int> q;
int n, m, cnt;

void DFS(int idx)
{
    visited[idx] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (adjacents[idx][i] == 1 && !visited[i])
        {
            visited[i] = 1;
            cnt++;
            DFS(i);
        }
    }
}

void BFS(int idx)
{
    visited[idx] = 1;
    q.push(idx);

    while (!q.empty())
    {
        idx = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (adjacents[idx][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                q.push(i);
                cnt++;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        adjacents[from][to] = 1;
        adjacents[to][from] = 1;
    }

    BFS(1);
    // DFS(1);

    cout << cnt << "\n";

    return 0;
}
