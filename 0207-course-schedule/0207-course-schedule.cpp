class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<vector<int>> adj(numCourses);
        for(int i=0; i<pre.size(); i++) {
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        vector<int> indegree(numCourses);
        for(int i=0; i<numCourses; i++) {
            for(auto x: adj[i])
                indegree[x]++;
        }
        queue<int> q;        
        for(int i=0; i<numCourses; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto x: adj[node]) {
                indegree[x]--;
                if(indegree[x] == 0) {
                    q.push(x);
                }
            }
        }
        if(ans.size() != numCourses) {
            return false;
        }
        return true;
    }
};