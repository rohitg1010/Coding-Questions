class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0,ans=0;
        for(auto it:gain) {
            // ans=max(ans,ans+it);
            ans+=it;
            if(ans>res) res=ans;
        }
        // cout<<endl;
        return res;
    }
};