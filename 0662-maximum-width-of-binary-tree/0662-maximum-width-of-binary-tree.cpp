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
    int widthOfBinaryTree(TreeNode* root) {
        long  ans =0;
        if(root==NULL)
            return ans;
        queue<pair<TreeNode* , int> >q;
        q.push({root, 0});
        while(!q.empty())
        {
            int n= q.size();
            long start = q.front().second;
            long end = q.back().second;
            ans = max(ans, end-start+1);
            for(int i=0; i<n; i++)
            {
                pair<TreeNode*, int> frontNode = q.front();
                TreeNode* nod = frontNode.first;
                long index = frontNode.second;
                q.pop();
                
                if(nod->left)
                {
                    q.push({nod->left, 2*index+1});
                }
                if(nod->right)
                {
                    q.push({nod->right, 2*index+2});
                }
            }
        }
        return ans;
    }
};