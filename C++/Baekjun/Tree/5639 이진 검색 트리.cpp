/**
 * 이진 검색 트리
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> preOrder;
void postOrder(int preBegin, int preEnd)
{
    int root = preOrder[preBegin];
    int idx = root + 1;

    while(1)
    {
        
    }
    postOrder(preBegin + 1, idx); // 왼쪽
    postOrder(idx + 1, preEnd);   // 오른쪽
    cout << root << "\n";
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;
    preOrder.resize(n);

    while (scanf("%d", &n) != EOF)
    {
        preOrder.push_back(n);
    }

    return 0;
}