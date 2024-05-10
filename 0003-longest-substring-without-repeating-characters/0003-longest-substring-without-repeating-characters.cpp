class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, len = s.length(), ans = 0;
        if(len == 0 || len == 1) return len;
        vector<int> cnt(256, 0);
        while(j < len) {
            cnt[s[j]]++;
            while(cnt[s[j]] > 1) {
                cnt[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};