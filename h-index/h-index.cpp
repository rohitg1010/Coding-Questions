class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(),cit.end());
        int ans=0,n=cit.size();
        for(int i=n-1;i>=0;i--) {
            if(cit[i]>=n-i){
                ans++;
            }  
        }
        return ans;
    }
};