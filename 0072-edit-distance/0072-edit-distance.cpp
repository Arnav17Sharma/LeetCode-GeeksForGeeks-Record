class Solution {
public:
    int dp[502][502];
    
    int solve(string &word1, string &word2, int i, int j) {
        int m = word1.length();
        int n = word2.length();
        if(i == m)
            return n-j;
        else if(j == n)
            return m-i;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(word1[i] == word2[j])
            return solve(word1, word2, i+1, j+1);
        else {
        int insert = 1 + solve(word1, word2, i, j+1);
        int deleete = 1 + solve(word1, word2, i+1, j);
        int replace = 1 + solve(word1, word2, i+1, j+1);
        
        return dp[i][j] = min({insert, deleete, replace});
            }
        return -1;
    }
    
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof(dp));
        return solve(word1, word2, 0, 0);
    }
};