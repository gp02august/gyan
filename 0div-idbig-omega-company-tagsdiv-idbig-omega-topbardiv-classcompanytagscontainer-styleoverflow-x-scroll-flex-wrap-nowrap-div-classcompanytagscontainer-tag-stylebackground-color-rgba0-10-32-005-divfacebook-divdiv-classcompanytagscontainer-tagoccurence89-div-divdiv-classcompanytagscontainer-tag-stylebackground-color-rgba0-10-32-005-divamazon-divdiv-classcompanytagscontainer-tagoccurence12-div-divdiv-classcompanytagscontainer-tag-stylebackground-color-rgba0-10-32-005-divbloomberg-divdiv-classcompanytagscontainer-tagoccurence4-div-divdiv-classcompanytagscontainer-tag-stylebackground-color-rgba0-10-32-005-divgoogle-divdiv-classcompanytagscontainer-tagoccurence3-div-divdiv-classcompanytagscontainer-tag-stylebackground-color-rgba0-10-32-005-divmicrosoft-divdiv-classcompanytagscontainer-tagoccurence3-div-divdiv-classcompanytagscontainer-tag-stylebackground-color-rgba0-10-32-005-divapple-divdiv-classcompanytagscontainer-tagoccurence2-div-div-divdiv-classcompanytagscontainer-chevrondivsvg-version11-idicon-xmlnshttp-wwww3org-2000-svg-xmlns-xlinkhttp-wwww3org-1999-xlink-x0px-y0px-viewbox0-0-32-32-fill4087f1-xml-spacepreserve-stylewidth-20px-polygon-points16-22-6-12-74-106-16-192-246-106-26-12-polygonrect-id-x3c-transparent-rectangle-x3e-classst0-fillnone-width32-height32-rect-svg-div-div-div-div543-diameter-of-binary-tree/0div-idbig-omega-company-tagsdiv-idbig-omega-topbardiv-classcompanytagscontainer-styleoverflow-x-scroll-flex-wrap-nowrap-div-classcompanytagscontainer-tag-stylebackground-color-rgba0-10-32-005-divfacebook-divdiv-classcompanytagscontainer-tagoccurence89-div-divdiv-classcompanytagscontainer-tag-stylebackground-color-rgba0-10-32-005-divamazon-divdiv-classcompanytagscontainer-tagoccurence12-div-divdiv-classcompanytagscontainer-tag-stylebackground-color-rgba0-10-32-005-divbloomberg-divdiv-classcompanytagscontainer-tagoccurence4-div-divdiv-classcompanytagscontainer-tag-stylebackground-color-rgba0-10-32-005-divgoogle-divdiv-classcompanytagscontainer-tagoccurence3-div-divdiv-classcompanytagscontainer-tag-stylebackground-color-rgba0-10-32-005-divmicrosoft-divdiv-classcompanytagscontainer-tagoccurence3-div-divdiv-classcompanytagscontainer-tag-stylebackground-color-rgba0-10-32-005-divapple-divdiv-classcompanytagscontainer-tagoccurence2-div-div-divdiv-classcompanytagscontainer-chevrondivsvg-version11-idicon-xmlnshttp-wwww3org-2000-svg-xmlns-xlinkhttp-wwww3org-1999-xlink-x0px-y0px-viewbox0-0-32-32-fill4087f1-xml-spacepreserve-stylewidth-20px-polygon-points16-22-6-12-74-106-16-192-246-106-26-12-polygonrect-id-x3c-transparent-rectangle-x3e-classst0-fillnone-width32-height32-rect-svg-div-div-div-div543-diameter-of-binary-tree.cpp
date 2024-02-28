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
    /*int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int left = height(root->left); 
        int right=height(root->right); 
        return max(left, right)+1;
    } */
    
    pair<int, int>diameter(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        
        pair<int,int> left= diameter(root->left);
        pair<int,int>right = diameter(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int combo = left.second + right.second +1;
        
        pair<int,int> ans;
        ans.first=max(op1, max(op2, combo));
        ans.second=max(left.second, right.second)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        /*if(root==NULL)
            return 0;
        
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        
        int combo = height(root->left)+height(root->right);
        
        int ans = max(left, max(right, combo));  // time complexity is O(n^2);
        
        return ans;*/
        
        // now optimization approach
        
        return diameter(root).first-1;
    }
};