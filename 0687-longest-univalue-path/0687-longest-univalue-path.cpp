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
    int height(TreeNode* root, int &maxi)
    {
        if(root==NULL)
            return 0;
        int l=0, r=0;
        int left=height(root->left,maxi);
        int right= height(root->right,maxi);
        if(left && root->left->val == root->val) 
             l=left;
        if(right && root->right->val == root->val)
             r=right;
        maxi = max(maxi,(l+r));
        return max(l,r)+1;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return 0;
        int maxi = INT_MIN;
        height(root, maxi);
        return maxi;
    }
};