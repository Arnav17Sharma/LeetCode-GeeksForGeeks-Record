class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int count = 0, rows = board.size(), cols = board[0].size();
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (board[r][c] == '.') continue;
                else if (r && board[r - 1][c] == 'X') continue;
                else if (c && board[r][c - 1] == 'X') continue;
                ++count;
            }
        }
        return count;
    }
};