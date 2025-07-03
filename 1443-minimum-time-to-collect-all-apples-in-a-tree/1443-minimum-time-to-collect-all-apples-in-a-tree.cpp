class Solution {
public:
    int dfs(unordered_map<int, vector<int>>& adj, int curr, vector<bool>& hasApple, int parent) {
        int time = 0;
        for (auto child : adj[curr]) {
            if (child == parent) continue;  // Don't revisit parent
            int chTime = dfs(adj, child, hasApple, curr);
            if (chTime > 0 || hasApple[child]) {
                time += chTime + 2;
            }
        }
        return time;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        unordered_map<int, vector<int>> mp;
        for (auto it : edges) {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);  // Since undirected
        }
        return dfs(mp, 0, hasApple, -1);
    }
};