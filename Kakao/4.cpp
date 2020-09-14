#include <string>
#include <vector>
#include <iostream>
#include <queue>
#define MAX_SIZE 10000
using namespace std;

queue<pair<int, int> > q;
int arr[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE][MAX_SIZE];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt = 0;
int n, m;

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
            // 왼쪽 벽이 1이면 갈 수 있음
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n)
            {
                if (arr[ny][nx] == 0 && dist[ny][nx] < 1)
                {
                    q.push(make_pair(nx, ny));
                    dist[ny][nx] = dist[y][x] + 1;
                    cout << "!!" << endl;
                } 
            }
        }
        // cnt++;
    }
}

int solution(vector<vector<int> > maze)
{
    int answer = 0;
    n = maze.size();
    m = maze[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dist[i][j] = 0;
            arr[i][j] = maze[i][j];
        }
    }
    BFS(0, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j]<< " ";
        }
        cout << endl;
    }

    answer=dist[n-1][m-1];
    return answer;
}

int main()
{
    vector<vector<int> > maze;
    vector<int> tmp;
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(1);

    maze.push_back(tmp);
    tmp.clear();

    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(0);
    maze.push_back(tmp);
    tmp.clear();

    tmp.push_back(0);
    tmp.push_back(0);
    tmp.push_back(0);
    tmp.push_back(0);
    maze.push_back(tmp);
    tmp.clear();

    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(0);
    maze.push_back(tmp);

    tmp.clear();

    solution(maze);

    return 0;
}