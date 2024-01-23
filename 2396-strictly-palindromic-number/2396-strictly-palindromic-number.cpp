class Solution {
public:
    
    string convert(int base, int n){
        int ans = 0;
        string ans2 = "";
        while(n!=0){
            int digit = n % base;
            n /= base;
            string g = to_string(digit);
            ans2 = g + ans2;
        }
        return ans2;
    }
    
    bool isPalindrome(string s){
        string f = s;
        reverse(f.begin(), f.end());
        return f == s;
    }
    
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<n; i++){
            string conversion = convert(i, n);
            cout << conversion << endl;
            if(!isPalindrome(conversion)){return false;}
        }
        return true;
    }
};