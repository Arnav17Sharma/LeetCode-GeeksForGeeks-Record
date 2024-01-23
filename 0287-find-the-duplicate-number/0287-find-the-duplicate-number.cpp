class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> d(n);
        for(auto x: nums){
            d[x-1]++;
            if(d[x-1] == 2)
                return x;
        }
        return nums[0];
    }
};