class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s = "";
        int note = -1;
        for(int i=0; i<word.length(); i++) {
            s += word[i];
            if(word[i] == ch) {note = i;break;}
        }
        if(note != -1){
            reverse(s.begin(), s.end());
            for(int i = note+1; i<word.length(); i++){
                s += word[i];
            }
        }
        return s;
    }
};