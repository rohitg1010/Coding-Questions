class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<long long int> row(m,0),col(n,0);
        long long sum_row=0,sum_col=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                row[i]+=grid[i][j];
                col[j]+=grid[i][j];
                sum_row+=grid[i][j];
                sum_col+=grid[i][j];
            }
        }
        //long long int sum_row = accumulate(row.begin(),row.end(),0);
        //long long int sum_col = accumulate(col.begin(),col.end(),0);
        //cout<<sum_row<<" "<<sum_col<<endl;
        if((sum_row%2==0)||(sum_col%2==0)){
            long long int temp=0;
            for(int i=0;i<m;i++){
                temp+=row[i];
                if((temp+temp)==sum_row) return true;
            }
            temp=0;
            for(int i=0;i<n;i++){
                temp+=col[i];
                if((temp+temp)==sum_col) return true;
            }
        }
        return false;
    }
};