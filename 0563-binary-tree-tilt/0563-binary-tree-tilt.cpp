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
    int total = 0;
    int findTilt(TreeNode* root) {
        int x = solve(root);
        return total;
    }

    int solve(TreeNode* root) {
        if(!root) return 0;
        int lt = solve(root->left);
        int rt = solve(root->right);

        int ans;
        ans = abs(lt-rt);
        total += ans;
        return root->val + lt + rt;
    }
};