class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int N = s.size();
        int mxx = 0;
        int j = 0;
        int curr = 0;
        for (int i = 0; i < N; i++) {
            curr += abs(s[i] - t[i]);
            while (curr > maxCost) {
                curr -= abs(s[j] - t[j]);
                j++;
            }
            mxx = max(mxx, i - j + 1);
        }
        return mxx;
    }
};