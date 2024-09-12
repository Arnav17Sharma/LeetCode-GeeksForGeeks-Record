class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowedChars;
        for (int i = 0; i < allowed.length(); i++) {
            allowedChars.insert(allowed[i]);
        }
        int consistentCount = 0;
        for (string& word : words) {
            bool isConsistent = true;
            for (int i = 0; i < word.length(); i++) {
                char currentChar = word[i];
                if (allowedChars.find(currentChar) == allowedChars.end()) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) {
                consistentCount++;
            }
        }
        return consistentCount;
    }
};