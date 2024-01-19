class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        int dp[n][n];
        for(int i=0; i<n; i++){
            dp[n-1][i] = matrix[n-1][i];
        }
        
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<n; j++){
                int best = dp[i+1][j];
                if(j>0){best = min(best, dp[i+1][j-1]);}
                if(j<n-1){best = min(best, dp[i+1][j+1]);}
                dp[i][j] = matrix[i][j] + best;
            }
        }
        return *min_element(dp[0], dp[0]+n);
    }
};