class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        if(haystack==needle){return 0;}
        for(int i=0; i<haystack.length(); i++){
            if(haystack.substr(i, needle.length())==needle){
                ans = i;
                break;
            }
        }
        return ans;
    }
};