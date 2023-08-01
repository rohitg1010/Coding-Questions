class Solution {
public:
 void solve(int n,int k,vector<vector<int>>&ans,vector<int>&v)
 {
        //base case...
         if(v.size()==k)
        {
         ans.push_back(v);
         return;
        }
        if(n==0)
        {
         return;
        }
//Recursive function logic

         v.push_back(n );
       solve(n-1,k,ans,v); //pick 
       v.pop_back();
       solve(n-1,k,ans,v); //not pick
 
 }    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(n,k,ans,v);
        return ans;
    }
};