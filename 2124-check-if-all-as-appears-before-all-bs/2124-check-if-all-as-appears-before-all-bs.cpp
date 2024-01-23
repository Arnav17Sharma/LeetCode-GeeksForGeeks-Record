class Solution {
public:
    bool checkString(string s) {
        int found = 0;
        for(auto x: s){
            if(x=='b')
                found = 1;
            else if(x=='a' && found)
                return false;
        }
        return true;
    }
};