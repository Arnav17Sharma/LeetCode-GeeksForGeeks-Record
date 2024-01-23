class Solution {
public:
    int maxLength(vector<string>& arr) {
        int ans = 0;
        int n = arr.size();
        for(int i = 0; i < (1 << n); i++){
            int l = 0;
            vector<int> f(26, 0);
            for(int j = 0; j < n; j++){
                if((i >> j) & 1){
                    l += arr[j].size();
                    for(auto x : arr[j])
                        ++f[x - 'a'];
                }
            }
            bool fine = 1;
            for(auto x : f){
                if(x > 1){
                    fine = 0;
                    break;
                }
            }

            if(fine)
                ans = max(ans, l);
        }

        return ans;
    }
};