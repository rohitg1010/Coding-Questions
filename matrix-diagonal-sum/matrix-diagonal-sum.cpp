class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size()-1;
        int sum = 0,j=n;
        for (int i = 0; i <= n; i++) {
            sum+=mat[i][i];
            sum+=mat[j][i];
            if(i==j) sum-=mat[i][j];
            // sum+=mat[i][j];
            j--;
        }
        return sum;
    }
};