class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k = nums.size();
        int result = 0;
        for(int i=0; i<k; i++){
            result = nums[i] ^ result;
        }
        return result;
    }
};