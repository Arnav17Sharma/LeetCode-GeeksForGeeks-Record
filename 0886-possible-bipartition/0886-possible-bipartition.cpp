class Solution {
public:
    bool bfs(unordered_map<int, vector<int>> &adj, int node, vector<int> &color) {
        queue<int> q;
        q.push(node);
        color[node] = 1;

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            for(int &v: adj[u]) {
                if(color[u] == color[v])
                    return false;
                if(color[v] == -1) {
                    q.push(v);
                    color[v] = 1 - color[u];
                }
            }
        }
        return true;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        unordered_map<int, vector<int>> adj;
        vector<int> color(n+1, -1);

        for(vector<int>& edge: dislikes) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=1; i<=n; i++) {
            if(color[i] == -1) {
                if(bfs(adj, i, color) == false)
                    return false;
            }
        }
        return true;
    }
};