class Solution {
private:
    void dfs(vector<vector<int>>& graph, int u, vector<int> path, vector<vector<int>>& ans) {
        if(u == graph.size()-1) {ans.push_back(path); return;}
        
        for(auto x: graph[u]) {
            path.push_back(x);
            dfs(graph, x, path, ans);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        dfs(graph, 0, {0}, ans);
        return ans;
    }
};