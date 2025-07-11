class Solution {
public:
    string RLE(string input) {
        string output = "";
        int cnt = 1;
        for(int i = 1; i < input.length(); i++) {
            if(input[i-1] == input[i]) 
                cnt++;
            else {
                output += to_string(cnt) + input[i-1];
                cnt = 1;
            }
        }
        output += to_string(cnt) + input[input.length()-1];
        return output;
    }
    string countAndSay(int n) {
        string start = "1", new_out;
        if(n==1) return "1";
        for(int i = 1; i<n; i++) {
            new_out = RLE(start);
            start = new_out;
        }
        return new_out;
    }
};