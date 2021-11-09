/**
 * 토마토
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX_SIZE 1000

using namespace std;

int m, n, answer = 0;
int tomato[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE][MAX_SIZE];
queue<pair<int, int> > q;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void BFS(int x, int y)
{
    q.push(make_pair(x, y));

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if (nx >= 0 && nx < m && ny >= 0 && ny < n)
            {
                if (tomato[ny][nx] == 0 && dist[ny][nx] == -1)
                {
                    q.push(make_pair(nx, ny));
                    dist[ny][nx] = dist[y][x] + 1;
                }
            }
        }
    }
}

int main()
{
    scanf("%d %d", &m, &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &tomato[i][j]);
            dist[i][j] = -1;
            if (tomato[i][j] == 1)
            {
                q.push(make_pair(j, i));
                dist[i][j] = 0;
            }
        }
    }

    BFS(q.front().first, q.front().second); // x, y

    for (int i = 0; i < n; i++)
    { // y
        for (int j = 0; j < m; j++)
        { // x
            if (answer < dist[i][j])
                answer = dist[i][j];
            if (dist[i][j] == -1 && tomato[i][j] == 0)
            {
                answer = -1;
                printf("%d\n", answer);
                return 0;
            }
        }
    }

    printf("%d\n", answer);

    return 0;
}