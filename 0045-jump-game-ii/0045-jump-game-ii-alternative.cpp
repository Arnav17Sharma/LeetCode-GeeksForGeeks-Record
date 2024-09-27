class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> count(nums.size(), INT_MAX);
        count[0] = 0;
        if(nums.size() == 1) return 0;
        for(int j = 0; j<nums.size(); j++) {
            for(int i=j+1; i<j+1+nums[j]; i++) {
                count[i] = min(count[i],count[j]+1);
                if(i == nums.size()-1) return count[i];
            }
        }
        return nums.size();
    }
};