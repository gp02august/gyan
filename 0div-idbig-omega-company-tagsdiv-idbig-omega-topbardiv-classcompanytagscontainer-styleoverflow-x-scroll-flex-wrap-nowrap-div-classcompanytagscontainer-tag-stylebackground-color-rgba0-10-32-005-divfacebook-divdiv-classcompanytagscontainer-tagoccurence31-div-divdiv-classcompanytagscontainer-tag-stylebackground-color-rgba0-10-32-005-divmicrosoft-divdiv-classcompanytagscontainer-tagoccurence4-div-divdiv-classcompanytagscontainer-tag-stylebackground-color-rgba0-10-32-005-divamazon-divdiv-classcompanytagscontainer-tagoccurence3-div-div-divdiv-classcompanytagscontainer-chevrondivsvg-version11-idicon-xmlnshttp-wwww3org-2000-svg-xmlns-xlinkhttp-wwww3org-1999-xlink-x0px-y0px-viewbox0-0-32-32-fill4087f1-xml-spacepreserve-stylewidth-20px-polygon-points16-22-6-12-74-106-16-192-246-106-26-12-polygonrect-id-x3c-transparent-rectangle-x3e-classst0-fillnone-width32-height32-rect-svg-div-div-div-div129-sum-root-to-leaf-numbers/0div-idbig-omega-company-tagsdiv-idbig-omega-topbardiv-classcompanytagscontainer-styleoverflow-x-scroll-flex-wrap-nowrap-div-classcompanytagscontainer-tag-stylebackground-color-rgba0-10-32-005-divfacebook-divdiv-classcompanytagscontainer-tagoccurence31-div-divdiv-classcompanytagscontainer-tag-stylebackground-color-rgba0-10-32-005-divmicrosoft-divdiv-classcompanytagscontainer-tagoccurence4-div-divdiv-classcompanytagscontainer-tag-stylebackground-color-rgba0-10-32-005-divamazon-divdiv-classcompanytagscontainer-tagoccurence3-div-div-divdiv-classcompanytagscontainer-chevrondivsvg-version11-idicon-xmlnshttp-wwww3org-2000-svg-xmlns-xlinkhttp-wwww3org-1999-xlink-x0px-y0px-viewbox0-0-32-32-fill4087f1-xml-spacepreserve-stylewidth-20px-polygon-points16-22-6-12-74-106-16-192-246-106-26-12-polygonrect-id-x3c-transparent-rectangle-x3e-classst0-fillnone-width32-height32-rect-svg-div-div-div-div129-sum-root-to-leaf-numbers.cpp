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
    int solve(TreeNode* root, string sum){
        if(root==nullptr)
            return 0;
        
        sum +=to_string(root->val);
        
        if(root->left==nullptr && root->right==nullptr){
            return stoi(sum);
        }
        int left=solve(root->left, sum);
        int right=solve(root->right, sum);
        
        return left+right;
    }
    
    int sumNumbers(TreeNode* root) {
        return solve(root, "");
    }
};