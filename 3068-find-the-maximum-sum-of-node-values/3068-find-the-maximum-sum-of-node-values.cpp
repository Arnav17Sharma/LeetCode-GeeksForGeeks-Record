class Solution {
 public:
  long long maximumValueSum(vector<int>& nums, int k,
                            vector<vector<int>>& edges) {
    long long maxSum = 0;
    int del_count = 0, minD = INT_MAX;
    for (const int num : nums) {
      maxSum += max(num, num ^ k);
      del_count += ((num ^ k) > num) ? 1 : 0;
      minD = min(minD, abs(num - (num ^ k)));
    }
    if (del_count % 2 == 0)
      return maxSum;
    return maxSum - minD;
  }
};