/**
 * 트리의 부모 찾기
*/

#include <iostream>
#include <vector>
#define MAX 1000000

using namespace std;

vector<int> tree[MAX];
int parent[MAX];
bool visited[MAX];

void findParent(int x)
{
    visited[x] = true;

    for (int i = 0; i < tree[x].size(); i++)
    {
        int next = tree[x][i];
        if (!visited[next])
        {
            parent[next] = x;
            findParent(next);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    findParent(1);

    for (int i = 2; i <= n; i++)
    {
        printf("%d\n", parent[i]);
    }
    return 0;
}

/**
 * 부모 - 자식 순서가 아니라 랜덤으로 주어지기 때문에 양방향으로 넣어줘야합
 * DFS
*/