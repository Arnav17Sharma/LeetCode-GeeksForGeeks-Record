class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string repeating = word;

        int ans = 0;

        while(sequence.find(repeating) != string::npos) {
            ans++;
            repeating += word;
        }
        return ans;
    }
};