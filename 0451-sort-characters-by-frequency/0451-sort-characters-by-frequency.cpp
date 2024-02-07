class Solution {
 public:
  string frequencySort(string s) {
    const int n = s.length();
    string ans;
    vector<int> count(128);
    vector<vector<char>> D(n + 1);
    for (auto c : s)
      ++count[c];

    for (int i = 0; i < 128; ++i) {
      int freq = count[i];
      if (freq > 0)
        D[freq].push_back((char)i);
    }

    for (int freq = n; freq > 0; --freq)
      for (auto c : D[freq])
        ans += string(freq, c);
    return ans;
  }
};