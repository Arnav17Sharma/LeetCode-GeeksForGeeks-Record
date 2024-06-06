class Solution {
 public:
  bool isNStraightHand(vector<int>& hand, int groupSize) {
    map<int, int> mp;
    for (auto x : hand)
      mp[x]++;
    for (auto [key, v] : mp) {
     int value = mp[key];
      if (value > 0)
        for (int i = key; i < key + groupSize; ++i) {
          mp[i] -= value;
          if (mp[i] < 0)
            return false;
        }
    }
    return true;
  }
};