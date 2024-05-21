class Solution {
public:
    int nthMagicalNumber(long long n, long long a, long long b) {
        int MOD = 1e9+7;
        long long low = min(a,b);
        long long high = min(a,b)*n;
        long long lcm = a * b / __gcd(a, b);
        long long mid;
        while(low < high) {
            mid = low + (high - low) / 2;
            if(mid / a + mid / b - mid  / lcm >= n) {high = mid;}
            else{low = mid + 1;}
        }
        return low%MOD;
    }
};