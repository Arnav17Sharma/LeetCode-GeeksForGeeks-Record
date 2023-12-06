class Solution {
public:
    int totalMoney(int n) {
        int start = 1, add = 0, ans = 0;
        for(int i=0; i<n; i++){
            if(i%7==0 && i!=0){start += 1;add = start;}
            else{add = add+1;}
            ans += add;
        }
        return ans;
    }
};