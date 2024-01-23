class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int a = 0, b = 0;
        while(ans.size() < m*n)
        {for(int i=a; i<matrix[a].size() - (b); i++){
            ans.push_back(matrix[a][i]);
        }
         if(ans.size() == m*n)
             return ans;
        for(int i = b+1; i < n-(b+1); i++){
            ans.push_back(matrix[i][m-1-b]);
        }
         if(ans.size() == m*n)
             return ans;
        for(int i=matrix[n-1-a].size() - (b+1); i>=a; i--){
            ans.push_back(matrix[n-1-a][i]);
        }
         if(ans.size() == m*n)
             return ans;
        for(int i = n-(b+2); i>=b+1; i--){
            ans.push_back(matrix[i][b]);
        }
         a++;b++;
        }
        return ans;
    }
};