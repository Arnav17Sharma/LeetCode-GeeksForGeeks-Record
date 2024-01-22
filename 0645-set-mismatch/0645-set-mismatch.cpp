class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> l;
        int len = nums.size();
        int sum1 = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<nums.size(); i++){
            if(find(l.begin(), l.end(), nums[i]) == l.end()){
                l.push_back(nums[i]);
            }
        }
        int sum2 = accumulate(l.begin(), l.end(), 0);
        vector<int> ans;
        ans.push_back(sum1 - sum2);
        ans.push_back(len*(len+1)/2 - sum2);
        return ans;
    }
};