class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> counts(n, 0);
        for(auto x: trust){
            counts[x[0]-1]--;counts[x[1]-1]++;
        }
        for(int i=0; i<counts.size(); i++){
            if(counts[i]==n-1){return i+1;}
        }
        return -1;
    }
};