class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(auto x: nums) {
            if(x > 0)
                return -1;
            int pos = x*-1;
            if(find(nums.begin(), nums.end(), pos) != nums.end()) {
                return pos;
            }
        }
        return -1;
    }
};