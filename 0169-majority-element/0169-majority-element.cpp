class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> map;
        int l = nums.size();
        for(auto x: nums){
            map[x]++;
            if(map[x] > l/2)
                return x;
        }
        return nums[0];
    }
};