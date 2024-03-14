class Solution {
 public:
  int numSubarraysWithSum(vector<int>& nums, int goal) {
    int ans = 0, p = 0;
    unordered_map<int, int> mp{{0, 1}};
    for (const int num : nums) {
      p += num;
      if (const auto it = mp.find(p - goal); it != mp.cend()){ans += it->second;}
      mp[p]++;
    }
    return ans;
  }
};