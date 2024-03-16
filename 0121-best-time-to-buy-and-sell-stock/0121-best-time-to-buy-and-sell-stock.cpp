class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp(prices.size(), 0);
        int maxx = -1;
        for(int i=prices.size()-1; i>=0; i--){
            dp[i] = max(maxx, prices[i]);
            maxx = dp[i];
        }
        int ans = 0;
        for(int i=0; i<prices.size()-1; i++){
            ans = max(ans, dp[i]-prices[i]);
        }
        return ans;
    }
};