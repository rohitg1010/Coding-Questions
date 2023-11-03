class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int> v(n+1,0);
        vector<string> ans;
        for(auto it:target) v[it]=1;
        for(int i=1;i<=n;i++){
            if(v[i]==1){
                ans.push_back("Push");
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        while(ans[ans.size()-1]=="Pop"){
            ans.pop_back();
            ans.pop_back();
        }
        return ans;
    }
};