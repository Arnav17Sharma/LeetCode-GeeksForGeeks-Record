class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> d(26, 0);
        for(auto x: s){
            d[x-'a']++;
            if(d[x-'a'] == 2)
                return x;
        }
        return s[0];
    }
};