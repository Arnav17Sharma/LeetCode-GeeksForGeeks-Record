class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0, negative = 0, zeroes = 0;
        for(auto x: nums){
            if(x > 0)
                positive++;
            else if(x < 0)
                negative++;
            else if(x == 0)
                zeroes++;
        }
        return max(positive, negative);
    }
};