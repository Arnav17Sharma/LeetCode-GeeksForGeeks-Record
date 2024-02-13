class Solution {
public:
    bool isPalindrome(string s){
        string k = s;
        reverse(s.begin(), s.end());
        return k==s;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x: words){
            if(isPalindrome(x))
                return x;
        }
        return "";
    }
};