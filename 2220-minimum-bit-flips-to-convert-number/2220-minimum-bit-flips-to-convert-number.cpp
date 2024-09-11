class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res = start ^ goal;
        int ans = 0;
        while(res != 0) {
            int rem = res%2;
            if(rem == 1) ans++;
            res /= 2;
        }
        return ans;
    }
};