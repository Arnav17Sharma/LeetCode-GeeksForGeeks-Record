class Solution {
public:
    bool isPalindrome(long long x) {
        long long ans = 0, x1= x;
        if(x<0){return false;}
        while(x!=0){
            long long d = x%10;
            x /= 10;
            ans += d;ans *= 10;
        }
        if(ans/10 == x1){return true;}
        return false;
    }
};