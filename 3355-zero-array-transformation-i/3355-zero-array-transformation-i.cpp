class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);
        for(const auto& query : queries) {
            diff[query[0]]++;
            diff[query[1] + 1]--;
        }
        int coverage = 0;
        for(int i = 0; i < n; i++) {
            coverage += diff[i];
            if(nums[i] > coverage) {
                return false;
            }
        }
        
        return true;
    }
};
