class Solution {
 public:
  bool checkSubarraySum(vector<int>& nums, int k) {
    int p = 0;
    unordered_map<int, int> mp{{0, -1}};
    for (int i = 0; i < nums.size(); ++i) {
      p += nums[i];
      if (k != 0)
        p %= k;
      if (const auto it = mp.find(p);
          it != mp.cend()) {
        if (i - it->second > 1)
          return true;
      } else {
        mp[p] = i;
      }
    }

    return false;
  }
};