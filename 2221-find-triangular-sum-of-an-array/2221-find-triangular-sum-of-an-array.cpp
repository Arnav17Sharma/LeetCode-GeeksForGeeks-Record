class Solution {
 public:
  int triangularSum(vector<int>& nums) {
    for (int a = nums.size(); a > 0; --a)
      for (int i = 0; i + 1 < a; ++i)
        nums[i] = (nums[i] + nums[i + 1]) % 10;
    return nums[0];
  }
};