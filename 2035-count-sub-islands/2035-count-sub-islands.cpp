class Solution {
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int n, int m, vector<vector<int>>& vis, int i, int j, bool& isSubIsland) {
        vis[i][j] = 1;

        // If this cell is 1 in grid2 but 0 in grid1, it's not a sub-island
        if (grid1[i][j] == 0) {
            isSubIsland = false;
        }

        for (int k = 0; k < 4; k++) {
            int nr = dx[k] + i;
            int nc = dy[k] + j;
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid2[nr][nc] == 1 && vis[nr][nc] == 0) {
                dfs(grid1, grid2, n, m, vis, nr, nc, isSubIsland);
            }
        }
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m = grid1[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid2[i][j] == 1 && vis[i][j] == 0) {
                    bool isSubIsland = true;
                    dfs(grid1, grid2, n, m, vis, i, j, isSubIsland);
                    if (isSubIsland) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
