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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans; 
        bool left = false;
        if(root == NULL) return ans; 
        while(!q.empty()){
            int n= q.size();
            vector<int> ans1(n); 
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                if(left == false) 
                    ans1[i] = temp->val;
                else ans1[n-i-1] = temp->val;
                q.pop();
                
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            left = !left;
            ans.push_back(ans1);
        }
        return ans;
    }
};