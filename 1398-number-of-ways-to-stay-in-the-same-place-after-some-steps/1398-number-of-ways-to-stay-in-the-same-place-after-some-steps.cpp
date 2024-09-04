class Solution {
public:
    const int MOD = 1e9 + 7;
    
    int solve(int steps, int index, int arrLen, vector<vector<int>>& dp) {
        if (steps < 0 || index < 0 || index >= arrLen) return 0;
        if (steps == 0) return index == 0 ? 1 : 0;
        if (dp[steps][index] != -1) return dp[steps][index];
        
        int takel = solve(steps - 1, index - 1, arrLen, dp);
        int taker = solve(steps - 1, index + 1, arrLen, dp);
        int dontmove = solve(steps - 1, index, arrLen, dp);
        
        dp[steps][index] = ((takel%MOD + taker %MOD)%MOD+ dontmove%MOD) % MOD;
        return dp[steps][index];
    }
    
    int numWays(int steps, int arrLen) {
        int maxLen = min(arrLen, steps + 1);
        vector<vector<int>> dp(steps + 1, vector<int>(maxLen, -1));
        return solve(steps, 0, maxLen, dp);
    }
};
