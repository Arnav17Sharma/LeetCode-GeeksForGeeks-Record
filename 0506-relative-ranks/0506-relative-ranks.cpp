class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> dup;
        for(auto x: score) {dup.push_back(x);}
        sort(dup.begin(), dup.end());
        reverse(dup.begin(), dup.end());
        map<int,string> mp;
        for(int i=0; i<score.size(); i++) {
            if(i==0) {mp[dup[i]] = "Gold Medal";}
            else if(i==1) {mp[dup[i]] = "Silver Medal";}
            else if(i==2) {mp[dup[i]] = "Bronze Medal";}
            else {mp[dup[i]] = to_string(i+1);}
        }
        vector<string> ans(score.size());
        for(int i=0; i<score.size(); i++) {
            ans[i] = mp[score[i]];
        }
        return ans;
    }
};