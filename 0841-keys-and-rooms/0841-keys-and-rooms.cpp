class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int source, vector<bool>& visited) {
        visited[source] = true;
        for(auto x: rooms[source]) {
            if(!visited[x]) 
                dfs(rooms, x, visited);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, 0, visited);

        for(bool x: visited) {
            if(x == false)
                return false;
        }
        return true;
    }
};