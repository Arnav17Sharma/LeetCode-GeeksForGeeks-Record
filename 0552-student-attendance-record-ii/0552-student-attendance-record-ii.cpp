class Solution {
    int MOD = 1000000007;
    vector<vector<vector<int>>> memo;

public:
    int comb(int n, int abst, int conlate) {
        if (abst >= 2 or conlate >= 3) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        if (memo[n][abst][conlate] != -1) {
            return memo[n][abst][conlate];
        }
        int count = 0;
        count = comb(n - 1, abst, 0);
        count = (count + comb(n - 1, abst + 1, 0)) % MOD;
        count = (count + comb(n - 1, abst, conlate + 1)) % MOD;
        return memo[n][abst][conlate] = count;
    }
    int checkRecord(int n) {
        memo = vector<vector<vector<int>>>(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        return comb(n, 0, 0);
    }
};