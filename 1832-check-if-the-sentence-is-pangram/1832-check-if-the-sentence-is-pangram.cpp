class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> chars;
        for(auto x: sentence) {
            chars.insert(x);
        }
        return chars.size() == 26;
    }
};