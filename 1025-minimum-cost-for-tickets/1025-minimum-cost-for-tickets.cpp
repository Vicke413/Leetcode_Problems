#include <vector>
#include <algorithm> // For the min function

class Solution {
public:
    int solve(vector<int>& days, int index, vector<int>& costs, int n, vector<int>& dp) {
        if (index >= n)
            return 0;

        if (dp[index] != -1)
            return dp[index];

        // Cost for 1-day pass
        int day1pass = costs[0] + solve(days, index + 1, costs, n, dp);

        // Cost for 7-day pass
        int j = index;
        int max7 = days[index] + 7 - 1; // End day for 7-day pass
        while (j < n && days[j] <= max7) {
            j++;
        }
        int day7pass = costs[1] + solve(days, j, costs, n, dp);

        // Cost for 30-day pass
        j = index;
        int maxdays30 = days[index] + 30 - 1; // End day for 30-day pass
        while (j < n && days[j] <= maxdays30) {
            j++;
        }
        int day30pass = costs[2] + solve(days, j, costs, n, dp);

        dp[index] = min({day1pass, day7pass, day30pass});
        return dp[index];
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n + 1, -1);
        return solve(days, 0, costs, n, dp);
    }
};
