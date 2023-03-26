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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return NULL;
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left,right)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int left=isBalanced(root->left);
        int right=isBalanced(root->right);
        int k= abs(height(root->left)-height(root->right));
            if(left && right && (k<=1))
            {
                return true;
            }
        else{
            return false;
        }
        return false;
    }
};