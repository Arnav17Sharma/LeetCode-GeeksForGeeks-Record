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
    bool evaluateTree(TreeNode* root) {
        if (root->left == nullptr and root->right == nullptr) {
            return root->val;
        }
        bool evalleft = evaluateTree(root->left);
        bool evalright = evaluateTree(root->right);
        bool evaluateRoot;
        if (root->val == 2) {
            evaluateRoot = evalleft | evalright;
        } else {
            evaluateRoot = evalleft & evalright;
        }
        return evaluateRoot;
    }
};