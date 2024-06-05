class Solution {
 public:
  vector<string> commonChars(vector<string>& A) {
    vector<string> ans;
    vector<int> cnt(26, INT_MAX);

    for (auto a : A) {
      vector<int> count(26);
      for (char c : a)
        count[c - 'a']++;
      for (int i = 0; i < 26; ++i)
        cnt[i] = min(cnt[i], count[i]);
    }

    for (char c = 'a'; c <= 'z'; ++c)
      for (int i = 0; i < cnt[c - 'a']; ++i)
        ans.push_back(string(1, c));

    return ans;
  }
};