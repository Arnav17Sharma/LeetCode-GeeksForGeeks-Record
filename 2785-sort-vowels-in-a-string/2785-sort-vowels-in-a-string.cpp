class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels = {'A','E','I','O','U','a','e','i','o','u'}, d;
        for(auto x: s){
            if(find(vowels.begin(), vowels.end(), x) != vowels.end()){
                d.push_back(x);
            }
        }
        sort(d.begin(), d.end());
        string h = "";
        int k = 0;
        for(auto x: s){
            if(find(vowels.begin(), vowels.end(), x) != vowels.end()){
                h += d[k];
                k++;
            }
            else{
                h += x;
            }
        }
        return h;
    }
};