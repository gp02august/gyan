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
    vector<int>inorder(TreeNode* root, vector<int>v)
    {
        if(root == NULL)
            return v;
        
        if(root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
        }
        v=inorder(root->left, v);
        v=inorder(root->right, v);
        
        return v;
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        if(root1 == NULL || root2 == NULL)
            return true;
        
        v1=inorder(root1, v1);
        v2=inorder(root2, v2);
        
       /* int i=0, j=0;
        while(i<v1.size() && j<v2.size())
        {
            if(v1[i]==v2[j])
            {
                i++; j++;
            }
            else
            {
                return false;
            }
        }*/
        
        return v1==v2;
    }
};