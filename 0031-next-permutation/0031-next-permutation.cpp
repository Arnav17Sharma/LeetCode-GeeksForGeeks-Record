class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = 0;
        do{
            next_permutation(nums.begin(), nums.end());
            n++;
        }
        while(n==0);
    }
};