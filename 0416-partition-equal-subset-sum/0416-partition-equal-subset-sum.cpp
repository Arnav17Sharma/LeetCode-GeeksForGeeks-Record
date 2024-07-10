class Solution {
private:
    bool isSubsetSum(vector<int>arr, int sum){
        bool dp[arr.size() + 1][sum + 1];
        // memset(dp, -1, sizeof(dp));
        for(int i=0; i<arr.size()+1; i++) {
            for(int j=0; j<sum+1; j++) {
                if(i==0) {
                    dp[i][j] = false;
                }
                if(j==0) {
                    dp[i][j] = true;
                }
            }
        }
        for(int i=1; i<arr.size()+1; i++) {
            for(int j=1; j<sum+1; j++) {
                if(arr[i-1] <= j) {
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[arr.size()][sum];
    }
public:
    bool canPartition(vector<int>& arr) {
        int sum = 0;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
        }
        if(sum % 2 != 0)
            return false;
        return isSubsetSum(arr, sum/2);
    }
};