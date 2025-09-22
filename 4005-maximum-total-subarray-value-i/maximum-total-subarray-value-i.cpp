class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini = INT_MAX,maxi=-1;
        for(int it:nums){
            mini=min(mini,it);
            maxi=max(maxi,it);
        }
        long long ans = (maxi-mini);
        ans*=k;
        return ans;
    }
};