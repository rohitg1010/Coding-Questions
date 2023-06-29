class Solution {
public:
    int rev(int it){
        int t=0;
            while(it){
                t=(t*10)+(it%10);
                it/=10;
            }
        return t;
    }
    int countNicePairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // for(auto it:nums) mp[it]++;
        long long int mod = 1e9+7;
        unordered_map<int,int> mp;
        long long int ans=0;
        for(auto it:nums){
            int diff=(it-rev(it));
            if(mp.find(diff)!=mp.end()) {
                ans+=mp[diff];
            }
            mp[diff]++;
        }
        // for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
        return ans%mod;
    }
};