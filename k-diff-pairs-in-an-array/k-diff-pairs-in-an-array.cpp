class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums) mp[it]++;
        int ans=0;
        for(auto it:mp){
            if(k==0){
                if(it.second>=2) ans++;
            }
            else{
                if(mp.count(it.first+k)>0) ans++;
            }
        }
        return ans;
    }
};