/**
 * DFS와 BFS
*/

#include <iostream>
#include <queue>
#include <cstring>
#define MAX_SIZE 1001

using namespace std;

int adjacent[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
queue<int> q;
int N, M, V;

void DFS(int idx)
{
    cout << idx << " ";
    for (int i = 1; i <= N; i++)
    {
        if (adjacent[idx][i] && !visited[i])
        {
            visited[i] = 1;
            DFS(i);
        }
    }
}

void BFS(int idx)
{
    q.push(idx);
    visited[idx] = 1;

    while (!q.empty())
    {
        idx = q.front();
        q.pop();

        cout << idx << " ";

        if (adjacent[idx][i] && !visited[i])
        {
            visited[i] = 1;
            q.push(i);
        }
    }
}

int main()
{
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int from, to;
        cin >> from >> to;
        adjacent[from][to] = 1;
        adjacent[to][from] = 1;
    }

    visited[V] = 1;
    DFS(V);

    cout << endl;

    memset(visited, false, sizeof(visited));
    BFS(V);

    return 0;
}

/**
 * BFS는 방문한 노드로부터 아직 방문하지 않은 인접한 모든 노드를 큐에 추가하는 방식
 * DFS는 방문한 노드에서 아직 방문하지 않은 인접한 노드로 옮겨가는 방식
*/