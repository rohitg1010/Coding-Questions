//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int i,int j,vector<pair<int,int>>& v,vector<vector<int>>& grid,vector<vector<int>>& vis,int bi,int bc){
        int drow[]={-1,0,1,0},dcol[]={0,1,0,-1};
        int n=grid.size(),m=grid[0].size();
        // int bi=i,bc=j;
        for(int k=0;k<4;k++){
            int nr=i+drow[k],nc=j+dcol[k];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&grid[nr][nc]==1){
                v.push_back({bi-nr,bc-nc});
                vis[nr][nc]=1;
                dfs(nr,nc,v,grid,vis,bi,bc);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    vis[i][j]=1;
                    vector<pair<int,int>> v;
                    v.push_back({0,0});
                    dfs(i,j,v,grid,vis,i,j);
                    st.insert(v);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends