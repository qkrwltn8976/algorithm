/**
 * 단지번호붙이기
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <vector>
#define MAX_SIZE 26

using namespace std;

int N, M;
int adjacent[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<int> apart;
int cnt = 0;

void DFS(int x, int y)
{
    cnt++;
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N)
        {
            if (adjacent[nx][ny] == 1 && !visited[nx][ny])
            {
                DFS(nx, ny);
            }
        }
    }
}

int main()
{
    cin >> N;

    char *tmp;
    apart.resize(MAX_SIZE*MAX_SIZE);
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        for (int j = 0; j < N; j++)
        {
            adjacent[i][j] = tmp[j] - '0';
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(adjacent[i][j]==1 && !visited[i][j])
            {
                cnt=0;
                DFS(i, j);
                apart.push_back(cnt);
            }
        }
    }

    sort(apart.begin(), apart.end());

    cout << apart.size() << endl;

    for(int i=0; i<apart.size(); i++)
    {
        cout << apart[i] << "\n";
    }

    return 0;
}

/**
 * dx, dy는 상하좌우로 움직이기 위한 좌표 배열
*/