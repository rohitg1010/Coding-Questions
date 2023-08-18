class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<4) return ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long int a = nums[i];
                long int b = nums[j];
                long int sum = target - (a + b);
                int lo=j+1,hi=n-1;
                while(lo<hi){
                    long int req=nums[lo]+nums[hi];
                    if(req<sum) lo++;
                    else if(req>sum) hi--;
                    else{
                        s.insert({nums[i],nums[j],nums[lo],nums[hi]});
                        // while(lo<hi&&nums[lo]==nums[lo+1]) ++lo;
                        // while(lo<hi&&nums[hi]==nums[hi-1]) --hi;
                        lo++; hi--;
                    }
                }
                while(j+1<n&&nums[j]==nums[j+1]) ++j;
                //j++;
            }
        }
        for(auto it:s) ans.push_back(it);
        return ans;
    }
};