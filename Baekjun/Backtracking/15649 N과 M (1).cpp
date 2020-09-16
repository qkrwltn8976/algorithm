/**
 * N과 M (1)
*/

#include <iostream>

using namespace std;

int arr[10];
int visited[10];
int n, m;

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        visited[i] = true;
        arr[cnt] = i;
        dfs(cnt + 1);
        visited[i] = false;
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    dfs(0);

    return 0;
}

/**
 * 해를 찾아가는 도중, 지금의 경로가 해가 될 것 같지 않으면 그 경로를 더이상 가지 않고 되돌아가는(Backtracking) 기법
 * 백트래킹은 DFS에 가지치기 (Pruning) 를 통해 가도되지 않는 루트는 고려하지 않고 탐색하는 완전탐색 기법
*/