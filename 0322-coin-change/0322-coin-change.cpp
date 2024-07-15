class Solution {
public:
    int dp[15][10003];
    
    int solve(vector<int>& nums, int target, int i) {
        int n = nums.size();
        
        if(target == 0) {
            return 0;
        }
        
        if(i == n-1) {
            if(target % nums[i] == 0) {return target / nums[i];}
            return 1e9;
        }
        
        if(dp[i][target] != -1)
            return dp[i][target];
        
        int take = 1e9, notake = 1e9;
        if(target >= nums[i]) {
            take = 1 + solve(nums, target-nums[i], i);
        }
        notake = solve(nums, target, i+1);
        return dp[i][target] = min(take, notake);
    }

    int coinChange(vector<int>& nums, int target) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(nums, target, 0);
        if(ans >= 1e9)
            return -1;
        return ans;

    }
};