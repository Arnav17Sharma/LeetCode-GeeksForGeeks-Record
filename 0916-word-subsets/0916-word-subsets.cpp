class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int maxFreq[26] = {0};
        int tempFreq[26];

        for(auto word: words2) {
            memset(tempFreq, 0, sizeof tempFreq);
            for(char ch: word) {
                tempFreq[ch - 'a']++;
            }
            for(int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], tempFreq[i]);
            }
        }
        vector<string> ans;
        for(auto word: words1) {
            memset(tempFreq, 0, sizeof tempFreq);
            for(char ch: word) {
                tempFreq[ch - 'a']++;
            }
            bool isans = true;
            for(int i = 0; i < 26; i++) {
                if(maxFreq[i] > tempFreq[i]) {
                    isans = false;
                    break;
                }
            }
            if(isans) {ans.push_back(word);}
        }
        return ans;
    }
};