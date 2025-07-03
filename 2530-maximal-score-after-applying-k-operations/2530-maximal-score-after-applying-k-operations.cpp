class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> q;
        int score  = 0;

        for(auto x: nums)
            q.push(x);
        
        while(k--) {
            int s = q.top(); q.pop();
            score += s;
            q.push(ceil((s+2)/3));
        }
        return score;
    }
};