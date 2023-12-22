class Solution {
public:
    int maxScore(string s) {
        int ones = 0, score = 0, max = INT_MIN;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                ones++;
            }
        }
        // if(ones == 0){return s.length();}
        int zeroes = 0, one = 0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == '0'){
                zeroes++;
            }
            else if(s[i] == '1'){
                one++;
            }
            score = zeroes + (ones-one);
            if(score > max){max = score;}
        }
        return max;
    }
};