class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        for(auto x: nums){
            if(x!=0)
                ans.push_back(x);
            else
                count++;
        }
        for(int i=0; i<count; i++){
            ans.push_back(0);
        }
        for(int i=0; i<nums.size(); i++)
            nums[i] = ans[i];
    }
};