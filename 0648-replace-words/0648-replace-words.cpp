class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        istringstream sStream(sentence);
        unordered_set<string> dictSet(dictionary.begin(), dictionary.end());
        string word;
        string s;
        while (getline(sStream, word, ' ')) {
            s += help(word, dictSet) + " ";
        }
        s.pop_back();
        return s;
    }

private:
    string help(string word, unordered_set<string> dictSet) {
        for (int i = 1; i <= word.length(); i++) {
            string root = word.substr(0, i);
            if (dictSet.contains(root)) {
                return root;
            }
        }
        return word;
    }
};