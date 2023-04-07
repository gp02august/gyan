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
    int findPos(vector<int> &inorder, int s, int e, int element, int n)
    {
        for(int i=e; i>=s; i--)
        {
            if(inorder[i]==element)
            return i;
        }
        return -1;
    }
    
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int &index, int inorderstart, int inorderend, int n)
    {
        if(index<0 || inorderstart > inorderend)
            return NULL;
        
         int element = postorder[index--];
        TreeNode* temp= new TreeNode(element);
        int pos = findPos(inorder, inorderstart, inorderend, element, n);
        
        temp->right = solve(inorder, postorder, index, pos+1, inorderend, n);
        temp->left = solve(inorder ,postorder, index, inorderstart, pos-1, n);
        
        return temp;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int postOrderIndx=postorder.size()-1;
        TreeNode* ans=solve(inorder, postorder, postOrderIndx, 0, n-1, n);
        return ans;
    }
};