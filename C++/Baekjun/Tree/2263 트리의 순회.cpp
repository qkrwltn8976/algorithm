/**
 * 트리의 순회
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> postOrder;
vector<int> inOrder;
int idx[1000001];

void printPreorder(int inBegin, int inEnd, int postBegin, int postEnd)
{
    if (inBegin > inEnd || postBegin > postEnd)
        return;

    int root = postOrder[postEnd];
    cout << root << " ";
    printPreorder(inBegin, idx[root] - 1, postBegin, postBegin + (idx[root] - inBegin) - 1);
    printPreorder(idx[root] + 1, inEnd, postBegin + (idx[root] - inBegin), postEnd - 1);
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    inOrder.resize(n);
    postOrder.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inOrder[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> postOrder[i];
    }

    for (int i = 0; i < n; i++)
    {
        idx[inOrder[i]] = i;
    }

    printPreorder(0, n - 1, 0, n - 1);

    return 0;
}