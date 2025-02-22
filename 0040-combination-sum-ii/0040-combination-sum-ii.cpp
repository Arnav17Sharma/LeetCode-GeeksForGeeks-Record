class Solution {
public:
    void helper(int ind, int n, vector<vector<int>> &ans, vector<int>& candidates, vector<int>& path, int target) {
        if(target == 0) {
            ans.push_back(path);
            return;
        }

        for(int i = ind; i < n; i++) {
            if(i > ind && candidates[i] == candidates[i - 1]) continue;
            
            if(candidates[i] > target) break;
            
            path.push_back(candidates[i]);
            helper(i + 1, n, ans, candidates, path, target - candidates[i]);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> path;
        helper(0, candidates.size(), ans, candidates, path, target);
        return ans;
    }
};
