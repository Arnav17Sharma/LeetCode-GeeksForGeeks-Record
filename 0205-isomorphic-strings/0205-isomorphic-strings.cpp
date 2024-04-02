class Solution {
 public:
  bool isIsomorphic(string s, string t) {
      unordered_map<char, char> mp1;
      unordered_map<char, char> mp2;
      int ls = s.length();
      for(int i=0; i<ls; i++){
          char c1 = s[i], c2 = t[i];
          if((mp1.find(c1) != mp1.end() && mp1[c1] != c2) || (mp2.find(c2) != mp2.end() && mp2[c2] != c1)){
              return false;   
          }
          mp1[c1] = c2;
          mp2[c2] = c1;
      }
      return true;
  }
};