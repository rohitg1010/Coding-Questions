class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,maxi=0;
        for(int i=0;i<accounts.size();i++){
            sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};