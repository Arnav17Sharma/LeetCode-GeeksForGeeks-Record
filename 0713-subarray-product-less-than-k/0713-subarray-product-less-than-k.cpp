class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }
        int p = 1, res = 0;
        int i = 0, j = 0;
        int n = nums.size();
        while(j < n) {
            p *= nums[j];
            while(p >= k){
                p /= nums[i];
                i++;
            }
            res += (j-i+1);
            j++;
        }
        return res;
    }
};