/**
 * N과 M (4)
*/

#include <iostream>
using namespace std;

int arr[10] = {0};
int visited[10] = {0};
int n, m;

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!cnt || (cnt && arr[cnt - 1] <= i))
        {
            arr[cnt] = i;
            dfs(cnt + 1);
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    dfs(0);

    return 0;
}