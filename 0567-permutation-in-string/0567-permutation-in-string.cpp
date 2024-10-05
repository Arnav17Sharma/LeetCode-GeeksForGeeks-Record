class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        unordered_map<char, int>mp, mp2;
        int i = 0;
        int j = 0;
        int k = s1.size();
        int n = s2.size();
        
        for(auto ch:s1) mp2[ch]++;
        while(j < n)
        {
            mp[s2[j]]++;
            if(j - i + 1 == k)
            {
                if(mp == mp2) return true;
                mp[s2[i]]--;
                if(mp[s2[i]] == 0) mp.erase(s2[i]);
                i++;
            }
            j++;
        }
        return false;
    }
};