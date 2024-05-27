class Solution {
private:
    int helper(vector<int>& nums, int goal)
    {
        int l = 0, r = 0;
        int sum = 0, ans = 0;
        while(r < nums.size())
        {
            sum += nums[r]%2;
            while(sum > goal)
            {
                sum -= nums[l]%2;
                l++;
            }
            ans += (r-l+1);
            r++;
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k-1);
    }
};