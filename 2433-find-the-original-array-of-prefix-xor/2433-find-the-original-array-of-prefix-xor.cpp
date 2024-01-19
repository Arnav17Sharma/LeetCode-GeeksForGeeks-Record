class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        int prev = pref[0], real = pref[0];
        for(int i = 1; i<pref.size(); i++){
            prev = real ^ pref[i];
            real = real ^ prev;
            ans.push_back(prev);
            
        }
        return ans;
    }
};