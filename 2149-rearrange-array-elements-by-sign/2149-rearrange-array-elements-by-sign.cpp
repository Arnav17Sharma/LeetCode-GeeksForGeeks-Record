class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> neg;
        for(auto x: nums){
            if(x>=0)
                ans.push_back(x);
            else
                neg.push_back(x);
        }
        int k = 1;
        for(int i=0; i<neg.size(); i++){
            ans.insert(ans.begin()+k, neg[i]);
            k+=2;
        }
        return ans;        
    }
};