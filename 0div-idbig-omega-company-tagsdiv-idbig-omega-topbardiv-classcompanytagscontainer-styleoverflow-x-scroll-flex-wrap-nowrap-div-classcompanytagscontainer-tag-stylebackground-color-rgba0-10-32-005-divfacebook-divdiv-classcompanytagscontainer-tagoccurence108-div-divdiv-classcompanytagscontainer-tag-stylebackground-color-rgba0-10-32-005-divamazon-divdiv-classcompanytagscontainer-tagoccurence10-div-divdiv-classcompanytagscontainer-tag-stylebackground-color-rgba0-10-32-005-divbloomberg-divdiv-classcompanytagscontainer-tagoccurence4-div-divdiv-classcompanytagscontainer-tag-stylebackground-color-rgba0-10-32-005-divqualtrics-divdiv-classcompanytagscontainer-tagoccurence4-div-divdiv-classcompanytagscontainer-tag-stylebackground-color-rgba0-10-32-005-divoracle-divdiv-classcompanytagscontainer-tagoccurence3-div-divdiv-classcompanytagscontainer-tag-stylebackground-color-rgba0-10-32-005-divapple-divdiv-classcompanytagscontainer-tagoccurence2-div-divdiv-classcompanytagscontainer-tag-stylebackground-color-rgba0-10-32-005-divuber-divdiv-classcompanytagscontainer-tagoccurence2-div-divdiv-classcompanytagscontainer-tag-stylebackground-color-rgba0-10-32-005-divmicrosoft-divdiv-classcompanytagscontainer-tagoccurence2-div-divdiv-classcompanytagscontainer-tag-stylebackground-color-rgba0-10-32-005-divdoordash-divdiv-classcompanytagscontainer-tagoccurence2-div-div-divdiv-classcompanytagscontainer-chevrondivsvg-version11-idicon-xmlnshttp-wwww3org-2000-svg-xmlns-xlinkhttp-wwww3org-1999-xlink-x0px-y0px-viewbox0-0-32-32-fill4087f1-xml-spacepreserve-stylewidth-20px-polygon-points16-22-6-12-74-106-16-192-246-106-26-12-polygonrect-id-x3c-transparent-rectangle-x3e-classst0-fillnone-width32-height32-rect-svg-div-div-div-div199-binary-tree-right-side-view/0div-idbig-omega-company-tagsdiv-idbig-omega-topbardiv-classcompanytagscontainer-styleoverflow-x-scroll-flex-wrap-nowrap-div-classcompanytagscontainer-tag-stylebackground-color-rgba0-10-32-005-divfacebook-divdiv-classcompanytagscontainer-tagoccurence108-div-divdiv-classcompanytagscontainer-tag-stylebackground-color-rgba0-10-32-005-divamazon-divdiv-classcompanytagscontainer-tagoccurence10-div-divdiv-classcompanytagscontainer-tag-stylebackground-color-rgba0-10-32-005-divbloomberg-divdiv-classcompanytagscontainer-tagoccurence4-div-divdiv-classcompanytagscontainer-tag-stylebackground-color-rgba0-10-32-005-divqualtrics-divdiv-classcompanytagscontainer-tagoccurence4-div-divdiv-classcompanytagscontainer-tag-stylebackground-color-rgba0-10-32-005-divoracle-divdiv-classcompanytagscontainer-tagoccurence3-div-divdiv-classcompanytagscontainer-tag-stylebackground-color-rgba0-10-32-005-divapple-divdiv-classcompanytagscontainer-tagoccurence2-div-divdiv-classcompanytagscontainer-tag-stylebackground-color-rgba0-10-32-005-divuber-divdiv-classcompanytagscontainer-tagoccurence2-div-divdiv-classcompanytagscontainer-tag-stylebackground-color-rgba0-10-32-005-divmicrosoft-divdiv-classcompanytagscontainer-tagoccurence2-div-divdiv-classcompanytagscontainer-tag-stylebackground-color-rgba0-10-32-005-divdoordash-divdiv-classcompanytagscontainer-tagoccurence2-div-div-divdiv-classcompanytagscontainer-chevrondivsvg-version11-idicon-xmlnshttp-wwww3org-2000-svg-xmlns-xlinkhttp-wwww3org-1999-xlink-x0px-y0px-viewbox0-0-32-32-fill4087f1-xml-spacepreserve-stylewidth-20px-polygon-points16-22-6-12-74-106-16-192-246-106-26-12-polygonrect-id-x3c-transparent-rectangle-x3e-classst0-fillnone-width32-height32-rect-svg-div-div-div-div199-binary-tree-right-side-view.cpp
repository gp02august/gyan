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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) {
            return result;
        }

        std::queue<TreeNode*> levelOrderQueue;
        levelOrderQueue.push(root);

        while (!levelOrderQueue.empty()) {
            int levelSize = levelOrderQueue.size();

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = levelOrderQueue.front();
                levelOrderQueue.pop();

                // Add the rightmost element of the current level to the result
                if (i == levelSize - 1) {
                    result.push_back(currentNode->val);
                }

                // Enqueue the children of the current node
                if (currentNode->left) {
                    levelOrderQueue.push(currentNode->left);
                }
                if (currentNode->right) {
                    levelOrderQueue.push(currentNode->right);
                }
            }
        }

        return result;
    }
};