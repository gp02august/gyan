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
    int findPos(vector<int>&inorder, int s, int e, int element, int m)
    {
        for(int i=s; i<=e; i++)
        {
            if(inorder[i]==element)
                return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &index, int inorderstart, int inorderend, int m)
    {
        if((index>=m )|| (inorderstart > inorderend))
        {
            return NULL;
        }
        
        int element = preorder[index++];
        TreeNode* temp = new TreeNode(element);
        int postion = findPos(inorder, inorderstart, inorderend, element, m);
        
        temp->left=solve(preorder, inorder, index, inorderstart, postion-1, m );
        
        temp->right=solve(preorder, inorder, index, postion+1, inorderend, m );
        
        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int m=inorder.size();
        int preOrderIndx=0;
        TreeNode* ans=solve(preorder, inorder, preOrderIndx, 0, m-1, m);
        return ans;
    }
};