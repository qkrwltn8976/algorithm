/**
 * 미로탐색
*/

#include <iostream>
#include <queue>
#include <string>
#define MAX_SIZE 100

using namespace std;

int arr[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE][MAX_SIZE];
int n, m;
queue<pair<int, int> > q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt = 0;

void BFS(int x, int y)
{
    q.push(make_pair(x, y));
    // dist[y][x] = 0;

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n)
            {
                if (arr[ny][nx] == 1 && dist[ny][nx] == 0)
                {
                    q.push(make_pair(nx, ny));
                    dist[ny][nx] = dist[y][x] + 1;
                } 
            }
        }
        // cnt++;
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            dist[i][j] = 0;
            arr[i][j] = str[j]-'0';
        }
    }
    dist[0][0] = 1;
    BFS(0, 0);

    printf("%d\n", dist[n-1][m-1]);

    return 0;
}