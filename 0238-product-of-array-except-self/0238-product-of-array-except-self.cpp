class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int p = 1;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(p);
            p *= nums[i];
        }
        reverse(nums.begin(), nums.end());
        p = 1;
        for(int i=0; i<nums.size(); i++){
            ans[nums.size()-i-1] *= p;
            p *= nums[i];
        }
        return ans;
    }
};