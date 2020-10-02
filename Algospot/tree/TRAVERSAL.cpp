/**
 * TRAVERSAL
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> slice(const vector<int> &v, int a, int b)
{
    return vector<int>(v.begin() + a, v.begin() + b);
}

void printPostOrder(const vector<int> &preorder, const vector<int> &inorder)
{
    // 트리에 포함된 노드의 수
    const int N = preorder.size();
    // 빈 트리이면 종료
    if (preorder.empty())
        return;
    // 트리의 루트는 전위 탐색 결과로부터 알 수 있음
    const int root = preorder[0];
    // 왼쪽 서브트리의 크기는 중위 탐색 결과에서 루트의 위치를 찾아 알 수 있음
    const int L = find(inorder.begin(), inorder.end(), root) - inorder.begin();
    // 오른쪽 서브트리의 크기
    const int R = N - 1 - L;

    // 왼쪽과 오른쪽 서브트리의 순회 결과 출력
    printPostOrder(slice(preorder, 1, L + 1), slice(inorder, 0, L));
    printPostOrder(slice(preorder, L + 1, N), slice(inorder, L + 1, N));
    // 후위 순회이므로 루트를 가장 마지막에 출력
    cout << root << ' ';
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int size;
        cin >> size;
        vector<int> preOrder(size, 0);
        vector<int> inOrder(size, 0);

        for (int i = 0; i < size; i++)
            cin >> preOrder[i];


        for (int i = 0; i < size; i++)
            cin >> inOrder[i];


        printPostOrder(preOrder, inOrder);
    }
    return 0;
}