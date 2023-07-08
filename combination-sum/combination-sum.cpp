class Solution {
public:
    void solve(int idx, int n, vector<int> &v, vector<int> &candidates, int target,vector<vector<int>>& ans ){
        if(idx==n){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[idx]<=target){
            v.push_back(candidates[idx]);
            solve(idx,n,v,candidates,target-candidates[idx],ans);
            v.pop_back();
        }
        solve(idx+1,n,v,candidates,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,n,temp,candidates,target,ans);
        return ans;
    }
};