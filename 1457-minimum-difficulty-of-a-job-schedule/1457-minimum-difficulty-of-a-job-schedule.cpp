#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    
    int solve(vector<vector<int>>& dp, vector<int>& jd, int index, int days, int n) {
        if (days == 1) {
            int maxi = jd[index];
            for (int ii = index; ii < n; ii++)
                maxi = max(maxi, jd[ii]);
            return maxi;
        }

        if (dp[index][days] != -1)
            return dp[index][days];

        int res = INT_MAX;
        int maxii = jd[index];

        for (int k = index; k <= n - days; k++) {
            maxii = max(maxii, jd[k]);
            int ms = maxii + solve(dp, jd, k + 1, days - 1, n);
            res = min(res, ms);
        }

        return dp[index][days] = res;
    }

    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (n < d) return -1;

        vector<vector<int>> dp(n, vector<int>(d + 1, -1));
        return solve(dp, jobDifficulty, 0, d, n);
    }
};
