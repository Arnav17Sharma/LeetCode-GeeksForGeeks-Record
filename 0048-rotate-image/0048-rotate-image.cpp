class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j = n-1; j>=0; j--){
                ans[j][i] = matrix[i][j];
            }
        }
        for(int i=0; i<n; i++){
            reverse(ans[i].begin(), ans[i].end());
            for(int j = n-1; j>=0; j--){
                matrix[i][j] = ans[i][j];
            }
        }
    }
};