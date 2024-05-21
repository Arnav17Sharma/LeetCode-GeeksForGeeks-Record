typedef long long ll;
class Solution {
private:
    bool check(int mid, vector<int>& nums, int threshold) {
        int total = 0;
        for(auto x: nums) {
            if(x%mid == 0) {
                total += (x/mid);
            }else {
                total += (x/mid) + 1;
            }
        }
        if(total <= threshold) return true;
        return false;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        ll low = 1;
        ll high = *max_element(nums.begin(), nums.end());
        while(low < high) {
            ll mid = low + (high - low) / 2;
            if(check(mid, nums, threshold)) {high = mid;}
            else{low = mid + 1;} 
        }
        return low;
    }
};