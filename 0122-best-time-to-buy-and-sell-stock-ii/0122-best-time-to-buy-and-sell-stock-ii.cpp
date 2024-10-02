class Solution {
public:
    int help(vector<int>& prices, int index, int buy, int n, vector<vector<int>>&dp) {
        if(index == n) return 0;
        if(dp[index][buy] != -1) return dp[index][buy];
        int profit = 0;

        if(buy) {
            profit = max(help(prices, index + 1, 1, n, dp), prices[index] + help(prices, index + 1, 0, n, dp)); 
        }
        else {
            profit = max(help(prices, index + 1, 0, n, dp), -1*prices[index] + help(prices, index + 1, 1, n, dp)); 
        }
        return dp[index][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        if(n == 0)
            return 0;
        return help(prices, 0, 0, n, dp);
    }
};