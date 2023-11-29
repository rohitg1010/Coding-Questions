class Solution {
public:
    bool f(int idx,vector<int>&arr,vector<int> &vis){
        if(idx<0||idx>=arr.size()) return false;
        if(vis[idx]!=0){
            if(arr[idx]==0) return true;
            return false;
        }
        vis[idx]=1;
        if(arr[idx]==0) return true;
        return f(idx+arr[idx],arr,vis)||f(idx-arr[idx],arr,vis);
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int> vis(n,0);
        // vis[start]=1;
        return f(start,arr,vis);
    }
};