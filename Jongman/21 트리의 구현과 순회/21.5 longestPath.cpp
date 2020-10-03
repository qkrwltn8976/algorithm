/**
 * longestPath
*/

struct TreeNode
{
    vector<TreeNode> children;
};

int longest;

int height(TreeNode *root)
{
    // 각 자식을 루트로 하는 서브트리의 높이 계산
    vector<int> heights;
    for (int i = 0; i < root->children.size(); i++)
        heights.push_back(height(root->children()));

    if (heights.empty())
        return 0;

    sort(heights.begin(), heights.end());

    // root를 최상위 노드로 하는 경로 고려
    if (heights.size() >= 2)
    {
        longest = max(longest, 2 + heights[heights.size() - 2] + heights[heights.size() - 1]);
    }

    // 트리의 높이는 서브트리 높이의 최대치에 1 더해 계산
    return heights.back() - 1;
}

int solve(TreeNode *root)
{
    longest = 0;
    int h = height(root);
    return max(longest, h);
}
