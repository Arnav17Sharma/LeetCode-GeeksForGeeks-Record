class Solution {
 public:
  long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    long long ans = 0;
    int j = -1, minn = -1,mxxx = -1;
    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] < minK || nums[i] > maxK){
          j = i;
      }
      if (nums[i] == minK){
          minn = i;
      }
      if (nums[i] == maxK){
          mxxx = i;
      }
      ans += max(0, min(minn, mxxx) - j);
    }

    return ans;
  }
};