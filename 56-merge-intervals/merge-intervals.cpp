class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int k = 0,n=intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=ans[k][1]){
                ans[k][1]=max(intervals[i][1],ans[k][1]);
            }
            else{
                ans.push_back(intervals[i]);
                k++;
            }
        }
        return ans;
    }
};