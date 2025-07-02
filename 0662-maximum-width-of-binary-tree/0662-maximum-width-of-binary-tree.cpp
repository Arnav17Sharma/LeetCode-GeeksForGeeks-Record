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
        if(!root) return 0;
        queue <pair<TreeNode*, long long>> q;
        q.push({root, 1});
        long long mx = 0;

        while(!q.empty()) {
            int n = q.size();
            long long f = q.front().second;
            long long l;

            for(int i = 0; i < n; i++) {
                TreeNode* temp = q.front().first;
                l = q.front().second;
                q.pop();

                if(temp->left) q.push({temp->left, 2*(l - f)});

                if(temp->right) q.push({temp->right, 2*(l - f) + 1});
            }

            mx = max(mx, (l - f +1));
        
        }

        return mx;
    }
};