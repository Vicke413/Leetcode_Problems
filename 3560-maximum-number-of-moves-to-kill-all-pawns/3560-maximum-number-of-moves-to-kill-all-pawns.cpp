class Solution {
public:
    vector<vector<int>> directions = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},
                                      {-1,2},{-1,-2}};

    void bfs(int x, int y, vector<vector<int>>& pos, vector<vector<int>>& minDist, int index) {
        vector<vector<int>> t(50, vector<int>(50, -1));
        queue<pair<int, int>> qq;
        qq.push({x, y});
        t[x][y] = 0;

        while (!qq.empty()) {
            auto [curx, cury] = qq.front();
            qq.pop();

            for (auto& dir : directions) {
                int nr = curx + dir[0];
                int nc = cury + dir[1];
                if (nr >= 0 && nr < 50 && nc >= 0 && nc < 50 && t[nr][nc] == -1) {
                    t[nr][nc] = t[curx][cury] + 1;
                    qq.push({nr, nc});
                }
            }
        }

        for (int i = 0; i < pos.size(); i++) {
            int xx = pos[i][0];
            int yy = pos[i][1];
            minDist[index][i] = t[xx][yy];
        }
    }

    int solve(vector<vector<int>>& minDist, int idx, int mask, int n, bool A, int dp[51][1<<15]) {
        if (mask == 0) return 0;
        if (dp[idx][mask]!= -1) return dp[idx][mask];

        int res = (A ? -1 : 1e9);
        for (int i = 1; i < n; i++) {
            if (mask & (1 << (i - 1))) {
                int moves = minDist[idx][i];
                if (A) {
                    res = max(res, moves + solve(minDist, i, 
                    mask ^ (1 << (i - 1)), n, !A, dp));
                } else {
                    res = min(res, moves + 
                    solve(minDist, i, mask ^ (1 << (i - 1)), n, !A, dp));
                }
            }
        }
        dp[idx][mask] = res;
        return res;
    }

    int maxMoves(int kx, int ky, vector<vector<int>>& positions) {
        int n = positions.size();
        vector<vector<int>> pos;
        pos.push_back({kx, ky});
        for (auto &it : positions) {
            pos.push_back({it[0], it[1]});
        }

        vector<vector<int>> minDist(n + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < pos.size(); i++) {
            int x = pos[i][0];
            int y = pos[i][1];
            bfs(x, y, pos, minDist, i);
        }

int dp[51][1<<15];
memset(dp,-1,sizeof(dp));
        bool alice = true;

        return solve(minDist, 0, (1 << n) - 1, pos.size(), alice,dp);
    }
};
