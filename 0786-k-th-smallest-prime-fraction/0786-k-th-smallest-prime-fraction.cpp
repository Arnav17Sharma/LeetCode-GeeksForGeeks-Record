class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int i = 0, j = arr.size()-1;
        vector<pair<double, pair<int, int>>> ans;
        for(int i=1; i<arr.size(); i++) {
            for(int j = 0; j<i; j++) {
                double x = arr[i];
                ans.push_back({arr[j]/x,{arr[j], arr[i]}});
            }
        }
        sort(ans.begin(), ans.end());
        return {ans[k-1].second.first, ans[k-1].second.second};
    }
};