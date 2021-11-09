/**
 * 미로 탐색
 * 0: 벽, 1: 통로, 2: 방문, 3: 확정
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// #include <stdlib.h>
#define MAX_SIZE 100

using namespace std;

int n, m;
char maze[MAX_SIZE][MAX_SIZE];
// int cnt = 0;
vector <int> path;

bool findMaze(int x, int y, int cnt)
{
    cnt++;
    cout << x << " | " << y << "=" << maze[x][y] << endl;
    if (x < 0 || y < 0 || x >= n || y >= m || maze[x][y] != '1')
    {
        return false;
    }
    else if (x == n - 1 && y == m - 1) // 출구인 경우
    {
        path.push_back(cnt);
        maze[x][y] = '3';
        return true;
    }
    else
    {
        maze[x][y] = '3';
        if (findMaze(x + 1, y, cnt) || findMaze(x, y + 1, cnt) || findMaze(x - 1, y, cnt) || findMaze(x, y-1, cnt)) // 인접한 통로가 존재하는 경우
        {
            // cnt++;
            return true;
        }
        maze[x][y] = '2';
        return false;
    }
}

// cout << x << " | " << y << "=" << maze[x][y] << endl;
int main()
{

    cin >> n >> m;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            maze[i][j] = s[j];
        }
    }

    findMaze(0, 0, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }

    sort(path.begin(), path.end());

    cout << path[0] << endl;
    cout << path.size() << endl;
    return 0;
}