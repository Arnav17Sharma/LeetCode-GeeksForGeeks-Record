class Solution {
 public:
  vector<int> singleNumber(vector<int>& nums) {
    long long s = accumulate(nums.begin(), nums.end(), 0, bit_xor<>());
    long long l = s & -s;
    vector<int> ans(2);
    for (auto x : nums)
      if (x & l)
        ans[0] ^= x;
      else
        ans[1] ^= x;
    return ans;
  }
};