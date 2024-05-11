class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        double totalCost = numeric_limits<double>::max();
        double curr = 0;
        vector<pair<double, int>> wq;
        for (int i = 0; i < n; i++) {
            wq.push_back(
                {static_cast<double>(wage[i]) / quality[i], quality[i]});
        }
        sort(wq.begin(), wq.end());
        priority_queue<int> high_q;
        for (int i = 0; i < n; i++) {
            high_q.push(wq[i].second);
            curr += wq[i].second;
            if (high_q.size() > k) {
                curr -= high_q.top();
                high_q.pop();
            }
            if (high_q.size() == k) {
                totalCost = min(totalCost, curr * wq[i].first);
            }
        }
        return totalCost;
    }
};