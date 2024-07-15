class Solution {
public:
    int dp[1002][1002];
    
    int solve(vector<int>& nums, int target, int i) {
        int n = nums.size();
        
        if(target == 0) {
            return 0;
        }
        
        if(i == n-1) {
            if(nums[i] == target)
                return 1;
            return -1e9;
        }
        
        if(dp[i][target] != -1)
            return dp[i][target];
        
        int take = -1e9, notake = -1e9;
        if(target >= nums[i]) {
            take = 1 + solve(nums, target-nums[i], i+1);
        }
        notake = solve(nums, target, i+1);
        return dp[i][target] = max(take, notake);
    }
    
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(nums, target, 0);
        if(ans <= 0)
            return -1;
        return ans;
    }
};