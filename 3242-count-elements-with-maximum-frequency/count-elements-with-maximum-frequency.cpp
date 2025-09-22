class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi=-1,ans=0;
        for(int it:nums){
            mp[it]++;
            maxi=max(maxi,mp[it]);
        }
        for(auto it:mp) if(it.second==maxi) ans+=maxi;
        return ans;
    }
};