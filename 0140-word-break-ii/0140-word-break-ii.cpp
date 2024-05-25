class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        vector<string> ans;
        string curr;
        backtrack(s, st, curr, ans, 0);
        return ans;
    }

private:
    void backtrack(const string& s, const unordered_set<string>& st,
                   string& curr, vector<string>& ans,
                   int ini) {
        if (ini == s.length()) {
            ans.push_back(curr);
            return;
        }
        for (int fin = ini + 1; fin <= s.length();++fin) {
            string word = s.substr(ini, fin - ini);
            if (st.find(word) != st.end()) {
                string com = curr;
                if (!curr.empty()) curr += " ";
                curr += word;
                backtrack(s, st, curr, ans, fin);
                curr = com;
            }
        }
    }
};