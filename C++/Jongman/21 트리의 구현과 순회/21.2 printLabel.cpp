/**
 * printLabel
*/

void printLabel(TreeNode* root)
{
    cout << root->label << endl;
    for(int i=0; i<root->children.size(); i++)
        printLabel(root->children[i]);
}