class Solution {
public:
    string defangIPaddr(string address) {
        string g = "";
        for(auto x: address){
            if(x=='.')
                g += "[.]";
            else
                g += x;
        }
        return g;
    }
};