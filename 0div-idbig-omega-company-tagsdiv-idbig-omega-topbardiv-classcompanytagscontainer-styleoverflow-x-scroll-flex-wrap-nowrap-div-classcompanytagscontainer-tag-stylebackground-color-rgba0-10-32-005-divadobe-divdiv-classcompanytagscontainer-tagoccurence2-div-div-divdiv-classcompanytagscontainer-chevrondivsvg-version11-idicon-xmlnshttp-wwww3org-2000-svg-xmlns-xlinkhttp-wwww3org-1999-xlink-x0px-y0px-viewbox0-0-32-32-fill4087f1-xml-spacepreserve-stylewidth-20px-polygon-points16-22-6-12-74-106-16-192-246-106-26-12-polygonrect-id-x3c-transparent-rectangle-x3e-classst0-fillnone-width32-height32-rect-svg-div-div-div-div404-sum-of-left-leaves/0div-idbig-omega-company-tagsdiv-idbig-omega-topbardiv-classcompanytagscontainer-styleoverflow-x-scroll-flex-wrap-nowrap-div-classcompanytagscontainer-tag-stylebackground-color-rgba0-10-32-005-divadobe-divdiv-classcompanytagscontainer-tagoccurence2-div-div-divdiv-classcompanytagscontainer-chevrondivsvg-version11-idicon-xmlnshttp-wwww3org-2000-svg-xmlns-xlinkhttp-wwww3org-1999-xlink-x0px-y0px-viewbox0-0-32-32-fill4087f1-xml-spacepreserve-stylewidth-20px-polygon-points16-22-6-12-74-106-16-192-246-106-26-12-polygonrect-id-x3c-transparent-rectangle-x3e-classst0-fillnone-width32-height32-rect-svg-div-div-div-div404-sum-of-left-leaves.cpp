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
    int ans=0;
    void solve(TreeNode* root, int dir){
        if(root==NULL)
            return;
        if(root->left == NULL && root->right == NULL){
            if(dir==0){
                ans +=root->val;
                return;
            }
        }
        solve(root->left, 0);
        solve(root->right, 1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root, -1);
        return ans; 
    }
};