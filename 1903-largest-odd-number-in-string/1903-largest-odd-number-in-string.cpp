class Solution {
public:
    string largestOddNumber(string n) {
        int l = n.length();
        for(int i=l-1; i>=0; i--){
            stringstream obj;
            obj << n[i];
            int num;
            obj >> num;
            if(num%2!=0){
                string ans = n.substr(0, i+1);
                return ans;
            }
        }
        return "";
    }
};