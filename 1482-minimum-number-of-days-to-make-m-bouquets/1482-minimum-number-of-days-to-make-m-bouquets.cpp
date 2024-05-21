class Solution {
private:
    bool check(int mid, vector<int>& bloomDay, int m, int k) {
        int count = 0;
        int bouquets = 0;
        for(auto x: bloomDay) {
            if(x <= mid) {count++;}
            else{
                bouquets += (count / k);
                count = 0;
            }
        }
        bouquets += (count / k);
        return bouquets >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end()), high = *max_element(bloomDay.begin(), bloomDay.end()), ans = -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(check(mid, bloomDay, m, k)) {ans = mid; high = mid - 1;}
            else{low = mid + 1;}
        }
        return ans;
    }
};