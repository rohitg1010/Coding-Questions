class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0||i==n-1||j==m-1){
                    if(grid[i][j]==1){
                        q.push({i,j});
                        vis[i][j]=1;
                    }
                }
            }
        }
        int drow[]={-1,0,1,0},dcol[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first,c=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nr=r+drow[k],nc=c+dcol[k];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&grid[nr][nc]==1){
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]) ans++;
            }
        }
        return ans;
    }
};