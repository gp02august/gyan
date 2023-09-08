/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* &root, TreeNode* root1, TreeNode* root2)
    {
        if(root1 == NULL && root2 == NULL)
        {
            root = NULL;
        }
        else if(root1 == NULL && root2)
        {
            root = new TreeNode(root2->val);
            solve(root->left, NULL, root2->left);
            solve(root->right, NULL, root2->right);
        }
        else if(root1 && root2 == NULL)
        {
            root = new TreeNode(root1->val);
            solve(root->left, root1->left, NULL);
            solve(root->right, root1->right, NULL);
        }
        else
        {
            root = new TreeNode(root1->val + root2->  val);
            solve(root->left, root1->left, root2->left);
            solve(root->right, root1->right, root2->right);
        }
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root = new TreeNode();
        if(root1 == NULL)
            return root2;
        if(root2 == NULL)
            return root1;
        // through dfs
        solve(root, root1, root2);
        return root;
    }
};