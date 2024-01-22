class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.empty())
            return "";
        for(int i=0; i<strs[0].length(); i++){
            for(int j=1; j<strs.size(); j++){
                if(i == strs[0].length() || strs[j][i] != strs[0][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};