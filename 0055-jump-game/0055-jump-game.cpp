class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int i = 0;
    for (int j = 0; i < nums.size() && i <= j; ++i)
      j = max(j, i + nums[i]);
    return i == nums.size();
  }
};