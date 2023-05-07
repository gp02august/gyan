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
    void inorder(TreeNode* root, vector<int>&ans)
    {
        if(root == NULL)
            return ;
        
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    
    TreeNode* intoBST(int start, int end, vector<int>ans)
    {
        if(start>end)
            return NULL;
        
        int mid=(start+end)/2;
        
        TreeNode* Root = new TreeNode(ans[mid]);
        Root->left = intoBST(start, mid-1, ans);
        Root->right = intoBST(mid+1, end, ans);
        return Root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root, ans);
        
        return intoBST(0, ans.size()-1, ans);
    }
};