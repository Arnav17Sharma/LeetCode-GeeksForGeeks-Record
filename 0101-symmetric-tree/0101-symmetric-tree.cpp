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
private:
    bool isSymmetricUtil(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL || root2 == NULL) {
            return root1 == root2;
        }
        return (root1->val == root2->val) && isSymmetricUtil(root1->left, root2->right) && isSymmetricUtil(root1->right, root2->left);
    }

public:
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        }
        return isSymmetricUtil(root->left, root->right);
    }
};