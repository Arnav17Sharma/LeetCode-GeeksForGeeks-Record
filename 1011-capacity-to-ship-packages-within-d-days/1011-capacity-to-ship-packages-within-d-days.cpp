class Solution {
private:
    bool check(int capacity, vector<int>& weights, int days) {
        int sum = 0, dayCount = 1;
        for(int i=0; i<weights.size(); i++) {
            if(sum + weights[i] > capacity) {
                sum = weights[i];
                dayCount++;
            }else {
                sum += weights[i];
            }
        }
        if(dayCount <= days) return true;
        return false;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(check(mid, weights, days)) {
                high = mid;
            }else {
                low = mid + 1;
            }
        }
        return low;
    }
};