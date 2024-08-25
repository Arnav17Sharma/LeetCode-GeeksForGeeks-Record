class Solution{
public:
    bool allZero(vector<int>& count) {
        for(auto i: count) {
            if(i!=0)
                return false;
        }
        return true;
    }

	vector<int> findAnagrams(string txt, string pat) {
	    int k = pat.size();
	    vector<int> count(26, 0);
	    for(char &ch : pat) {
	        count[ch-'a']++;
	    }
	    int i = 0, j = 0;
	    int n = txt.size();
	    vector<int> result;
	    while(j < n) {
	        int idx = txt[j]-'a';
	        count[idx]--;
	        
	        if(j - i + 1 == k) {
	            if(allZero(count)) {
	                result.push_back(i);
	            }
	            
	            count[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	    return result;
	}
};