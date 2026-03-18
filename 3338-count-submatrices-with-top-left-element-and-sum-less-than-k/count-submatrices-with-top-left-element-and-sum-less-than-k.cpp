class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        if (grid.empty() || grid[0].empty()) return 0;  

        int n = grid.size(), m = grid[0].size(), ans = 0;
        vector<vector<int>> sum(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 && j == 0)
                    sum[i][j] = grid[i][j];
                else if (i == 0)
                    sum[i][j] = grid[i][j] + sum[i][j - 1];
                else if (j == 0)
                    sum[i][j] = grid[i][j] + sum[i - 1][j];
                else
                    sum[i][j] = grid[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (sum[i][j] <= k) ans++;
            }
        }

        return ans;
    }
};