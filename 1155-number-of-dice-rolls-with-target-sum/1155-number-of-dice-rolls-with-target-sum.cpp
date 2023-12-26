class Solution {
 public:
  int numRollsToTarget(int n, int k, int target) {
    constexpr int kMod = 1'000'000'007;
    vector<int> dp(target + 1);
    dp[0] = 1;
    while (n > 0) {
      vector<int> g(target + 1);
      for (int i = 1; i <= k; ++i)
        for (int t = i; t <= target; ++t) {
          g[t] += dp[t - i];
          g[t] %= kMod;
        }
        dp = move(g);
        n--;
    }

    return dp[target];
  }
};