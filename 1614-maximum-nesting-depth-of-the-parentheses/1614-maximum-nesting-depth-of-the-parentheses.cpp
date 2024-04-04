class Solution {
public:
    int maxDepth(string s) {
        int ans = -1, lvl = 0;
        for(auto c: s){
            if(c == '('){
                lvl++;
            }
            if(c == ')'){
                lvl--;
            }
            ans = max(ans, lvl);
        }
        return ans;
    }
};