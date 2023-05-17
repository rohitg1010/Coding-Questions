class Solution {
public:
    void dfs(int r,int c,vector<vector<char>> board,vector<vector<int>>& vis){
        int n=board.size(),m=board[0].size();
        // cout<<r<<" "<<c<<endl;
        vis[r][c]=1;
        int drow[]={-1,0,1,0},dcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+drow[i],nc=c+dcol[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&board[nr][nc]=='O'){
                dfs(nr,nc,board,vis);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||j==0||i==n-1||j==m-1)){
                    if(board[i][j]=='O'&&vis[i][j]==0){
                        // cout<<i<<" "<<j<<endl;
                        dfs(i,j,board,vis);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0) board[i][j]='X';
            }
        }
    }
};