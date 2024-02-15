class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long sum = 0, ans = -1;
        for(auto x: nums){
            if(sum > x){ans = max(ans, sum+x);}
            sum += x;
        }
        return ans;
    }
};