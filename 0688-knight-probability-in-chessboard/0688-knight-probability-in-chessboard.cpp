#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int dx[8] = {-1, -1, 1, 1, 2, 2, -2, -2};
    int dy[8] = {2, -2, 2, -2, 1, -1, 1, -1};

    double solve(int n, int k, int row, int col, unordered_map<string, double>& mp) {
        if (row < 0 || row >= n || col < 0 || col >= n) {
            return 0.0;
        }

        if (k == 0) {
            return 1.0;
        }

        string key = to_string(row) + "_" + to_string(col) + "_" + to_string(k);
        if (mp.find(key) != mp.end()) {
            return mp[key];
        }

        double ans = 0.0;
        for (int i = 0; i < 8; ++i) {
            int nr = row + dx[i];
            int nc = col + dy[i];
            ans += solve(n, k - 1, nr, nc, mp);
        }

        mp[key] = ans / 8.0;
        return mp[key];
    }

    double knightProbability(int n, int k, int row, int column) {
        unordered_map<string, double> mp;
        return solve(n, k, row, column, mp);
    }
};
