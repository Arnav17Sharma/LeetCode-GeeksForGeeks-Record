class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x!=0){
            int digit = x%10;
            x/=10;
            ans *= 10;
            ans += digit;
        }
        return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
    }
};