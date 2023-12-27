class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int m = INT_MIN;
        for(vector<int> v: matrix){
            int l = v.size();
            if(l > m){m = l;}
        }
        int N = matrix.size();
        if(m < N){m = N;}
        vector<vector<int>> d(2*m-1);
        if(N==1){return matrix[0];}
        for(int i=0; i<N; i++){
            // cout << matrix[i].size();
            for(int j=0; j<matrix[i].size(); j++){
                int s = i+j;
                // cout << matrix[i][j];
                d[s].push_back(matrix[i][j]);
            }
        }
        vector<int> h;
        int k = 0;
        for(vector<int> v: d){
            if(k%2==0){reverse(v.begin(), v.end());}
            for(int i=0; i<v.size(); i++){
                h.push_back(v[i]);
            }
            k++;
        }
        return h;
    }
};