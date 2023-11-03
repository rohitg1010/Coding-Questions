class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[nums[0]]=0;
        for(int i=1;i<n;i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                return {mp[temp],i};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        // for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
        return {0,0};
    }
};