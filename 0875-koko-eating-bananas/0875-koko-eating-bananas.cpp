class Solution {
private:
    bool check(int mid, vector<int>& piles, int h) {
        long long total_time = 0;
        for(auto x: piles) {
            total_time += (x/mid);
            if(x%mid) {total_time++;}
        }
        if(total_time <= h) return true;
        return false;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1, e = *max_element(piles.begin(), piles.end()), ans;
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(check(mid, piles, h)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};