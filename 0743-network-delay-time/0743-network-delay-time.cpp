class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n+1);

        for(auto &edge: times) {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});

        vector<int> delayTime(n+1, 1e9);
        delayTime[k] = 0;
        while(!pq.empty()) {
            pair<int, int> node = pq.top();
            pq.pop();
            int travel_time = node.first;
            int target = node.second;
            
            if(travel_time > delayTime[target])
                continue;
            
            for(auto &[adjNode, weight]: adj[target]){
                if(travel_time + weight < delayTime[adjNode]){
                    delayTime[adjNode] = travel_time + weight;
                    pq.push({delayTime[adjNode], adjNode});
                }
            }
        }

        int ans = 0;
        for(int i = 1; i<=n; i++) {
            int x = delayTime[i];
            if(x == 1e9) return -1;
            ans = max(ans, x);
        }

        return ans;
    }
};