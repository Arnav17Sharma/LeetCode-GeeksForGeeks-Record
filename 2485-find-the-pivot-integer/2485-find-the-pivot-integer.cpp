class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2, ls = 0;
        for(int i=n; i>=1; i--){
            ls += i;
            if(ls == sum){return i;}
            sum -= i;
        }
        return -1;
    }
};