class Solution {
 public:
  int maxLengthBetweenEqualCharacters(string s) {
    int ans = -1;
    vector<int> v(26, -1);
    for (int i = 0; i < s.length(); ++i) {
      int c = s[i] - 'a';
      if (v[c] == -1){v[c] = i;}
      else{ans = max(ans,i-v[c]-1);}
    }
    return ans;
  }
};