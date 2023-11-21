class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // while(k--){
        //     int last = nums[nums.size()-1];
        //     for(int i=nums.size()-1; i>0; i--){
        //         nums[i] = nums[i-1];
        //     }
        //     nums[0] = last;
        // }
        k = k%nums.size();
        int diff = nums.size() - k;
        vector<int> ans;
        ans.insert(ans.end(), nums.begin(), nums.begin()+diff);
        ans.insert(ans.begin(), nums.begin()+diff, nums.end());
        nums = ans;

    }
};