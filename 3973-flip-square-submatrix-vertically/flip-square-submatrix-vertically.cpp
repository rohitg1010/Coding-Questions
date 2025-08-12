class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for (int i = 0; i < k / 2; i++) {
            int topRow = x + i;
            int bottomRow = x + k - 1 - i;
            for (int col = 0; col < k; col++) {
                swap(grid[topRow][y + col], grid[bottomRow][y + col]);
            }
        }
        return grid;
    }
};