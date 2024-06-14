class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int d = nums[i - 1] + 1 - nums[i];
                ans += d;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return ans;
    }
};