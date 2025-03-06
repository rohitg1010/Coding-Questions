class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> count((n*n)+1,0);
        int a = -1,b = -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]-1]++;
                if(count[grid[i][j]-1]>1) a = grid[i][j]; 
            }
        }
        for(int i=0;i<n*n;i++){
            if(count[i]==0) b = i+1;
        }
        return {a,b};
    }
};