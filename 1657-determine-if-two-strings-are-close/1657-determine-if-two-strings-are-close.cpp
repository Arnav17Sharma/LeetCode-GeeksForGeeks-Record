class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> req(26, 0), present(26, 0);
        for(auto i : word1)
            req[i - 'a']++;
        for(auto i : word2)
            present[i - 'a']++;

        for(int i = 0; i < 26; i++){
            if(req[i] == present[i])
                continue;

            for(int j = i + 1; j < 26; j++){
                if(req[i] == present[j] and present[i] and present[j]){
                    swap(present[i], present[j]);
                    break;
                }
            }
        }

        return req == present;
    }
};