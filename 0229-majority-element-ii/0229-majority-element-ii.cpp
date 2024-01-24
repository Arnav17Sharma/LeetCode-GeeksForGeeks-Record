class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int l = nums.size();
        map<int, int> m;
        vector<int> ans;
        for(auto x: nums){
            m[x]++;
            if(m[x] > l/3 && find(ans.begin(), ans.end(), x) == ans.end())
                ans.push_back(x);
        }
        return ans;
    }
};