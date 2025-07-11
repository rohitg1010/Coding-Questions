class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<vector<int>> ans;
        ans.push_back(points[0]);
        int k = 0,n=points.size();
        for(int i=1;i<n;i++){
            if(points[i][0]<=ans[k][1]){
                ans[k][1]=min(points[i][1],ans[k][1]);
            }
            else{
                ans.push_back(points[i]);
                k++;
            }
        }
        return ans.size();
    }
};