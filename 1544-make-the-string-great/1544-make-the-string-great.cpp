class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char c: s){
            char opp;
            if(!st.empty() && abs(int(c) - int(st.top())) == 32){st.pop();}
            else{st.push(c);}
            // if(int(c)>=97){opp = char(int(c)-32);}
            // else{opp = char(int(c)+32);}
            // if(st.top() == opp){st.pop();}
            // else{st.push(c);}
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            // cout << st.top() << " ";
            st.pop();
        }
        return ans;
    }
};