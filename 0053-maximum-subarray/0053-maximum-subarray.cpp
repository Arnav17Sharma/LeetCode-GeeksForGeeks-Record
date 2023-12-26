class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0, m = INT_MIN;
        for(auto x: nums){
            sum += x;
            
            if(sum > m){m = sum;}
            
            if(sum < 0){sum = 0;}
        }
        return m;
    }
};