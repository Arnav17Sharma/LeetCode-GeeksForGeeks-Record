class Solution {
private:
    bool check(vector<int>& candies, long long k, int check) {
        long long int ans = 0;
        for (int i = 0; i < candies.size(); i++) {
            ans += candies[i] / check;
        }

        return ans >= k;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int high = 0;
        for(auto x: candies) {high = max(high, x);}
        int low = 0;
        while(low < high) {
            int mid = (low + high + 1) / 2;
            if(check(candies, k, mid)) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};