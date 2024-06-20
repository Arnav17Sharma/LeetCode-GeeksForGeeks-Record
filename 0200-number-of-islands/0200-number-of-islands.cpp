class Solution {
private:
    void dfs(int x, int y, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        grid[x][y] = '0';
        int delx[4] = {-1, 0, 1, 0};
        int dely[4] = {0, -1, 0, 1};
        for(int i=0; i<4; i++) {
            int newx = x + delx[i];
            int newy = y + dely[i];
            if(newx >= 0 && newx < n && newy >= 0 && newy < m && grid[newx][newy] == '1') {
                dfs(newx, newy, grid);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '1') {
                    dfs(i, j, grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};