class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size() == 0 || s.size() == 0){return 0;}
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());
        int ans = 0, child = 0, cookie = 0;
        while(cookie < s.size() && child < g.size()){
            if(g[child] <= s[cookie]){
                ans++;
                cookie++;
                child++;
            }else{
                child++;
            }
        }
        return ans;
    }
};