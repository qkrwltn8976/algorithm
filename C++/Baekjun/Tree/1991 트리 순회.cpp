/**
 * 트리 순회
*/

#include <iostream>
#include <queue>

using namespace std;

struct node
{
    char left;
    char right;
};

struct node tree[28];

void preOrder(char root)
{
    if (root == '.')
        return;
    printf("%c", root);

    preOrder(tree[root].left);
    preOrder(tree[root].right);
}

void postOrder(char root)
{
    if (root == '.')
        return;
    postOrder(tree[root].left);
    postOrder(tree[root].right);
    printf("%c", root);
}

void inOrder(char root)
{
    if (root == '.')
        return;
    inOrder(tree[root].left);
    printf("%c", root);
    inOrder(tree[root].right);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char value, left, right;
        cin >> value >> left >> right;
        tree[value].left = left;
        tree[value].right = right;
    }

    preOrder('A');
    printf("\n");

    inOrder('A');
    printf("\n");

    postOrder('A');
    printf("\n");

    return 0;
}