/**
 * N과 M (2)
*/

#include <iostream>

using namespace std;

int n, m;
int visited[10];
int arr[10];

void bfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
    }

    for (int i = 1; i <= n; i++)
    {
        if (!cnt || (cnt && arr[cnt-1] < i))
        {
            visited[i] = true;
            arr[cnt] = i;
            bfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    bfs(0);

    return 0;
}