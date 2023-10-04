class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        vector<int> bin(2,0);
        string ans = "";
        for(int i=0; i< s.length(); i++){
            int index = i%2;
            if(s[i] == '0'){
                bin[0]++;
            }
            else{
                bin[1]++;
            }
        }
        while(ans.length() != s.length() - 1){
            char element;
            if(bin[1]>1){
                element = '1';
                ans = element + ans;
                bin[1]--;
            }
            else if(bin[0]>0){
                element = '0';ans += element;bin[0]--;
            }
            
        }
        ans+='1';
        return ans;
    }
};