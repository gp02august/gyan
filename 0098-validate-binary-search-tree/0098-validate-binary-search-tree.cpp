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
    void Inorder(TreeNode* root, vector<int>&ans)
    {
        if(root->left != NULL && root->right != NULL)
        {
            Inorder(root->left, ans);
            ans.push_back(root->val);
            Inorder(root->right, ans);
        }
        
        else if(root->left != NULL && root->right == NULL)
        {
            Inorder(root->left, ans);
            ans.push_back(root->val);
        }
        
        else if(root->left == NULL && root->right != NULL)
        {
            ans.push_back(root->val);
            Inorder(root->right, ans);
        }
        else
        {
            ans.push_back(root->val);
        }
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        if(root == NULL || (root->left==NULL && root->right==NULL))
            return true;
        
        Inorder(root, ans);
        
        int i=1; 
        while(i < ans.size())
        {
            if(ans[i]<=ans[i-1])
            {
                return false;
            }
               i++;
        }
        
        return true;
    }
};