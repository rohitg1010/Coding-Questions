class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        int n=img.size(),m=img[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            reverse(img[i].begin(),img[i].end());
            for(int j=0;j<m;j++){
                ans[i][j]=!img[i][j];
            }
        }
        return ans;
    }
};