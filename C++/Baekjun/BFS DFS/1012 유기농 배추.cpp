/**
 * 유기농 배추
*/

#include <iostream>
#include <cstring>
#define MAX_SIZE 50

using namespace std;

int adjacent[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE] = {0};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int cnt = 0;
int n, m, v;

void DFS(int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < m && ny >= 0 && ny < n)
        {
            if (adjacent[ny][nx] == 1 && !visited[ny][nx])
            {
                visited[ny][nx] = 1;
                DFS(ny, nx);
            }
        }
    }
}

int main()
{
    int k;
    scanf("%d", &k);
    while (k--)
    {
        scanf("%d %d %d", &m, &n, &v);
        memset(adjacent, false, MAX_SIZE * MAX_SIZE);
        memset(visited, false, MAX_SIZE * MAX_SIZE);
        cnt = 0;

        for (int i = 0; i < v; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            adjacent[y][x] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (adjacent[i][j] && !visited[i][j])
                {
                    visited[i][j] = 1;
                    cnt++;
                    DFS(i, j);
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}