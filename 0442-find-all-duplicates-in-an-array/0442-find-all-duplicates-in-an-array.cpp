class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> h;
        sort(nums.begin(), nums.end());
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==prev){h.push_back(prev);}
            prev = nums[i];
        }
        return h;
    }
};