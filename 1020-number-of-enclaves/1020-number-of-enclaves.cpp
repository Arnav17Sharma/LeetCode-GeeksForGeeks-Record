class Solution {
private:
    void dfs(int x, int y, vector<vector<int>>& board, vector<vector<int>>& vis) {
        int n = board.size();
        int m = board[0].size();
                
        vis[x][y] = 1;
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, -1, 0, 1};
        
        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && nx < n && ny < m && board[nx][ny] == 1 && !vis[nx][ny]) {
                dfs(nx, ny, board, vis);    
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m,0)); 
        
        for(int i=0; i<m; i++) {
            if(board[0][i] == 1 && !vis[0][i]) 
                dfs(0, i, board, vis);
            
            if(board[n-1][i] == 1 && !vis[n-1][i]) 
                dfs(n-1, i, board, vis);
        }
        for(int i=0; i<n; i++) {
            if(board[i][0] == 1 && !vis[i][0]) 
                dfs(i, 0, board, vis);
            
            if(board[i][m-1] == 1 && !vis[i][m-1]) 
                dfs(i, m-1, board, vis);
        }
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j] == 1 && !vis[i][j]) 
                    ans++;
            }
        }
        return ans;
    }
};