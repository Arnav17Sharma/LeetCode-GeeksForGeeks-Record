class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int MOD = 1000000007;
        vector<long long> charcnt(26, 0);
        for(auto x: s) {
            charcnt[x-'a']++;
        }

        for(int trans = 0; trans < t; trans++) {
            vector<long long> newcnt(26, 0);
            for(int charind = 0; charind < 26; charind++) {
                if(charind == 25) {
                    newcnt[0] = (newcnt[0] + charcnt[charind]) % MOD;
                    newcnt[1] = (newcnt[1] + charcnt[charind]) % MOD;
                }
                else {
                    newcnt[charind + 1] = (newcnt[charind + 1] + charcnt[charind]) % MOD;
                }
            }
            charcnt = newcnt;
        }
        long long total = 0;
        for(long long count: charcnt) {
            total = (total + count) % MOD;
        }
        return total;
    }
};