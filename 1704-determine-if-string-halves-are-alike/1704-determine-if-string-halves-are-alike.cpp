class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0, c2=0;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0; i<s.length()/2; i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
                c1++;
            }
        }
        for(int i=s.length()/2; i<s.length(); i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
                c2++;
            }
        }
        return c1==c2;
    }
};