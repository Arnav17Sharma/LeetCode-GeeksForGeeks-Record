class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        string ans = "";
        for(int i = l-1; i>=0; i--){
            if(s[i] == ' ' && ans == ""){continue;}
            else if(s[i] == ' '){break;}
            else{ans = s[i] + ans;}
        }
        return ans.length();
    }
};