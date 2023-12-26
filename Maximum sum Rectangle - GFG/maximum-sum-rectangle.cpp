//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    long long kadane(vector<int> arr, int n){
        long long sum = 0;
        long long m = INT_MIN;
        for(int i=0; i<n; i++){
            sum += arr[i];
            
            if(sum > m){
                m = sum;
            }
            
            if(sum < 0){
                sum = 0;
            }
            
        }
        return m;
    }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        int mS = INT_MIN;
        for(int l=0; l<C; ++l){
            vector<int> temp(R, 0);
            for(int r=l; r<C; ++r){
                for(int i=0; i<R; ++i){
                    temp[i] += M[i][r];
                }
                int m = kadane(temp, R);
                if(m > mS){mS = m;}
            }
        }
        return mS;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends