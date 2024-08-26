class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n, false); 
        
        for (const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        stack<int> stk;
        stk.push(source);
        visited[source] = true;
        
        while (!stk.empty()) {
            int node = stk.top();
            stk.pop();
            
            if (node == destination) {
                return true;
            }
            
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    stk.push(neighbor);
                }
            }
        }
        
        return false;
    }
};
